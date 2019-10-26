/*******************************************************************************
 * Project:  Hello
 * @file     ModuleHello.cpp
 * @brief 
 * @author   cjy
 * @date:    2017年2月1日
 * @note
 * Modify history:
 ******************************************************************************/
#include <map>
#include "util/UnixTime.hpp"
#include "util/HashCalc.hpp"
#include "util/StringCoder.hpp"
#include "ModuleInterface.hpp"

MUDULE_CREATE(robot::ModuleHello);

namespace robot
{

ModuleHello::ModuleHello()
{
}

ModuleHello::~ModuleHello()
{
}

bool ModuleHello::Init()
{
    return(true);
}

void ModuleHello::GenKey(const net::tagMsgShell& stMsgShell,const HttpMsg& oInHttpMsg)
{
	std::string strToken = std::to_string(util::GetUniqueId(net::GetNodeId(),net::GetWorkerIndex()));
	std::string strKey = std::to_string(util::GetUniqueId(net::GetNodeId(),net::GetWorkerIndex()));

	{//返回客户端
		util::CJsonObject oRsp;
		oRsp.Add("token", strToken);
		oRsp.Add("key", strKey);
		net::SendToClient(stMsgShell,oInHttpMsg,oRsp.ToString(),200);
	}
	{//发送服务器
		auto callback = [] (const MsgHead& oInMsgHead,const MsgBody& oInMsgBody,void* data,net::Step*pStep)
		{
			LOG4_TRACE("callback %s",oInMsgBody.body().c_str());//不需要再返回客户端
		};
		util::CJsonObject oJson;
		std::string address = g_pLabor->GetClientAddr(stMsgShell);
		oJson.Add("token", strToken);
		oJson.Add("key", strKey);
		oJson.Add("genkey", "1");

		oJson.Add("address",address);
		LOG4_DEBUG("oJson(%s)",oJson.ToString().c_str());
		int64 mod = util::CalcKeyHash(address.c_str(),address.size());
		net::SendToModCallback(new net::DataStep(stMsgShell,oInHttpMsg),GET_TOKEN_GEN,oJson.ToString(),callback,mod,"LOGIC");
	}
}

void ModuleHello::VerifyKey(const net::tagMsgShell& stMsgShell,const HttpMsg& oInHttpMsg)
{
	std::map<std::string, std::string> mapParameters;
	util::DecodeParameter(oInHttpMsg.url(),mapParameters,'?');
	util::CJsonObject oJson;
	for(auto p:mapParameters)
	{
		oJson.Add(p.first,p.second);
		LOG4_DEBUG("Param(%s %s)",p.first.c_str(),p.second.c_str());
	}
	std::string strToken = oJson("token");
	std::string strKey = oJson("key");
	if (strToken.empty() || strKey.empty())
	{
		LOG4_ERROR("%s() strToken.empty() || strKey.empty()", __FUNCTION__);
		net::SendToClient(stMsgShell,oInHttpMsg,"strToken empty or strKey empty",400);
		return;
	}
	auto callback = [] (const MsgHead& oInMsgHead,const MsgBody& oInMsgBody,void* data,net::Step*pStep)
	{
		LOG4_TRACE("callback %s",oInMsgBody.body().c_str());
		util::CJsonObject oJson;
		oJson.Parse(oInMsgBody.body());
		int code(1);
		oJson.Get("code",code);
		pStep->SendToClient(oInMsgBody.body(), code == 0 ? 200 : 400);
	};
	oJson.Add("verifykey", "1");
	std::string address = g_pLabor->GetClientAddr(stMsgShell);
	oJson.Add("address",address);
	LOG4_DEBUG("oJson(%s)",oJson.ToString().c_str());
	int64 mod = util::CalcKeyHash(address.c_str(),address.size());
	net::SendToModCallback(new net::DataStep(stMsgShell,oInHttpMsg),GET_TOKEN_GEN,oJson.ToString(),callback,mod,"LOGIC");
}

bool ModuleHello::AnyMessage(const net::tagMsgShell& stMsgShell,const HttpMsg& oInHttpMsg)
{
	LOG4_DEBUG("oInHttpMsg:%s",oInHttpMsg.DebugString().c_str());

	auto iter = std::find(oInHttpMsg.url().begin(),oInHttpMsg.url().end(),'?');
	if (iter == oInHttpMsg.url().end())//请求gen token key
	{
		GenKey(stMsgShell,oInHttpMsg);
	}
	else
	{
		VerifyKey(stMsgShell,oInHttpMsg);
	}
	return true;
}


void ModuleHello::Response(const net::tagMsgShell& stMsgShell,const HttpMsg& oInHttpMsg,int iCode)
{
    util::CJsonObject oRsp;
    oRsp.Add("code", iCode);
    oRsp.Add("msg", "ok");
    net::SendToClient(stMsgShell,oInHttpMsg,oRsp.ToString());
}

} /* namespace core */