// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user_basic.proto

#include "user_basic.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace server {
class user_basicDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<user_basic>
      _instance;
} _user_basic_default_instance_;
}  // namespace server
namespace protobuf_user_5fbasic_2eproto {
static void InitDefaultsuser_basic() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::server::_user_basic_default_instance_;
    new (ptr) ::server::user_basic();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::server::user_basic::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_user_basic =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsuser_basic}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_user_basic.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, appid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, appguid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, appsecret_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, login_token_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, userid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, account_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, nickname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, avatar_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, user_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, login_client_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, login_ip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::server::user_basic, user_identity_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::server::user_basic)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::server::_user_basic_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "user_basic.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\020user_basic.proto\022\006server\"\356\001\n\nuser_basi"
      "c\022\r\n\005appid\030\001 \001(\r\022\017\n\007appguid\030\002 \001(\014\022\021\n\tapp"
      "secret\030\003 \001(\014\022\023\n\013login_token\030\004 \001(\004\022\016\n\006use"
      "rid\030\005 \001(\r\022\017\n\007account\030\006 \001(\014\022\020\n\010nickname\030\007"
      " \001(\014\022\016\n\006avatar\030\010 \001(\014\022\021\n\tuser_type\030\t \001(\r\022"
      "\031\n\021login_client_type\030\n \001(\r\022\020\n\010login_ip\030\013"
      " \001(\t\022\025\n\ruser_identity\030\014 \001(\004b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 275);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "user_basic.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_user_5fbasic_2eproto
namespace server {

// ===================================================================

void user_basic::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int user_basic::kAppidFieldNumber;
const int user_basic::kAppguidFieldNumber;
const int user_basic::kAppsecretFieldNumber;
const int user_basic::kLoginTokenFieldNumber;
const int user_basic::kUseridFieldNumber;
const int user_basic::kAccountFieldNumber;
const int user_basic::kNicknameFieldNumber;
const int user_basic::kAvatarFieldNumber;
const int user_basic::kUserTypeFieldNumber;
const int user_basic::kLoginClientTypeFieldNumber;
const int user_basic::kLoginIpFieldNumber;
const int user_basic::kUserIdentityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

user_basic::user_basic()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_user_5fbasic_2eproto::scc_info_user_basic.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:server.user_basic)
}
user_basic::user_basic(const user_basic& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  appguid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.appguid().size() > 0) {
    appguid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.appguid_);
  }
  appsecret_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.appsecret().size() > 0) {
    appsecret_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.appsecret_);
  }
  account_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.account().size() > 0) {
    account_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.account_);
  }
  nickname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.nickname().size() > 0) {
    nickname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nickname_);
  }
  avatar_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.avatar().size() > 0) {
    avatar_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.avatar_);
  }
  login_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.login_ip().size() > 0) {
    login_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.login_ip_);
  }
  ::memcpy(&appid_, &from.appid_,
    static_cast<size_t>(reinterpret_cast<char*>(&user_identity_) -
    reinterpret_cast<char*>(&appid_)) + sizeof(user_identity_));
  // @@protoc_insertion_point(copy_constructor:server.user_basic)
}

void user_basic::SharedCtor() {
  appguid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  appsecret_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  account_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nickname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  avatar_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  login_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&appid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&user_identity_) -
      reinterpret_cast<char*>(&appid_)) + sizeof(user_identity_));
}

user_basic::~user_basic() {
  // @@protoc_insertion_point(destructor:server.user_basic)
  SharedDtor();
}

void user_basic::SharedDtor() {
  appguid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  appsecret_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  account_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nickname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  avatar_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  login_ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void user_basic::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* user_basic::descriptor() {
  ::protobuf_user_5fbasic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_user_5fbasic_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const user_basic& user_basic::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_user_5fbasic_2eproto::scc_info_user_basic.base);
  return *internal_default_instance();
}


void user_basic::Clear() {
// @@protoc_insertion_point(message_clear_start:server.user_basic)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  appguid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  appsecret_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  account_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nickname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  avatar_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  login_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&appid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&user_identity_) -
      reinterpret_cast<char*>(&appid_)) + sizeof(user_identity_));
  _internal_metadata_.Clear();
}

bool user_basic::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:server.user_basic)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 appid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &appid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes appguid = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_appguid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes appsecret = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_appsecret()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 login_token = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &login_token_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 userid = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &userid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes account = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_account()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes nickname = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_nickname()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes avatar = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_avatar()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 user_type = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &user_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 login_client_type = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &login_client_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string login_ip = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_login_ip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->login_ip().data(), static_cast<int>(this->login_ip().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "server.user_basic.login_ip"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 user_identity = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &user_identity_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:server.user_basic)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:server.user_basic)
  return false;
#undef DO_
}

void user_basic::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:server.user_basic)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 appid = 1;
  if (this->appid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->appid(), output);
  }

  // bytes appguid = 2;
  if (this->appguid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->appguid(), output);
  }

  // bytes appsecret = 3;
  if (this->appsecret().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->appsecret(), output);
  }

  // uint64 login_token = 4;
  if (this->login_token() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->login_token(), output);
  }

  // uint32 userid = 5;
  if (this->userid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->userid(), output);
  }

  // bytes account = 6;
  if (this->account().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      6, this->account(), output);
  }

  // bytes nickname = 7;
  if (this->nickname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      7, this->nickname(), output);
  }

  // bytes avatar = 8;
  if (this->avatar().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      8, this->avatar(), output);
  }

  // uint32 user_type = 9;
  if (this->user_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->user_type(), output);
  }

  // uint32 login_client_type = 10;
  if (this->login_client_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->login_client_type(), output);
  }

  // string login_ip = 11;
  if (this->login_ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->login_ip().data(), static_cast<int>(this->login_ip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "server.user_basic.login_ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->login_ip(), output);
  }

  // uint64 user_identity = 12;
  if (this->user_identity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(12, this->user_identity(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:server.user_basic)
}

::google::protobuf::uint8* user_basic::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:server.user_basic)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 appid = 1;
  if (this->appid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->appid(), target);
  }

  // bytes appguid = 2;
  if (this->appguid().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->appguid(), target);
  }

  // bytes appsecret = 3;
  if (this->appsecret().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->appsecret(), target);
  }

  // uint64 login_token = 4;
  if (this->login_token() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->login_token(), target);
  }

  // uint32 userid = 5;
  if (this->userid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->userid(), target);
  }

  // bytes account = 6;
  if (this->account().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->account(), target);
  }

  // bytes nickname = 7;
  if (this->nickname().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        7, this->nickname(), target);
  }

  // bytes avatar = 8;
  if (this->avatar().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        8, this->avatar(), target);
  }

  // uint32 user_type = 9;
  if (this->user_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->user_type(), target);
  }

  // uint32 login_client_type = 10;
  if (this->login_client_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->login_client_type(), target);
  }

  // string login_ip = 11;
  if (this->login_ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->login_ip().data(), static_cast<int>(this->login_ip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "server.user_basic.login_ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->login_ip(), target);
  }

  // uint64 user_identity = 12;
  if (this->user_identity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(12, this->user_identity(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:server.user_basic)
  return target;
}

size_t user_basic::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:server.user_basic)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes appguid = 2;
  if (this->appguid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->appguid());
  }

  // bytes appsecret = 3;
  if (this->appsecret().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->appsecret());
  }

  // bytes account = 6;
  if (this->account().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->account());
  }

  // bytes nickname = 7;
  if (this->nickname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->nickname());
  }

  // bytes avatar = 8;
  if (this->avatar().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->avatar());
  }

  // string login_ip = 11;
  if (this->login_ip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->login_ip());
  }

  // uint32 appid = 1;
  if (this->appid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->appid());
  }

  // uint32 userid = 5;
  if (this->userid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->userid());
  }

  // uint64 login_token = 4;
  if (this->login_token() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->login_token());
  }

  // uint32 user_type = 9;
  if (this->user_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->user_type());
  }

  // uint32 login_client_type = 10;
  if (this->login_client_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->login_client_type());
  }

  // uint64 user_identity = 12;
  if (this->user_identity() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->user_identity());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void user_basic::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:server.user_basic)
  GOOGLE_DCHECK_NE(&from, this);
  const user_basic* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const user_basic>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:server.user_basic)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:server.user_basic)
    MergeFrom(*source);
  }
}

void user_basic::MergeFrom(const user_basic& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:server.user_basic)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.appguid().size() > 0) {

    appguid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.appguid_);
  }
  if (from.appsecret().size() > 0) {

    appsecret_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.appsecret_);
  }
  if (from.account().size() > 0) {

    account_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.account_);
  }
  if (from.nickname().size() > 0) {

    nickname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nickname_);
  }
  if (from.avatar().size() > 0) {

    avatar_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.avatar_);
  }
  if (from.login_ip().size() > 0) {

    login_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.login_ip_);
  }
  if (from.appid() != 0) {
    set_appid(from.appid());
  }
  if (from.userid() != 0) {
    set_userid(from.userid());
  }
  if (from.login_token() != 0) {
    set_login_token(from.login_token());
  }
  if (from.user_type() != 0) {
    set_user_type(from.user_type());
  }
  if (from.login_client_type() != 0) {
    set_login_client_type(from.login_client_type());
  }
  if (from.user_identity() != 0) {
    set_user_identity(from.user_identity());
  }
}

void user_basic::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:server.user_basic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void user_basic::CopyFrom(const user_basic& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:server.user_basic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool user_basic::IsInitialized() const {
  return true;
}

void user_basic::Swap(user_basic* other) {
  if (other == this) return;
  InternalSwap(other);
}
void user_basic::InternalSwap(user_basic* other) {
  using std::swap;
  appguid_.Swap(&other->appguid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  appsecret_.Swap(&other->appsecret_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  account_.Swap(&other->account_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  nickname_.Swap(&other->nickname_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  avatar_.Swap(&other->avatar_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  login_ip_.Swap(&other->login_ip_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(appid_, other->appid_);
  swap(userid_, other->userid_);
  swap(login_token_, other->login_token_);
  swap(user_type_, other->user_type_);
  swap(login_client_type_, other->login_client_type_);
  swap(user_identity_, other->user_identity_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata user_basic::GetMetadata() const {
  protobuf_user_5fbasic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_user_5fbasic_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace server
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::server::user_basic* Arena::CreateMaybeMessage< ::server::user_basic >(Arena* arena) {
  return Arena::CreateInternal< ::server::user_basic >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
