// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ActivityModule.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ActivityModule.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace main {

void protobuf_ShutdownFile_ActivityModule_2eproto() {
  delete ActivityStoryListResponse::default_instance_;
  delete ActivityStoryModel::default_instance_;
  delete ActivityStoryListRequest::default_instance_;
  delete ActivityListRequest::default_instance_;
  delete ActivityListResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ActivityModule_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ActivityModule_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::main::protobuf_AddDesc_PlotModule_2eproto();
  ActivityStoryListResponse::default_instance_ = new ActivityStoryListResponse();
  ActivityStoryModel::default_instance_ = new ActivityStoryModel();
  ActivityStoryListRequest::default_instance_ = new ActivityStoryListRequest();
  ActivityListRequest::default_instance_ = new ActivityListRequest();
  ActivityListResponse::default_instance_ = new ActivityListResponse();
  ActivityStoryListResponse::default_instance_->InitAsDefaultInstance();
  ActivityStoryModel::default_instance_->InitAsDefaultInstance();
  ActivityStoryListRequest::default_instance_->InitAsDefaultInstance();
  ActivityListRequest::default_instance_->InitAsDefaultInstance();
  ActivityListResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ActivityModule_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ActivityModule_2eproto_once_);
void protobuf_AddDesc_ActivityModule_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ActivityModule_2eproto_once_,
                 &protobuf_AddDesc_ActivityModule_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ActivityModule_2eproto {
  StaticDescriptorInitializer_ActivityModule_2eproto() {
    protobuf_AddDesc_ActivityModule_2eproto();
  }
} static_descriptor_initializer_ActivityModule_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ActivityStoryListResponse::kStoryModelFieldNumber;
#endif  // !_MSC_VER

ActivityStoryListResponse::ActivityStoryListResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:main.ActivityStoryListResponse)
}

void ActivityStoryListResponse::InitAsDefaultInstance() {
}

ActivityStoryListResponse::ActivityStoryListResponse(const ActivityStoryListResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:main.ActivityStoryListResponse)
}

void ActivityStoryListResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ActivityStoryListResponse::~ActivityStoryListResponse() {
  // @@protoc_insertion_point(destructor:main.ActivityStoryListResponse)
  SharedDtor();
}

void ActivityStoryListResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ActivityStoryListResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ActivityStoryListResponse& ActivityStoryListResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ActivityModule_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ActivityModule_2eproto();
#endif
  return *default_instance_;
}

ActivityStoryListResponse* ActivityStoryListResponse::default_instance_ = NULL;

ActivityStoryListResponse* ActivityStoryListResponse::New() const {
  return new ActivityStoryListResponse;
}

void ActivityStoryListResponse::Clear() {
  storymodel_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool ActivityStoryListResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:main.ActivityStoryListResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .main.ActivityStoryModel storyModel = 1;
      case 1: {
        if (tag == 10) {
         parse_storyModel:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_storymodel()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_storyModel;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:main.ActivityStoryListResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:main.ActivityStoryListResponse)
  return false;
#undef DO_
}

void ActivityStoryListResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:main.ActivityStoryListResponse)
  // repeated .main.ActivityStoryModel storyModel = 1;
  for (int i = 0; i < this->storymodel_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->storymodel(i), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:main.ActivityStoryListResponse)
}

int ActivityStoryListResponse::ByteSize() const {
  int total_size = 0;

  // repeated .main.ActivityStoryModel storyModel = 1;
  total_size += 1 * this->storymodel_size();
  for (int i = 0; i < this->storymodel_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->storymodel(i));
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ActivityStoryListResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ActivityStoryListResponse*>(&from));
}

void ActivityStoryListResponse::MergeFrom(const ActivityStoryListResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  storymodel_.MergeFrom(from.storymodel_);
  mutable_unknown_fields()->append(from.unknown_fields());
}

void ActivityStoryListResponse::CopyFrom(const ActivityStoryListResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActivityStoryListResponse::IsInitialized() const {

  return true;
}

void ActivityStoryListResponse::Swap(ActivityStoryListResponse* other) {
  if (other != this) {
    storymodel_.Swap(&other->storymodel_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ActivityStoryListResponse::GetTypeName() const {
  return "main.ActivityStoryListResponse";
}


// ===================================================================

#ifndef _MSC_VER
const int ActivityStoryModel::kStoryIdFieldNumber;
const int ActivityStoryModel::kStateFieldNumber;
const int ActivityStoryModel::kStartTimeFieldNumber;
const int ActivityStoryModel::kEndTimeFieldNumber;
const int ActivityStoryModel::kJoinCountFieldNumber;
const int ActivityStoryModel::kMaxCountFieldNumber;
#endif  // !_MSC_VER

ActivityStoryModel::ActivityStoryModel()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:main.ActivityStoryModel)
}

void ActivityStoryModel::InitAsDefaultInstance() {
}

ActivityStoryModel::ActivityStoryModel(const ActivityStoryModel& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:main.ActivityStoryModel)
}

void ActivityStoryModel::SharedCtor() {
  _cached_size_ = 0;
  storyid_ = 0;
  state_ = 0;
  starttime_ = GOOGLE_LONGLONG(0);
  endtime_ = GOOGLE_LONGLONG(0);
  joincount_ = 0;
  maxcount_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ActivityStoryModel::~ActivityStoryModel() {
  // @@protoc_insertion_point(destructor:main.ActivityStoryModel)
  SharedDtor();
}

void ActivityStoryModel::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ActivityStoryModel::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ActivityStoryModel& ActivityStoryModel::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ActivityModule_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ActivityModule_2eproto();
#endif
  return *default_instance_;
}

ActivityStoryModel* ActivityStoryModel::default_instance_ = NULL;

ActivityStoryModel* ActivityStoryModel::New() const {
  return new ActivityStoryModel;
}

void ActivityStoryModel::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<ActivityStoryModel*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 63) {
    ZR_(storyid_, maxcount_);
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool ActivityStoryModel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:main.ActivityStoryModel)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 storyId = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &storyid_)));
          set_has_storyid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_state;
        break;
      }

      // optional int32 state = 2;
      case 2: {
        if (tag == 16) {
         parse_state:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &state_)));
          set_has_state();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_startTime;
        break;
      }

      // optional int64 startTime = 3;
      case 3: {
        if (tag == 24) {
         parse_startTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &starttime_)));
          set_has_starttime();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_endTime;
        break;
      }

      // optional int64 endTime = 4;
      case 4: {
        if (tag == 32) {
         parse_endTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &endtime_)));
          set_has_endtime();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_joinCount;
        break;
      }

      // optional int32 joinCount = 5;
      case 5: {
        if (tag == 40) {
         parse_joinCount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &joincount_)));
          set_has_joincount();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_maxCount;
        break;
      }

      // optional int32 maxCount = 6;
      case 6: {
        if (tag == 48) {
         parse_maxCount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &maxcount_)));
          set_has_maxcount();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:main.ActivityStoryModel)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:main.ActivityStoryModel)
  return false;
#undef DO_
}

void ActivityStoryModel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:main.ActivityStoryModel)
  // optional int32 storyId = 1;
  if (has_storyid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->storyid(), output);
  }

  // optional int32 state = 2;
  if (has_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->state(), output);
  }

  // optional int64 startTime = 3;
  if (has_starttime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->starttime(), output);
  }

  // optional int64 endTime = 4;
  if (has_endtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->endtime(), output);
  }

  // optional int32 joinCount = 5;
  if (has_joincount()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->joincount(), output);
  }

  // optional int32 maxCount = 6;
  if (has_maxcount()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->maxcount(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:main.ActivityStoryModel)
}

int ActivityStoryModel::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 storyId = 1;
    if (has_storyid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->storyid());
    }

    // optional int32 state = 2;
    if (has_state()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->state());
    }

    // optional int64 startTime = 3;
    if (has_starttime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->starttime());
    }

    // optional int64 endTime = 4;
    if (has_endtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->endtime());
    }

    // optional int32 joinCount = 5;
    if (has_joincount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->joincount());
    }

    // optional int32 maxCount = 6;
    if (has_maxcount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->maxcount());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ActivityStoryModel::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ActivityStoryModel*>(&from));
}

void ActivityStoryModel::MergeFrom(const ActivityStoryModel& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_storyid()) {
      set_storyid(from.storyid());
    }
    if (from.has_state()) {
      set_state(from.state());
    }
    if (from.has_starttime()) {
      set_starttime(from.starttime());
    }
    if (from.has_endtime()) {
      set_endtime(from.endtime());
    }
    if (from.has_joincount()) {
      set_joincount(from.joincount());
    }
    if (from.has_maxcount()) {
      set_maxcount(from.maxcount());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void ActivityStoryModel::CopyFrom(const ActivityStoryModel& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActivityStoryModel::IsInitialized() const {

  return true;
}

void ActivityStoryModel::Swap(ActivityStoryModel* other) {
  if (other != this) {
    std::swap(storyid_, other->storyid_);
    std::swap(state_, other->state_);
    std::swap(starttime_, other->starttime_);
    std::swap(endtime_, other->endtime_);
    std::swap(joincount_, other->joincount_);
    std::swap(maxcount_, other->maxcount_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ActivityStoryModel::GetTypeName() const {
  return "main.ActivityStoryModel";
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

ActivityStoryListRequest::ActivityStoryListRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:main.ActivityStoryListRequest)
}

void ActivityStoryListRequest::InitAsDefaultInstance() {
}

ActivityStoryListRequest::ActivityStoryListRequest(const ActivityStoryListRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:main.ActivityStoryListRequest)
}

void ActivityStoryListRequest::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ActivityStoryListRequest::~ActivityStoryListRequest() {
  // @@protoc_insertion_point(destructor:main.ActivityStoryListRequest)
  SharedDtor();
}

void ActivityStoryListRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ActivityStoryListRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ActivityStoryListRequest& ActivityStoryListRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ActivityModule_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ActivityModule_2eproto();
#endif
  return *default_instance_;
}

ActivityStoryListRequest* ActivityStoryListRequest::default_instance_ = NULL;

ActivityStoryListRequest* ActivityStoryListRequest::New() const {
  return new ActivityStoryListRequest;
}

void ActivityStoryListRequest::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool ActivityStoryListRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:main.ActivityStoryListRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(
        input, tag, &unknown_fields_stream));
  }
success:
  // @@protoc_insertion_point(parse_success:main.ActivityStoryListRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:main.ActivityStoryListRequest)
  return false;
#undef DO_
}

void ActivityStoryListRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:main.ActivityStoryListRequest)
  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:main.ActivityStoryListRequest)
}

int ActivityStoryListRequest::ByteSize() const {
  int total_size = 0;

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ActivityStoryListRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ActivityStoryListRequest*>(&from));
}

void ActivityStoryListRequest::MergeFrom(const ActivityStoryListRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->append(from.unknown_fields());
}

void ActivityStoryListRequest::CopyFrom(const ActivityStoryListRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActivityStoryListRequest::IsInitialized() const {

  return true;
}

void ActivityStoryListRequest::Swap(ActivityStoryListRequest* other) {
  if (other != this) {
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ActivityStoryListRequest::GetTypeName() const {
  return "main.ActivityStoryListRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int ActivityListRequest::kStoryIdFieldNumber;
#endif  // !_MSC_VER

ActivityListRequest::ActivityListRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:main.ActivityListRequest)
}

void ActivityListRequest::InitAsDefaultInstance() {
}

ActivityListRequest::ActivityListRequest(const ActivityListRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:main.ActivityListRequest)
}

void ActivityListRequest::SharedCtor() {
  _cached_size_ = 0;
  storyid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ActivityListRequest::~ActivityListRequest() {
  // @@protoc_insertion_point(destructor:main.ActivityListRequest)
  SharedDtor();
}

void ActivityListRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ActivityListRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ActivityListRequest& ActivityListRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ActivityModule_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ActivityModule_2eproto();
#endif
  return *default_instance_;
}

ActivityListRequest* ActivityListRequest::default_instance_ = NULL;

ActivityListRequest* ActivityListRequest::New() const {
  return new ActivityListRequest;
}

void ActivityListRequest::Clear() {
  storyid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool ActivityListRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:main.ActivityListRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 storyId = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &storyid_)));
          set_has_storyid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:main.ActivityListRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:main.ActivityListRequest)
  return false;
#undef DO_
}

void ActivityListRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:main.ActivityListRequest)
  // optional int32 storyId = 1;
  if (has_storyid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->storyid(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:main.ActivityListRequest)
}

int ActivityListRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 storyId = 1;
    if (has_storyid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->storyid());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ActivityListRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ActivityListRequest*>(&from));
}

void ActivityListRequest::MergeFrom(const ActivityListRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_storyid()) {
      set_storyid(from.storyid());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void ActivityListRequest::CopyFrom(const ActivityListRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActivityListRequest::IsInitialized() const {

  return true;
}

void ActivityListRequest::Swap(ActivityListRequest* other) {
  if (other != this) {
    std::swap(storyid_, other->storyid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ActivityListRequest::GetTypeName() const {
  return "main.ActivityListRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int ActivityListResponse::kPlotModelFieldNumber;
#endif  // !_MSC_VER

ActivityListResponse::ActivityListResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:main.ActivityListResponse)
}

void ActivityListResponse::InitAsDefaultInstance() {
}

ActivityListResponse::ActivityListResponse(const ActivityListResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:main.ActivityListResponse)
}

void ActivityListResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ActivityListResponse::~ActivityListResponse() {
  // @@protoc_insertion_point(destructor:main.ActivityListResponse)
  SharedDtor();
}

void ActivityListResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ActivityListResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ActivityListResponse& ActivityListResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ActivityModule_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ActivityModule_2eproto();
#endif
  return *default_instance_;
}

ActivityListResponse* ActivityListResponse::default_instance_ = NULL;

ActivityListResponse* ActivityListResponse::New() const {
  return new ActivityListResponse;
}

void ActivityListResponse::Clear() {
  plotmodel_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool ActivityListResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:main.ActivityListResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .main.PlotModel plotModel = 1;
      case 1: {
        if (tag == 10) {
         parse_plotModel:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_plotmodel()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_plotModel;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:main.ActivityListResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:main.ActivityListResponse)
  return false;
#undef DO_
}

void ActivityListResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:main.ActivityListResponse)
  // repeated .main.PlotModel plotModel = 1;
  for (int i = 0; i < this->plotmodel_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->plotmodel(i), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:main.ActivityListResponse)
}

int ActivityListResponse::ByteSize() const {
  int total_size = 0;

  // repeated .main.PlotModel plotModel = 1;
  total_size += 1 * this->plotmodel_size();
  for (int i = 0; i < this->plotmodel_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->plotmodel(i));
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ActivityListResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ActivityListResponse*>(&from));
}

void ActivityListResponse::MergeFrom(const ActivityListResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  plotmodel_.MergeFrom(from.plotmodel_);
  mutable_unknown_fields()->append(from.unknown_fields());
}

void ActivityListResponse::CopyFrom(const ActivityListResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActivityListResponse::IsInitialized() const {

  return true;
}

void ActivityListResponse::Swap(ActivityListResponse* other) {
  if (other != this) {
    plotmodel_.Swap(&other->plotmodel_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ActivityListResponse::GetTypeName() const {
  return "main.ActivityListResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace main

// @@protoc_insertion_point(global_scope)
