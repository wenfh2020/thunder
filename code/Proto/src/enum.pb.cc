// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: enum.proto

#include "enum.pb.h"

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

namespace protobuf_enum_2eproto {
void InitDefaults() {
}

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[3];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "enum.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nenum.proto*\204\001\n\rE_CLIENT_TYPE\022\026\n\022E_TYPE"
      "_UNKNOWN_DEV\020\000\022\022\n\016E_TYPE_ANDRIOD\020\001\022\026\n\022E_"
      "TYPE_ANDRIOD_PAD\020\002\022\016\n\nE_TYPE_IOS\020\003\022\017\n\013E_"
      "TYPE_IPAD\020\004\022\016\n\nE_TYPE_WEB\020\005*\202\001\n\013E_CHAT_T"
      "YPE\022\027\n\023E_TYPE_CHAT_UNKNOWN\020\000\022\024\n\020E_TYPE_C"
      "HAT_TEXT\020\001\022\023\n\017E_TYPE_CHAT_PIC\020\002\022\025\n\021E_TYP"
      "E_CHAT_VOICE\020\003\022\030\n\024E_TYPE_CHAT_LOCATION\020\004"
      "*G\n\024E_USER_IDENTITY_TYPE\022\032\n\026E_USER_IDENT"
      "ITY_UNKOWN\020\000\022\023\n\017E_USER_IDENTITY\020\001b\006proto"
      "3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 361);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "enum.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_enum_2eproto
const ::google::protobuf::EnumDescriptor* E_CLIENT_TYPE_descriptor() {
  protobuf_enum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_enum_2eproto::file_level_enum_descriptors[0];
}
bool E_CLIENT_TYPE_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* E_CHAT_TYPE_descriptor() {
  protobuf_enum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_enum_2eproto::file_level_enum_descriptors[1];
}
bool E_CHAT_TYPE_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* E_USER_IDENTITY_TYPE_descriptor() {
  protobuf_enum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_enum_2eproto::file_level_enum_descriptors[2];
}
bool E_USER_IDENTITY_TYPE_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
