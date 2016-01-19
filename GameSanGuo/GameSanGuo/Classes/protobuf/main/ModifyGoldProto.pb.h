// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ModifyGoldProto.proto

#ifndef PROTOBUF_ModifyGoldProto_2eproto__INCLUDED
#define PROTOBUF_ModifyGoldProto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace main {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ModifyGoldProto_2eproto();
void protobuf_AssignDesc_ModifyGoldProto_2eproto();
void protobuf_ShutdownFile_ModifyGoldProto_2eproto();

class ModifyGoldResponse;

// ===================================================================

class ModifyGoldResponse : public ::google::protobuf::MessageLite {
 public:
  ModifyGoldResponse();
  virtual ~ModifyGoldResponse();

  ModifyGoldResponse(const ModifyGoldResponse& from);

  inline ModifyGoldResponse& operator=(const ModifyGoldResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ModifyGoldResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ModifyGoldResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ModifyGoldResponse* other);

  // implements Message ----------------------------------------------

  ModifyGoldResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ModifyGoldResponse& from);
  void MergeFrom(const ModifyGoldResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 count = 2;
  inline bool has_count() const;
  inline void clear_count();
  static const int kCountFieldNumber = 2;
  inline ::google::protobuf::int32 count() const;
  inline void set_count(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:main.ModifyGoldResponse)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_count();
  inline void clear_has_count();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 count_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ModifyGoldProto_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ModifyGoldProto_2eproto();
  #endif
  friend void protobuf_AssignDesc_ModifyGoldProto_2eproto();
  friend void protobuf_ShutdownFile_ModifyGoldProto_2eproto();

  void InitAsDefaultInstance();
  static ModifyGoldResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// ModifyGoldResponse

// optional int32 type = 1;
inline bool ModifyGoldResponse::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ModifyGoldResponse::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ModifyGoldResponse::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ModifyGoldResponse::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 ModifyGoldResponse::type() const {
  // @@protoc_insertion_point(field_get:main.ModifyGoldResponse.type)
  return type_;
}
inline void ModifyGoldResponse::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:main.ModifyGoldResponse.type)
}

// optional int32 count = 2;
inline bool ModifyGoldResponse::has_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ModifyGoldResponse::set_has_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ModifyGoldResponse::clear_has_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ModifyGoldResponse::clear_count() {
  count_ = 0;
  clear_has_count();
}
inline ::google::protobuf::int32 ModifyGoldResponse::count() const {
  // @@protoc_insertion_point(field_get:main.ModifyGoldResponse.count)
  return count_;
}
inline void ModifyGoldResponse::set_count(::google::protobuf::int32 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:main.ModifyGoldResponse.count)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace main

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ModifyGoldProto_2eproto__INCLUDED