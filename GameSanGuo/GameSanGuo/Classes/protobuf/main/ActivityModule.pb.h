// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ActivityModule.proto

#ifndef PROTOBUF_ActivityModule_2eproto__INCLUDED
#define PROTOBUF_ActivityModule_2eproto__INCLUDED

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
#include "PlotModule.pb.h"
// @@protoc_insertion_point(includes)

namespace main {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ActivityModule_2eproto();
void protobuf_AssignDesc_ActivityModule_2eproto();
void protobuf_ShutdownFile_ActivityModule_2eproto();

class ActivityStoryListResponse;
class ActivityStoryModel;
class ActivityStoryListRequest;
class ActivityListRequest;
class ActivityListResponse;

// ===================================================================

class ActivityStoryListResponse : public ::google::protobuf::MessageLite {
 public:
  ActivityStoryListResponse();
  virtual ~ActivityStoryListResponse();

  ActivityStoryListResponse(const ActivityStoryListResponse& from);

  inline ActivityStoryListResponse& operator=(const ActivityStoryListResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ActivityStoryListResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ActivityStoryListResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ActivityStoryListResponse* other);

  // implements Message ----------------------------------------------

  ActivityStoryListResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ActivityStoryListResponse& from);
  void MergeFrom(const ActivityStoryListResponse& from);
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

  // repeated .main.ActivityStoryModel storyModel = 1;
  inline int storymodel_size() const;
  inline void clear_storymodel();
  static const int kStoryModelFieldNumber = 1;
  inline const ::main::ActivityStoryModel& storymodel(int index) const;
  inline ::main::ActivityStoryModel* mutable_storymodel(int index);
  inline ::main::ActivityStoryModel* add_storymodel();
  inline const ::google::protobuf::RepeatedPtrField< ::main::ActivityStoryModel >&
      storymodel() const;
  inline ::google::protobuf::RepeatedPtrField< ::main::ActivityStoryModel >*
      mutable_storymodel();

  // @@protoc_insertion_point(class_scope:main.ActivityStoryListResponse)
 private:

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::main::ActivityStoryModel > storymodel_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ActivityModule_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ActivityModule_2eproto();
  #endif
  friend void protobuf_AssignDesc_ActivityModule_2eproto();
  friend void protobuf_ShutdownFile_ActivityModule_2eproto();

  void InitAsDefaultInstance();
  static ActivityStoryListResponse* default_instance_;
};
// -------------------------------------------------------------------

class ActivityStoryModel : public ::google::protobuf::MessageLite {
 public:
  ActivityStoryModel();
  virtual ~ActivityStoryModel();

  ActivityStoryModel(const ActivityStoryModel& from);

  inline ActivityStoryModel& operator=(const ActivityStoryModel& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ActivityStoryModel& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ActivityStoryModel* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ActivityStoryModel* other);

  // implements Message ----------------------------------------------

  ActivityStoryModel* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ActivityStoryModel& from);
  void MergeFrom(const ActivityStoryModel& from);
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

  // optional int32 storyId = 1;
  inline bool has_storyid() const;
  inline void clear_storyid();
  static const int kStoryIdFieldNumber = 1;
  inline ::google::protobuf::int32 storyid() const;
  inline void set_storyid(::google::protobuf::int32 value);

  // optional int32 state = 2;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 2;
  inline ::google::protobuf::int32 state() const;
  inline void set_state(::google::protobuf::int32 value);

  // optional int64 startTime = 3;
  inline bool has_starttime() const;
  inline void clear_starttime();
  static const int kStartTimeFieldNumber = 3;
  inline ::google::protobuf::int64 starttime() const;
  inline void set_starttime(::google::protobuf::int64 value);

  // optional int64 endTime = 4;
  inline bool has_endtime() const;
  inline void clear_endtime();
  static const int kEndTimeFieldNumber = 4;
  inline ::google::protobuf::int64 endtime() const;
  inline void set_endtime(::google::protobuf::int64 value);

  // optional int32 joinCount = 5;
  inline bool has_joincount() const;
  inline void clear_joincount();
  static const int kJoinCountFieldNumber = 5;
  inline ::google::protobuf::int32 joincount() const;
  inline void set_joincount(::google::protobuf::int32 value);

  // optional int32 maxCount = 6;
  inline bool has_maxcount() const;
  inline void clear_maxcount();
  static const int kMaxCountFieldNumber = 6;
  inline ::google::protobuf::int32 maxcount() const;
  inline void set_maxcount(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:main.ActivityStoryModel)
 private:
  inline void set_has_storyid();
  inline void clear_has_storyid();
  inline void set_has_state();
  inline void clear_has_state();
  inline void set_has_starttime();
  inline void clear_has_starttime();
  inline void set_has_endtime();
  inline void clear_has_endtime();
  inline void set_has_joincount();
  inline void clear_has_joincount();
  inline void set_has_maxcount();
  inline void clear_has_maxcount();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 storyid_;
  ::google::protobuf::int32 state_;
  ::google::protobuf::int64 starttime_;
  ::google::protobuf::int64 endtime_;
  ::google::protobuf::int32 joincount_;
  ::google::protobuf::int32 maxcount_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ActivityModule_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ActivityModule_2eproto();
  #endif
  friend void protobuf_AssignDesc_ActivityModule_2eproto();
  friend void protobuf_ShutdownFile_ActivityModule_2eproto();

  void InitAsDefaultInstance();
  static ActivityStoryModel* default_instance_;
};
// -------------------------------------------------------------------

class ActivityStoryListRequest : public ::google::protobuf::MessageLite {
 public:
  ActivityStoryListRequest();
  virtual ~ActivityStoryListRequest();

  ActivityStoryListRequest(const ActivityStoryListRequest& from);

  inline ActivityStoryListRequest& operator=(const ActivityStoryListRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ActivityStoryListRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ActivityStoryListRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ActivityStoryListRequest* other);

  // implements Message ----------------------------------------------

  ActivityStoryListRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ActivityStoryListRequest& from);
  void MergeFrom(const ActivityStoryListRequest& from);
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

  // @@protoc_insertion_point(class_scope:main.ActivityStoryListRequest)
 private:

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ActivityModule_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ActivityModule_2eproto();
  #endif
  friend void protobuf_AssignDesc_ActivityModule_2eproto();
  friend void protobuf_ShutdownFile_ActivityModule_2eproto();

  void InitAsDefaultInstance();
  static ActivityStoryListRequest* default_instance_;
};
// -------------------------------------------------------------------

class ActivityListRequest : public ::google::protobuf::MessageLite {
 public:
  ActivityListRequest();
  virtual ~ActivityListRequest();

  ActivityListRequest(const ActivityListRequest& from);

  inline ActivityListRequest& operator=(const ActivityListRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ActivityListRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ActivityListRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ActivityListRequest* other);

  // implements Message ----------------------------------------------

  ActivityListRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ActivityListRequest& from);
  void MergeFrom(const ActivityListRequest& from);
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

  // optional int32 storyId = 1;
  inline bool has_storyid() const;
  inline void clear_storyid();
  static const int kStoryIdFieldNumber = 1;
  inline ::google::protobuf::int32 storyid() const;
  inline void set_storyid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:main.ActivityListRequest)
 private:
  inline void set_has_storyid();
  inline void clear_has_storyid();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 storyid_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ActivityModule_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ActivityModule_2eproto();
  #endif
  friend void protobuf_AssignDesc_ActivityModule_2eproto();
  friend void protobuf_ShutdownFile_ActivityModule_2eproto();

  void InitAsDefaultInstance();
  static ActivityListRequest* default_instance_;
};
// -------------------------------------------------------------------

class ActivityListResponse : public ::google::protobuf::MessageLite {
 public:
  ActivityListResponse();
  virtual ~ActivityListResponse();

  ActivityListResponse(const ActivityListResponse& from);

  inline ActivityListResponse& operator=(const ActivityListResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ActivityListResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ActivityListResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ActivityListResponse* other);

  // implements Message ----------------------------------------------

  ActivityListResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ActivityListResponse& from);
  void MergeFrom(const ActivityListResponse& from);
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

  // repeated .main.PlotModel plotModel = 1;
  inline int plotmodel_size() const;
  inline void clear_plotmodel();
  static const int kPlotModelFieldNumber = 1;
  inline const ::main::PlotModel& plotmodel(int index) const;
  inline ::main::PlotModel* mutable_plotmodel(int index);
  inline ::main::PlotModel* add_plotmodel();
  inline const ::google::protobuf::RepeatedPtrField< ::main::PlotModel >&
      plotmodel() const;
  inline ::google::protobuf::RepeatedPtrField< ::main::PlotModel >*
      mutable_plotmodel();

  // @@protoc_insertion_point(class_scope:main.ActivityListResponse)
 private:

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::main::PlotModel > plotmodel_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ActivityModule_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ActivityModule_2eproto();
  #endif
  friend void protobuf_AssignDesc_ActivityModule_2eproto();
  friend void protobuf_ShutdownFile_ActivityModule_2eproto();

  void InitAsDefaultInstance();
  static ActivityListResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// ActivityStoryListResponse

// repeated .main.ActivityStoryModel storyModel = 1;
inline int ActivityStoryListResponse::storymodel_size() const {
  return storymodel_.size();
}
inline void ActivityStoryListResponse::clear_storymodel() {
  storymodel_.Clear();
}
inline const ::main::ActivityStoryModel& ActivityStoryListResponse::storymodel(int index) const {
  // @@protoc_insertion_point(field_get:main.ActivityStoryListResponse.storyModel)
  return storymodel_.Get(index);
}
inline ::main::ActivityStoryModel* ActivityStoryListResponse::mutable_storymodel(int index) {
  // @@protoc_insertion_point(field_mutable:main.ActivityStoryListResponse.storyModel)
  return storymodel_.Mutable(index);
}
inline ::main::ActivityStoryModel* ActivityStoryListResponse::add_storymodel() {
  // @@protoc_insertion_point(field_add:main.ActivityStoryListResponse.storyModel)
  return storymodel_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::main::ActivityStoryModel >&
ActivityStoryListResponse::storymodel() const {
  // @@protoc_insertion_point(field_list:main.ActivityStoryListResponse.storyModel)
  return storymodel_;
}
inline ::google::protobuf::RepeatedPtrField< ::main::ActivityStoryModel >*
ActivityStoryListResponse::mutable_storymodel() {
  // @@protoc_insertion_point(field_mutable_list:main.ActivityStoryListResponse.storyModel)
  return &storymodel_;
}

// -------------------------------------------------------------------

// ActivityStoryModel

// optional int32 storyId = 1;
inline bool ActivityStoryModel::has_storyid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ActivityStoryModel::set_has_storyid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ActivityStoryModel::clear_has_storyid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ActivityStoryModel::clear_storyid() {
  storyid_ = 0;
  clear_has_storyid();
}
inline ::google::protobuf::int32 ActivityStoryModel::storyid() const {
  // @@protoc_insertion_point(field_get:main.ActivityStoryModel.storyId)
  return storyid_;
}
inline void ActivityStoryModel::set_storyid(::google::protobuf::int32 value) {
  set_has_storyid();
  storyid_ = value;
  // @@protoc_insertion_point(field_set:main.ActivityStoryModel.storyId)
}

// optional int32 state = 2;
inline bool ActivityStoryModel::has_state() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ActivityStoryModel::set_has_state() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ActivityStoryModel::clear_has_state() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ActivityStoryModel::clear_state() {
  state_ = 0;
  clear_has_state();
}
inline ::google::protobuf::int32 ActivityStoryModel::state() const {
  // @@protoc_insertion_point(field_get:main.ActivityStoryModel.state)
  return state_;
}
inline void ActivityStoryModel::set_state(::google::protobuf::int32 value) {
  set_has_state();
  state_ = value;
  // @@protoc_insertion_point(field_set:main.ActivityStoryModel.state)
}

// optional int64 startTime = 3;
inline bool ActivityStoryModel::has_starttime() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ActivityStoryModel::set_has_starttime() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ActivityStoryModel::clear_has_starttime() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ActivityStoryModel::clear_starttime() {
  starttime_ = GOOGLE_LONGLONG(0);
  clear_has_starttime();
}
inline ::google::protobuf::int64 ActivityStoryModel::starttime() const {
  // @@protoc_insertion_point(field_get:main.ActivityStoryModel.startTime)
  return starttime_;
}
inline void ActivityStoryModel::set_starttime(::google::protobuf::int64 value) {
  set_has_starttime();
  starttime_ = value;
  // @@protoc_insertion_point(field_set:main.ActivityStoryModel.startTime)
}

// optional int64 endTime = 4;
inline bool ActivityStoryModel::has_endtime() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ActivityStoryModel::set_has_endtime() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ActivityStoryModel::clear_has_endtime() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ActivityStoryModel::clear_endtime() {
  endtime_ = GOOGLE_LONGLONG(0);
  clear_has_endtime();
}
inline ::google::protobuf::int64 ActivityStoryModel::endtime() const {
  // @@protoc_insertion_point(field_get:main.ActivityStoryModel.endTime)
  return endtime_;
}
inline void ActivityStoryModel::set_endtime(::google::protobuf::int64 value) {
  set_has_endtime();
  endtime_ = value;
  // @@protoc_insertion_point(field_set:main.ActivityStoryModel.endTime)
}

// optional int32 joinCount = 5;
inline bool ActivityStoryModel::has_joincount() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ActivityStoryModel::set_has_joincount() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ActivityStoryModel::clear_has_joincount() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ActivityStoryModel::clear_joincount() {
  joincount_ = 0;
  clear_has_joincount();
}
inline ::google::protobuf::int32 ActivityStoryModel::joincount() const {
  // @@protoc_insertion_point(field_get:main.ActivityStoryModel.joinCount)
  return joincount_;
}
inline void ActivityStoryModel::set_joincount(::google::protobuf::int32 value) {
  set_has_joincount();
  joincount_ = value;
  // @@protoc_insertion_point(field_set:main.ActivityStoryModel.joinCount)
}

// optional int32 maxCount = 6;
inline bool ActivityStoryModel::has_maxcount() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ActivityStoryModel::set_has_maxcount() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ActivityStoryModel::clear_has_maxcount() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ActivityStoryModel::clear_maxcount() {
  maxcount_ = 0;
  clear_has_maxcount();
}
inline ::google::protobuf::int32 ActivityStoryModel::maxcount() const {
  // @@protoc_insertion_point(field_get:main.ActivityStoryModel.maxCount)
  return maxcount_;
}
inline void ActivityStoryModel::set_maxcount(::google::protobuf::int32 value) {
  set_has_maxcount();
  maxcount_ = value;
  // @@protoc_insertion_point(field_set:main.ActivityStoryModel.maxCount)
}

// -------------------------------------------------------------------

// ActivityStoryListRequest

// -------------------------------------------------------------------

// ActivityListRequest

// optional int32 storyId = 1;
inline bool ActivityListRequest::has_storyid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ActivityListRequest::set_has_storyid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ActivityListRequest::clear_has_storyid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ActivityListRequest::clear_storyid() {
  storyid_ = 0;
  clear_has_storyid();
}
inline ::google::protobuf::int32 ActivityListRequest::storyid() const {
  // @@protoc_insertion_point(field_get:main.ActivityListRequest.storyId)
  return storyid_;
}
inline void ActivityListRequest::set_storyid(::google::protobuf::int32 value) {
  set_has_storyid();
  storyid_ = value;
  // @@protoc_insertion_point(field_set:main.ActivityListRequest.storyId)
}

// -------------------------------------------------------------------

// ActivityListResponse

// repeated .main.PlotModel plotModel = 1;
inline int ActivityListResponse::plotmodel_size() const {
  return plotmodel_.size();
}
inline void ActivityListResponse::clear_plotmodel() {
  plotmodel_.Clear();
}
inline const ::main::PlotModel& ActivityListResponse::plotmodel(int index) const {
  // @@protoc_insertion_point(field_get:main.ActivityListResponse.plotModel)
  return plotmodel_.Get(index);
}
inline ::main::PlotModel* ActivityListResponse::mutable_plotmodel(int index) {
  // @@protoc_insertion_point(field_mutable:main.ActivityListResponse.plotModel)
  return plotmodel_.Mutable(index);
}
inline ::main::PlotModel* ActivityListResponse::add_plotmodel() {
  // @@protoc_insertion_point(field_add:main.ActivityListResponse.plotModel)
  return plotmodel_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::main::PlotModel >&
ActivityListResponse::plotmodel() const {
  // @@protoc_insertion_point(field_list:main.ActivityListResponse.plotModel)
  return plotmodel_;
}
inline ::google::protobuf::RepeatedPtrField< ::main::PlotModel >*
ActivityListResponse::mutable_plotmodel() {
  // @@protoc_insertion_point(field_mutable_list:main.ActivityListResponse.plotModel)
  return &plotmodel_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace main

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ActivityModule_2eproto__INCLUDED