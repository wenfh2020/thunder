// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test_proto3.proto

#ifndef PROTOBUF_INCLUDED_test_5fproto3_2eproto
#define PROTOBUF_INCLUDED_test_5fproto3_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_test_5fproto3_2eproto 

namespace protobuf_test_5fproto3_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_test_5fproto3_2eproto
class test_bar;
class test_barDefaultTypeInternal;
extern test_barDefaultTypeInternal _test_bar_default_instance_;
class test_proto3;
class test_proto3DefaultTypeInternal;
extern test_proto3DefaultTypeInternal _test_proto3_default_instance_;
namespace google {
namespace protobuf {
template<> ::test_bar* Arena::CreateMaybeMessage<::test_bar>(Arena*);
template<> ::test_proto3* Arena::CreateMaybeMessage<::test_proto3>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class test_bar : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:test_bar) */ {
 public:
  test_bar();
  virtual ~test_bar();

  test_bar(const test_bar& from);

  inline test_bar& operator=(const test_bar& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  test_bar(test_bar&& from) noexcept
    : test_bar() {
    *this = ::std::move(from);
  }

  inline test_bar& operator=(test_bar&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const test_bar& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const test_bar* internal_default_instance() {
    return reinterpret_cast<const test_bar*>(
               &_test_bar_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(test_bar* other);
  friend void swap(test_bar& a, test_bar& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline test_bar* New() const final {
    return CreateMaybeMessage<test_bar>(NULL);
  }

  test_bar* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<test_bar>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const test_bar& from);
  void MergeFrom(const test_bar& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(test_bar* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string TestBar3 = 3;
  void clear_testbar3();
  static const int kTestBar3FieldNumber = 3;
  const ::std::string& testbar3() const;
  void set_testbar3(const ::std::string& value);
  #if LANG_CXX11
  void set_testbar3(::std::string&& value);
  #endif
  void set_testbar3(const char* value);
  void set_testbar3(const char* value, size_t size);
  ::std::string* mutable_testbar3();
  ::std::string* release_testbar3();
  void set_allocated_testbar3(::std::string* testbar3);

  // bytes Testbar4 = 4;
  void clear_testbar4();
  static const int kTestbar4FieldNumber = 4;
  const ::std::string& testbar4() const;
  void set_testbar4(const ::std::string& value);
  #if LANG_CXX11
  void set_testbar4(::std::string&& value);
  #endif
  void set_testbar4(const char* value);
  void set_testbar4(const void* value, size_t size);
  ::std::string* mutable_testbar4();
  ::std::string* release_testbar4();
  void set_allocated_testbar4(::std::string* testbar4);

  // uint64 testBar2 = 2;
  void clear_testbar2();
  static const int kTestBar2FieldNumber = 2;
  ::google::protobuf::uint64 testbar2() const;
  void set_testbar2(::google::protobuf::uint64 value);

  // int32 test_bar1 = 1;
  void clear_test_bar1();
  static const int kTestBar1FieldNumber = 1;
  ::google::protobuf::int32 test_bar1() const;
  void set_test_bar1(::google::protobuf::int32 value);

  // fixed32 test_Bar5 = 5;
  void clear_test_bar5();
  static const int kTestBar5FieldNumber = 5;
  ::google::protobuf::uint32 test_bar5() const;
  void set_test_bar5(::google::protobuf::uint32 value);

  // sint64 Test_Bar6 = 6;
  void clear_test_bar6();
  static const int kTestBar6FieldNumber = 6;
  ::google::protobuf::int64 test_bar6() const;
  void set_test_bar6(::google::protobuf::int64 value);

  // double Test_bar7 = 7;
  void clear_test_bar7();
  static const int kTestBar7FieldNumber = 7;
  double test_bar7() const;
  void set_test_bar7(double value);

  // @@protoc_insertion_point(class_scope:test_bar)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr testbar3_;
  ::google::protobuf::internal::ArenaStringPtr testbar4_;
  ::google::protobuf::uint64 testbar2_;
  ::google::protobuf::int32 test_bar1_;
  ::google::protobuf::uint32 test_bar5_;
  ::google::protobuf::int64 test_bar6_;
  double test_bar7_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_test_5fproto3_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class test_proto3 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:test_proto3) */ {
 public:
  test_proto3();
  virtual ~test_proto3();

  test_proto3(const test_proto3& from);

  inline test_proto3& operator=(const test_proto3& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  test_proto3(test_proto3&& from) noexcept
    : test_proto3() {
    *this = ::std::move(from);
  }

  inline test_proto3& operator=(test_proto3&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const test_proto3& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const test_proto3* internal_default_instance() {
    return reinterpret_cast<const test_proto3*>(
               &_test_proto3_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(test_proto3* other);
  friend void swap(test_proto3& a, test_proto3& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline test_proto3* New() const final {
    return CreateMaybeMessage<test_proto3>(NULL);
  }

  test_proto3* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<test_proto3>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const test_proto3& from);
  void MergeFrom(const test_proto3& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(test_proto3* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string test_foo1 = 1;
  int test_foo1_size() const;
  void clear_test_foo1();
  static const int kTestFoo1FieldNumber = 1;
  const ::std::string& test_foo1(int index) const;
  ::std::string* mutable_test_foo1(int index);
  void set_test_foo1(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_test_foo1(int index, ::std::string&& value);
  #endif
  void set_test_foo1(int index, const char* value);
  void set_test_foo1(int index, const char* value, size_t size);
  ::std::string* add_test_foo1();
  void add_test_foo1(const ::std::string& value);
  #if LANG_CXX11
  void add_test_foo1(::std::string&& value);
  #endif
  void add_test_foo1(const char* value);
  void add_test_foo1(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& test_foo1() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_test_foo1();

  // repeated bytes test_foo2 = 2;
  int test_foo2_size() const;
  void clear_test_foo2();
  static const int kTestFoo2FieldNumber = 2;
  const ::std::string& test_foo2(int index) const;
  ::std::string* mutable_test_foo2(int index);
  void set_test_foo2(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_test_foo2(int index, ::std::string&& value);
  #endif
  void set_test_foo2(int index, const char* value);
  void set_test_foo2(int index, const void* value, size_t size);
  ::std::string* add_test_foo2();
  void add_test_foo2(const ::std::string& value);
  #if LANG_CXX11
  void add_test_foo2(::std::string&& value);
  #endif
  void add_test_foo2(const char* value);
  void add_test_foo2(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& test_foo2() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_test_foo2();

  // repeated int32 test_foo3 = 3;
  int test_foo3_size() const;
  void clear_test_foo3();
  static const int kTestFoo3FieldNumber = 3;
  ::google::protobuf::int32 test_foo3(int index) const;
  void set_test_foo3(int index, ::google::protobuf::int32 value);
  void add_test_foo3(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      test_foo3() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_test_foo3();

  // repeated uint64 test_foo4 = 4;
  int test_foo4_size() const;
  void clear_test_foo4();
  static const int kTestFoo4FieldNumber = 4;
  ::google::protobuf::uint64 test_foo4(int index) const;
  void set_test_foo4(int index, ::google::protobuf::uint64 value);
  void add_test_foo4(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      test_foo4() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_test_foo4();

  // repeated .test_bar test_foo5 = 5;
  int test_foo5_size() const;
  void clear_test_foo5();
  static const int kTestFoo5FieldNumber = 5;
  ::test_bar* mutable_test_foo5(int index);
  ::google::protobuf::RepeatedPtrField< ::test_bar >*
      mutable_test_foo5();
  const ::test_bar& test_foo5(int index) const;
  ::test_bar* add_test_foo5();
  const ::google::protobuf::RepeatedPtrField< ::test_bar >&
      test_foo5() const;

  // @@protoc_insertion_point(class_scope:test_proto3)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> test_foo1_;
  ::google::protobuf::RepeatedPtrField< ::std::string> test_foo2_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > test_foo3_;
  mutable int _test_foo3_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > test_foo4_;
  mutable int _test_foo4_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::test_bar > test_foo5_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_test_5fproto3_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// test_bar

// int32 test_bar1 = 1;
inline void test_bar::clear_test_bar1() {
  test_bar1_ = 0;
}
inline ::google::protobuf::int32 test_bar::test_bar1() const {
  // @@protoc_insertion_point(field_get:test_bar.test_bar1)
  return test_bar1_;
}
inline void test_bar::set_test_bar1(::google::protobuf::int32 value) {
  
  test_bar1_ = value;
  // @@protoc_insertion_point(field_set:test_bar.test_bar1)
}

// uint64 testBar2 = 2;
inline void test_bar::clear_testbar2() {
  testbar2_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 test_bar::testbar2() const {
  // @@protoc_insertion_point(field_get:test_bar.testBar2)
  return testbar2_;
}
inline void test_bar::set_testbar2(::google::protobuf::uint64 value) {
  
  testbar2_ = value;
  // @@protoc_insertion_point(field_set:test_bar.testBar2)
}

// string TestBar3 = 3;
inline void test_bar::clear_testbar3() {
  testbar3_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& test_bar::testbar3() const {
  // @@protoc_insertion_point(field_get:test_bar.TestBar3)
  return testbar3_.GetNoArena();
}
inline void test_bar::set_testbar3(const ::std::string& value) {
  
  testbar3_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:test_bar.TestBar3)
}
#if LANG_CXX11
inline void test_bar::set_testbar3(::std::string&& value) {
  
  testbar3_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:test_bar.TestBar3)
}
#endif
inline void test_bar::set_testbar3(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  testbar3_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:test_bar.TestBar3)
}
inline void test_bar::set_testbar3(const char* value, size_t size) {
  
  testbar3_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:test_bar.TestBar3)
}
inline ::std::string* test_bar::mutable_testbar3() {
  
  // @@protoc_insertion_point(field_mutable:test_bar.TestBar3)
  return testbar3_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* test_bar::release_testbar3() {
  // @@protoc_insertion_point(field_release:test_bar.TestBar3)
  
  return testbar3_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void test_bar::set_allocated_testbar3(::std::string* testbar3) {
  if (testbar3 != NULL) {
    
  } else {
    
  }
  testbar3_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), testbar3);
  // @@protoc_insertion_point(field_set_allocated:test_bar.TestBar3)
}

// bytes Testbar4 = 4;
inline void test_bar::clear_testbar4() {
  testbar4_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& test_bar::testbar4() const {
  // @@protoc_insertion_point(field_get:test_bar.Testbar4)
  return testbar4_.GetNoArena();
}
inline void test_bar::set_testbar4(const ::std::string& value) {
  
  testbar4_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:test_bar.Testbar4)
}
#if LANG_CXX11
inline void test_bar::set_testbar4(::std::string&& value) {
  
  testbar4_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:test_bar.Testbar4)
}
#endif
inline void test_bar::set_testbar4(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  testbar4_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:test_bar.Testbar4)
}
inline void test_bar::set_testbar4(const void* value, size_t size) {
  
  testbar4_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:test_bar.Testbar4)
}
inline ::std::string* test_bar::mutable_testbar4() {
  
  // @@protoc_insertion_point(field_mutable:test_bar.Testbar4)
  return testbar4_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* test_bar::release_testbar4() {
  // @@protoc_insertion_point(field_release:test_bar.Testbar4)
  
  return testbar4_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void test_bar::set_allocated_testbar4(::std::string* testbar4) {
  if (testbar4 != NULL) {
    
  } else {
    
  }
  testbar4_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), testbar4);
  // @@protoc_insertion_point(field_set_allocated:test_bar.Testbar4)
}

// fixed32 test_Bar5 = 5;
inline void test_bar::clear_test_bar5() {
  test_bar5_ = 0u;
}
inline ::google::protobuf::uint32 test_bar::test_bar5() const {
  // @@protoc_insertion_point(field_get:test_bar.test_Bar5)
  return test_bar5_;
}
inline void test_bar::set_test_bar5(::google::protobuf::uint32 value) {
  
  test_bar5_ = value;
  // @@protoc_insertion_point(field_set:test_bar.test_Bar5)
}

// sint64 Test_Bar6 = 6;
inline void test_bar::clear_test_bar6() {
  test_bar6_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 test_bar::test_bar6() const {
  // @@protoc_insertion_point(field_get:test_bar.Test_Bar6)
  return test_bar6_;
}
inline void test_bar::set_test_bar6(::google::protobuf::int64 value) {
  
  test_bar6_ = value;
  // @@protoc_insertion_point(field_set:test_bar.Test_Bar6)
}

// double Test_bar7 = 7;
inline void test_bar::clear_test_bar7() {
  test_bar7_ = 0;
}
inline double test_bar::test_bar7() const {
  // @@protoc_insertion_point(field_get:test_bar.Test_bar7)
  return test_bar7_;
}
inline void test_bar::set_test_bar7(double value) {
  
  test_bar7_ = value;
  // @@protoc_insertion_point(field_set:test_bar.Test_bar7)
}

// -------------------------------------------------------------------

// test_proto3

// repeated string test_foo1 = 1;
inline int test_proto3::test_foo1_size() const {
  return test_foo1_.size();
}
inline void test_proto3::clear_test_foo1() {
  test_foo1_.Clear();
}
inline const ::std::string& test_proto3::test_foo1(int index) const {
  // @@protoc_insertion_point(field_get:test_proto3.test_foo1)
  return test_foo1_.Get(index);
}
inline ::std::string* test_proto3::mutable_test_foo1(int index) {
  // @@protoc_insertion_point(field_mutable:test_proto3.test_foo1)
  return test_foo1_.Mutable(index);
}
inline void test_proto3::set_test_foo1(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:test_proto3.test_foo1)
  test_foo1_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void test_proto3::set_test_foo1(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:test_proto3.test_foo1)
  test_foo1_.Mutable(index)->assign(std::move(value));
}
#endif
inline void test_proto3::set_test_foo1(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  test_foo1_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:test_proto3.test_foo1)
}
inline void test_proto3::set_test_foo1(int index, const char* value, size_t size) {
  test_foo1_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:test_proto3.test_foo1)
}
inline ::std::string* test_proto3::add_test_foo1() {
  // @@protoc_insertion_point(field_add_mutable:test_proto3.test_foo1)
  return test_foo1_.Add();
}
inline void test_proto3::add_test_foo1(const ::std::string& value) {
  test_foo1_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:test_proto3.test_foo1)
}
#if LANG_CXX11
inline void test_proto3::add_test_foo1(::std::string&& value) {
  test_foo1_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:test_proto3.test_foo1)
}
#endif
inline void test_proto3::add_test_foo1(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  test_foo1_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:test_proto3.test_foo1)
}
inline void test_proto3::add_test_foo1(const char* value, size_t size) {
  test_foo1_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:test_proto3.test_foo1)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
test_proto3::test_foo1() const {
  // @@protoc_insertion_point(field_list:test_proto3.test_foo1)
  return test_foo1_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
test_proto3::mutable_test_foo1() {
  // @@protoc_insertion_point(field_mutable_list:test_proto3.test_foo1)
  return &test_foo1_;
}

// repeated bytes test_foo2 = 2;
inline int test_proto3::test_foo2_size() const {
  return test_foo2_.size();
}
inline void test_proto3::clear_test_foo2() {
  test_foo2_.Clear();
}
inline const ::std::string& test_proto3::test_foo2(int index) const {
  // @@protoc_insertion_point(field_get:test_proto3.test_foo2)
  return test_foo2_.Get(index);
}
inline ::std::string* test_proto3::mutable_test_foo2(int index) {
  // @@protoc_insertion_point(field_mutable:test_proto3.test_foo2)
  return test_foo2_.Mutable(index);
}
inline void test_proto3::set_test_foo2(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:test_proto3.test_foo2)
  test_foo2_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void test_proto3::set_test_foo2(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:test_proto3.test_foo2)
  test_foo2_.Mutable(index)->assign(std::move(value));
}
#endif
inline void test_proto3::set_test_foo2(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  test_foo2_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:test_proto3.test_foo2)
}
inline void test_proto3::set_test_foo2(int index, const void* value, size_t size) {
  test_foo2_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:test_proto3.test_foo2)
}
inline ::std::string* test_proto3::add_test_foo2() {
  // @@protoc_insertion_point(field_add_mutable:test_proto3.test_foo2)
  return test_foo2_.Add();
}
inline void test_proto3::add_test_foo2(const ::std::string& value) {
  test_foo2_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:test_proto3.test_foo2)
}
#if LANG_CXX11
inline void test_proto3::add_test_foo2(::std::string&& value) {
  test_foo2_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:test_proto3.test_foo2)
}
#endif
inline void test_proto3::add_test_foo2(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  test_foo2_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:test_proto3.test_foo2)
}
inline void test_proto3::add_test_foo2(const void* value, size_t size) {
  test_foo2_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:test_proto3.test_foo2)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
test_proto3::test_foo2() const {
  // @@protoc_insertion_point(field_list:test_proto3.test_foo2)
  return test_foo2_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
test_proto3::mutable_test_foo2() {
  // @@protoc_insertion_point(field_mutable_list:test_proto3.test_foo2)
  return &test_foo2_;
}

// repeated int32 test_foo3 = 3;
inline int test_proto3::test_foo3_size() const {
  return test_foo3_.size();
}
inline void test_proto3::clear_test_foo3() {
  test_foo3_.Clear();
}
inline ::google::protobuf::int32 test_proto3::test_foo3(int index) const {
  // @@protoc_insertion_point(field_get:test_proto3.test_foo3)
  return test_foo3_.Get(index);
}
inline void test_proto3::set_test_foo3(int index, ::google::protobuf::int32 value) {
  test_foo3_.Set(index, value);
  // @@protoc_insertion_point(field_set:test_proto3.test_foo3)
}
inline void test_proto3::add_test_foo3(::google::protobuf::int32 value) {
  test_foo3_.Add(value);
  // @@protoc_insertion_point(field_add:test_proto3.test_foo3)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
test_proto3::test_foo3() const {
  // @@protoc_insertion_point(field_list:test_proto3.test_foo3)
  return test_foo3_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
test_proto3::mutable_test_foo3() {
  // @@protoc_insertion_point(field_mutable_list:test_proto3.test_foo3)
  return &test_foo3_;
}

// repeated uint64 test_foo4 = 4;
inline int test_proto3::test_foo4_size() const {
  return test_foo4_.size();
}
inline void test_proto3::clear_test_foo4() {
  test_foo4_.Clear();
}
inline ::google::protobuf::uint64 test_proto3::test_foo4(int index) const {
  // @@protoc_insertion_point(field_get:test_proto3.test_foo4)
  return test_foo4_.Get(index);
}
inline void test_proto3::set_test_foo4(int index, ::google::protobuf::uint64 value) {
  test_foo4_.Set(index, value);
  // @@protoc_insertion_point(field_set:test_proto3.test_foo4)
}
inline void test_proto3::add_test_foo4(::google::protobuf::uint64 value) {
  test_foo4_.Add(value);
  // @@protoc_insertion_point(field_add:test_proto3.test_foo4)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
test_proto3::test_foo4() const {
  // @@protoc_insertion_point(field_list:test_proto3.test_foo4)
  return test_foo4_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
test_proto3::mutable_test_foo4() {
  // @@protoc_insertion_point(field_mutable_list:test_proto3.test_foo4)
  return &test_foo4_;
}

// repeated .test_bar test_foo5 = 5;
inline int test_proto3::test_foo5_size() const {
  return test_foo5_.size();
}
inline void test_proto3::clear_test_foo5() {
  test_foo5_.Clear();
}
inline ::test_bar* test_proto3::mutable_test_foo5(int index) {
  // @@protoc_insertion_point(field_mutable:test_proto3.test_foo5)
  return test_foo5_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::test_bar >*
test_proto3::mutable_test_foo5() {
  // @@protoc_insertion_point(field_mutable_list:test_proto3.test_foo5)
  return &test_foo5_;
}
inline const ::test_bar& test_proto3::test_foo5(int index) const {
  // @@protoc_insertion_point(field_get:test_proto3.test_foo5)
  return test_foo5_.Get(index);
}
inline ::test_bar* test_proto3::add_test_foo5() {
  // @@protoc_insertion_point(field_add:test_proto3.test_foo5)
  return test_foo5_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::test_bar >&
test_proto3::test_foo5() const {
  // @@protoc_insertion_point(field_list:test_proto3.test_foo5)
  return test_foo5_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_test_5fproto3_2eproto
