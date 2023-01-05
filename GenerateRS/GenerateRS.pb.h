// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GenerateRS.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GenerateRS_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GenerateRS_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GenerateRS_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GenerateRS_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GenerateRS_2eproto;
namespace AppleRemoteAuth {
class RemoteDeviceInfo;
struct RemoteDeviceInfoDefaultTypeInternal;
extern RemoteDeviceInfoDefaultTypeInternal _RemoteDeviceInfo_default_instance_;
class rsdata;
struct rsdataDefaultTypeInternal;
extern rsdataDefaultTypeInternal _rsdata_default_instance_;
}  // namespace AppleRemoteAuth
PROTOBUF_NAMESPACE_OPEN
template<> ::AppleRemoteAuth::RemoteDeviceInfo* Arena::CreateMaybeMessage<::AppleRemoteAuth::RemoteDeviceInfo>(Arena*);
template<> ::AppleRemoteAuth::rsdata* Arena::CreateMaybeMessage<::AppleRemoteAuth::rsdata>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AppleRemoteAuth {

// ===================================================================

class RemoteDeviceInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AppleRemoteAuth.RemoteDeviceInfo) */ {
 public:
  inline RemoteDeviceInfo() : RemoteDeviceInfo(nullptr) {}
  ~RemoteDeviceInfo() override;
  explicit PROTOBUF_CONSTEXPR RemoteDeviceInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RemoteDeviceInfo(const RemoteDeviceInfo& from);
  RemoteDeviceInfo(RemoteDeviceInfo&& from) noexcept
    : RemoteDeviceInfo() {
    *this = ::std::move(from);
  }

  inline RemoteDeviceInfo& operator=(const RemoteDeviceInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline RemoteDeviceInfo& operator=(RemoteDeviceInfo&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RemoteDeviceInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const RemoteDeviceInfo* internal_default_instance() {
    return reinterpret_cast<const RemoteDeviceInfo*>(
               &_RemoteDeviceInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RemoteDeviceInfo& a, RemoteDeviceInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(RemoteDeviceInfo* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RemoteDeviceInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RemoteDeviceInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RemoteDeviceInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RemoteDeviceInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RemoteDeviceInfo& from) {
    RemoteDeviceInfo::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RemoteDeviceInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AppleRemoteAuth.RemoteDeviceInfo";
  }
  protected:
  explicit RemoteDeviceInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRqDataFieldNumber = 1,
    kRqSigDataFieldNumber = 2,
    kKeyFairPlayGuidFieldNumber = 4,
    kFairPlayCertificateFieldNumber = 5,
    kFairPlayGuidFieldNumber = 8,
    kGrappaSessionIdFieldNumber = 3,
    kPrivateKeyFieldNumber = 7,
    kFairDeviceTypeFieldNumber = 6,
  };
  // bytes rq_data = 1;
  void clear_rq_data();
  const std::string& rq_data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_rq_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_rq_data();
  PROTOBUF_NODISCARD std::string* release_rq_data();
  void set_allocated_rq_data(std::string* rq_data);
  private:
  const std::string& _internal_rq_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_rq_data(const std::string& value);
  std::string* _internal_mutable_rq_data();
  public:

  // bytes rq_sig_data = 2;
  void clear_rq_sig_data();
  const std::string& rq_sig_data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_rq_sig_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_rq_sig_data();
  PROTOBUF_NODISCARD std::string* release_rq_sig_data();
  void set_allocated_rq_sig_data(std::string* rq_sig_data);
  private:
  const std::string& _internal_rq_sig_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_rq_sig_data(const std::string& value);
  std::string* _internal_mutable_rq_sig_data();
  public:

  // bytes key_fair_play_guid = 4;
  void clear_key_fair_play_guid();
  const std::string& key_fair_play_guid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_key_fair_play_guid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_key_fair_play_guid();
  PROTOBUF_NODISCARD std::string* release_key_fair_play_guid();
  void set_allocated_key_fair_play_guid(std::string* key_fair_play_guid);
  private:
  const std::string& _internal_key_fair_play_guid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key_fair_play_guid(const std::string& value);
  std::string* _internal_mutable_key_fair_play_guid();
  public:

  // bytes fair_play_certificate = 5;
  void clear_fair_play_certificate();
  const std::string& fair_play_certificate() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_fair_play_certificate(ArgT0&& arg0, ArgT... args);
  std::string* mutable_fair_play_certificate();
  PROTOBUF_NODISCARD std::string* release_fair_play_certificate();
  void set_allocated_fair_play_certificate(std::string* fair_play_certificate);
  private:
  const std::string& _internal_fair_play_certificate() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_fair_play_certificate(const std::string& value);
  std::string* _internal_mutable_fair_play_certificate();
  public:

  // string fair_play_guid = 8;
  void clear_fair_play_guid();
  const std::string& fair_play_guid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_fair_play_guid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_fair_play_guid();
  PROTOBUF_NODISCARD std::string* release_fair_play_guid();
  void set_allocated_fair_play_guid(std::string* fair_play_guid);
  private:
  const std::string& _internal_fair_play_guid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_fair_play_guid(const std::string& value);
  std::string* _internal_mutable_fair_play_guid();
  public:

  // uint32 grappa_session_id = 3;
  void clear_grappa_session_id();
  uint32_t grappa_session_id() const;
  void set_grappa_session_id(uint32_t value);
  private:
  uint32_t _internal_grappa_session_id() const;
  void _internal_set_grappa_session_id(uint32_t value);
  public:

  // uint32 private_key = 7;
  void clear_private_key();
  uint32_t private_key() const;
  void set_private_key(uint32_t value);
  private:
  uint32_t _internal_private_key() const;
  void _internal_set_private_key(uint32_t value);
  public:

  // int64 fair_device_type = 6;
  void clear_fair_device_type();
  int64_t fair_device_type() const;
  void set_fair_device_type(int64_t value);
  private:
  int64_t _internal_fair_device_type() const;
  void _internal_set_fair_device_type(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AppleRemoteAuth.RemoteDeviceInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr rq_data_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr rq_sig_data_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_fair_play_guid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr fair_play_certificate_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr fair_play_guid_;
    uint32_t grappa_session_id_;
    uint32_t private_key_;
    int64_t fair_device_type_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GenerateRS_2eproto;
};
// -------------------------------------------------------------------

class rsdata final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AppleRemoteAuth.rsdata) */ {
 public:
  inline rsdata() : rsdata(nullptr) {}
  ~rsdata() override;
  explicit PROTOBUF_CONSTEXPR rsdata(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  rsdata(const rsdata& from);
  rsdata(rsdata&& from) noexcept
    : rsdata() {
    *this = ::std::move(from);
  }

  inline rsdata& operator=(const rsdata& from) {
    CopyFrom(from);
    return *this;
  }
  inline rsdata& operator=(rsdata&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const rsdata& default_instance() {
    return *internal_default_instance();
  }
  static inline const rsdata* internal_default_instance() {
    return reinterpret_cast<const rsdata*>(
               &_rsdata_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(rsdata& a, rsdata& b) {
    a.Swap(&b);
  }
  inline void Swap(rsdata* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(rsdata* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  rsdata* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<rsdata>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const rsdata& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const rsdata& from) {
    rsdata::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(rsdata* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AppleRemoteAuth.rsdata";
  }
  protected:
  explicit rsdata(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRsDataFieldNumber = 1,
    kRsSigDataFieldNumber = 3,
    kRetFieldNumber = 2,
  };
  // bytes rs_data = 1;
  void clear_rs_data();
  const std::string& rs_data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_rs_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_rs_data();
  PROTOBUF_NODISCARD std::string* release_rs_data();
  void set_allocated_rs_data(std::string* rs_data);
  private:
  const std::string& _internal_rs_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_rs_data(const std::string& value);
  std::string* _internal_mutable_rs_data();
  public:

  // bytes rs_sig_data = 3;
  void clear_rs_sig_data();
  const std::string& rs_sig_data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_rs_sig_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_rs_sig_data();
  PROTOBUF_NODISCARD std::string* release_rs_sig_data();
  void set_allocated_rs_sig_data(std::string* rs_sig_data);
  private:
  const std::string& _internal_rs_sig_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_rs_sig_data(const std::string& value);
  std::string* _internal_mutable_rs_sig_data();
  public:

  // bool ret = 2;
  void clear_ret();
  bool ret() const;
  void set_ret(bool value);
  private:
  bool _internal_ret() const;
  void _internal_set_ret(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AppleRemoteAuth.rsdata)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr rs_data_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr rs_sig_data_;
    bool ret_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GenerateRS_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RemoteDeviceInfo

// bytes rq_data = 1;
inline void RemoteDeviceInfo::clear_rq_data() {
  _impl_.rq_data_.ClearToEmpty();
}
inline const std::string& RemoteDeviceInfo::rq_data() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.RemoteDeviceInfo.rq_data)
  return _internal_rq_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RemoteDeviceInfo::set_rq_data(ArgT0&& arg0, ArgT... args) {
 
 _impl_.rq_data_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.RemoteDeviceInfo.rq_data)
}
inline std::string* RemoteDeviceInfo::mutable_rq_data() {
  std::string* _s = _internal_mutable_rq_data();
  // @@protoc_insertion_point(field_mutable:AppleRemoteAuth.RemoteDeviceInfo.rq_data)
  return _s;
}
inline const std::string& RemoteDeviceInfo::_internal_rq_data() const {
  return _impl_.rq_data_.Get();
}
inline void RemoteDeviceInfo::_internal_set_rq_data(const std::string& value) {
  
  _impl_.rq_data_.Set(value, GetArenaForAllocation());
}
inline std::string* RemoteDeviceInfo::_internal_mutable_rq_data() {
  
  return _impl_.rq_data_.Mutable(GetArenaForAllocation());
}
inline std::string* RemoteDeviceInfo::release_rq_data() {
  // @@protoc_insertion_point(field_release:AppleRemoteAuth.RemoteDeviceInfo.rq_data)
  return _impl_.rq_data_.Release();
}
inline void RemoteDeviceInfo::set_allocated_rq_data(std::string* rq_data) {
  if (rq_data != nullptr) {
    
  } else {
    
  }
  _impl_.rq_data_.SetAllocated(rq_data, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.rq_data_.IsDefault()) {
    _impl_.rq_data_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AppleRemoteAuth.RemoteDeviceInfo.rq_data)
}

// bytes rq_sig_data = 2;
inline void RemoteDeviceInfo::clear_rq_sig_data() {
  _impl_.rq_sig_data_.ClearToEmpty();
}
inline const std::string& RemoteDeviceInfo::rq_sig_data() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.RemoteDeviceInfo.rq_sig_data)
  return _internal_rq_sig_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RemoteDeviceInfo::set_rq_sig_data(ArgT0&& arg0, ArgT... args) {
 
 _impl_.rq_sig_data_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.RemoteDeviceInfo.rq_sig_data)
}
inline std::string* RemoteDeviceInfo::mutable_rq_sig_data() {
  std::string* _s = _internal_mutable_rq_sig_data();
  // @@protoc_insertion_point(field_mutable:AppleRemoteAuth.RemoteDeviceInfo.rq_sig_data)
  return _s;
}
inline const std::string& RemoteDeviceInfo::_internal_rq_sig_data() const {
  return _impl_.rq_sig_data_.Get();
}
inline void RemoteDeviceInfo::_internal_set_rq_sig_data(const std::string& value) {
  
  _impl_.rq_sig_data_.Set(value, GetArenaForAllocation());
}
inline std::string* RemoteDeviceInfo::_internal_mutable_rq_sig_data() {
  
  return _impl_.rq_sig_data_.Mutable(GetArenaForAllocation());
}
inline std::string* RemoteDeviceInfo::release_rq_sig_data() {
  // @@protoc_insertion_point(field_release:AppleRemoteAuth.RemoteDeviceInfo.rq_sig_data)
  return _impl_.rq_sig_data_.Release();
}
inline void RemoteDeviceInfo::set_allocated_rq_sig_data(std::string* rq_sig_data) {
  if (rq_sig_data != nullptr) {
    
  } else {
    
  }
  _impl_.rq_sig_data_.SetAllocated(rq_sig_data, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.rq_sig_data_.IsDefault()) {
    _impl_.rq_sig_data_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AppleRemoteAuth.RemoteDeviceInfo.rq_sig_data)
}

// uint32 grappa_session_id = 3;
inline void RemoteDeviceInfo::clear_grappa_session_id() {
  _impl_.grappa_session_id_ = 0u;
}
inline uint32_t RemoteDeviceInfo::_internal_grappa_session_id() const {
  return _impl_.grappa_session_id_;
}
inline uint32_t RemoteDeviceInfo::grappa_session_id() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.RemoteDeviceInfo.grappa_session_id)
  return _internal_grappa_session_id();
}
inline void RemoteDeviceInfo::_internal_set_grappa_session_id(uint32_t value) {
  
  _impl_.grappa_session_id_ = value;
}
inline void RemoteDeviceInfo::set_grappa_session_id(uint32_t value) {
  _internal_set_grappa_session_id(value);
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.RemoteDeviceInfo.grappa_session_id)
}

// bytes key_fair_play_guid = 4;
inline void RemoteDeviceInfo::clear_key_fair_play_guid() {
  _impl_.key_fair_play_guid_.ClearToEmpty();
}
inline const std::string& RemoteDeviceInfo::key_fair_play_guid() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.RemoteDeviceInfo.key_fair_play_guid)
  return _internal_key_fair_play_guid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RemoteDeviceInfo::set_key_fair_play_guid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.key_fair_play_guid_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.RemoteDeviceInfo.key_fair_play_guid)
}
inline std::string* RemoteDeviceInfo::mutable_key_fair_play_guid() {
  std::string* _s = _internal_mutable_key_fair_play_guid();
  // @@protoc_insertion_point(field_mutable:AppleRemoteAuth.RemoteDeviceInfo.key_fair_play_guid)
  return _s;
}
inline const std::string& RemoteDeviceInfo::_internal_key_fair_play_guid() const {
  return _impl_.key_fair_play_guid_.Get();
}
inline void RemoteDeviceInfo::_internal_set_key_fair_play_guid(const std::string& value) {
  
  _impl_.key_fair_play_guid_.Set(value, GetArenaForAllocation());
}
inline std::string* RemoteDeviceInfo::_internal_mutable_key_fair_play_guid() {
  
  return _impl_.key_fair_play_guid_.Mutable(GetArenaForAllocation());
}
inline std::string* RemoteDeviceInfo::release_key_fair_play_guid() {
  // @@protoc_insertion_point(field_release:AppleRemoteAuth.RemoteDeviceInfo.key_fair_play_guid)
  return _impl_.key_fair_play_guid_.Release();
}
inline void RemoteDeviceInfo::set_allocated_key_fair_play_guid(std::string* key_fair_play_guid) {
  if (key_fair_play_guid != nullptr) {
    
  } else {
    
  }
  _impl_.key_fair_play_guid_.SetAllocated(key_fair_play_guid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.key_fair_play_guid_.IsDefault()) {
    _impl_.key_fair_play_guid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AppleRemoteAuth.RemoteDeviceInfo.key_fair_play_guid)
}

// bytes fair_play_certificate = 5;
inline void RemoteDeviceInfo::clear_fair_play_certificate() {
  _impl_.fair_play_certificate_.ClearToEmpty();
}
inline const std::string& RemoteDeviceInfo::fair_play_certificate() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.RemoteDeviceInfo.fair_play_certificate)
  return _internal_fair_play_certificate();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RemoteDeviceInfo::set_fair_play_certificate(ArgT0&& arg0, ArgT... args) {
 
 _impl_.fair_play_certificate_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.RemoteDeviceInfo.fair_play_certificate)
}
inline std::string* RemoteDeviceInfo::mutable_fair_play_certificate() {
  std::string* _s = _internal_mutable_fair_play_certificate();
  // @@protoc_insertion_point(field_mutable:AppleRemoteAuth.RemoteDeviceInfo.fair_play_certificate)
  return _s;
}
inline const std::string& RemoteDeviceInfo::_internal_fair_play_certificate() const {
  return _impl_.fair_play_certificate_.Get();
}
inline void RemoteDeviceInfo::_internal_set_fair_play_certificate(const std::string& value) {
  
  _impl_.fair_play_certificate_.Set(value, GetArenaForAllocation());
}
inline std::string* RemoteDeviceInfo::_internal_mutable_fair_play_certificate() {
  
  return _impl_.fair_play_certificate_.Mutable(GetArenaForAllocation());
}
inline std::string* RemoteDeviceInfo::release_fair_play_certificate() {
  // @@protoc_insertion_point(field_release:AppleRemoteAuth.RemoteDeviceInfo.fair_play_certificate)
  return _impl_.fair_play_certificate_.Release();
}
inline void RemoteDeviceInfo::set_allocated_fair_play_certificate(std::string* fair_play_certificate) {
  if (fair_play_certificate != nullptr) {
    
  } else {
    
  }
  _impl_.fair_play_certificate_.SetAllocated(fair_play_certificate, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.fair_play_certificate_.IsDefault()) {
    _impl_.fair_play_certificate_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AppleRemoteAuth.RemoteDeviceInfo.fair_play_certificate)
}

// int64 fair_device_type = 6;
inline void RemoteDeviceInfo::clear_fair_device_type() {
  _impl_.fair_device_type_ = int64_t{0};
}
inline int64_t RemoteDeviceInfo::_internal_fair_device_type() const {
  return _impl_.fair_device_type_;
}
inline int64_t RemoteDeviceInfo::fair_device_type() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.RemoteDeviceInfo.fair_device_type)
  return _internal_fair_device_type();
}
inline void RemoteDeviceInfo::_internal_set_fair_device_type(int64_t value) {
  
  _impl_.fair_device_type_ = value;
}
inline void RemoteDeviceInfo::set_fair_device_type(int64_t value) {
  _internal_set_fair_device_type(value);
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.RemoteDeviceInfo.fair_device_type)
}

// uint32 private_key = 7;
inline void RemoteDeviceInfo::clear_private_key() {
  _impl_.private_key_ = 0u;
}
inline uint32_t RemoteDeviceInfo::_internal_private_key() const {
  return _impl_.private_key_;
}
inline uint32_t RemoteDeviceInfo::private_key() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.RemoteDeviceInfo.private_key)
  return _internal_private_key();
}
inline void RemoteDeviceInfo::_internal_set_private_key(uint32_t value) {
  
  _impl_.private_key_ = value;
}
inline void RemoteDeviceInfo::set_private_key(uint32_t value) {
  _internal_set_private_key(value);
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.RemoteDeviceInfo.private_key)
}

// string fair_play_guid = 8;
inline void RemoteDeviceInfo::clear_fair_play_guid() {
  _impl_.fair_play_guid_.ClearToEmpty();
}
inline const std::string& RemoteDeviceInfo::fair_play_guid() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.RemoteDeviceInfo.fair_play_guid)
  return _internal_fair_play_guid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RemoteDeviceInfo::set_fair_play_guid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.fair_play_guid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.RemoteDeviceInfo.fair_play_guid)
}
inline std::string* RemoteDeviceInfo::mutable_fair_play_guid() {
  std::string* _s = _internal_mutable_fair_play_guid();
  // @@protoc_insertion_point(field_mutable:AppleRemoteAuth.RemoteDeviceInfo.fair_play_guid)
  return _s;
}
inline const std::string& RemoteDeviceInfo::_internal_fair_play_guid() const {
  return _impl_.fair_play_guid_.Get();
}
inline void RemoteDeviceInfo::_internal_set_fair_play_guid(const std::string& value) {
  
  _impl_.fair_play_guid_.Set(value, GetArenaForAllocation());
}
inline std::string* RemoteDeviceInfo::_internal_mutable_fair_play_guid() {
  
  return _impl_.fair_play_guid_.Mutable(GetArenaForAllocation());
}
inline std::string* RemoteDeviceInfo::release_fair_play_guid() {
  // @@protoc_insertion_point(field_release:AppleRemoteAuth.RemoteDeviceInfo.fair_play_guid)
  return _impl_.fair_play_guid_.Release();
}
inline void RemoteDeviceInfo::set_allocated_fair_play_guid(std::string* fair_play_guid) {
  if (fair_play_guid != nullptr) {
    
  } else {
    
  }
  _impl_.fair_play_guid_.SetAllocated(fair_play_guid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.fair_play_guid_.IsDefault()) {
    _impl_.fair_play_guid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AppleRemoteAuth.RemoteDeviceInfo.fair_play_guid)
}

// -------------------------------------------------------------------

// rsdata

// bytes rs_data = 1;
inline void rsdata::clear_rs_data() {
  _impl_.rs_data_.ClearToEmpty();
}
inline const std::string& rsdata::rs_data() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.rsdata.rs_data)
  return _internal_rs_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void rsdata::set_rs_data(ArgT0&& arg0, ArgT... args) {
 
 _impl_.rs_data_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.rsdata.rs_data)
}
inline std::string* rsdata::mutable_rs_data() {
  std::string* _s = _internal_mutable_rs_data();
  // @@protoc_insertion_point(field_mutable:AppleRemoteAuth.rsdata.rs_data)
  return _s;
}
inline const std::string& rsdata::_internal_rs_data() const {
  return _impl_.rs_data_.Get();
}
inline void rsdata::_internal_set_rs_data(const std::string& value) {
  
  _impl_.rs_data_.Set(value, GetArenaForAllocation());
}
inline std::string* rsdata::_internal_mutable_rs_data() {
  
  return _impl_.rs_data_.Mutable(GetArenaForAllocation());
}
inline std::string* rsdata::release_rs_data() {
  // @@protoc_insertion_point(field_release:AppleRemoteAuth.rsdata.rs_data)
  return _impl_.rs_data_.Release();
}
inline void rsdata::set_allocated_rs_data(std::string* rs_data) {
  if (rs_data != nullptr) {
    
  } else {
    
  }
  _impl_.rs_data_.SetAllocated(rs_data, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.rs_data_.IsDefault()) {
    _impl_.rs_data_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AppleRemoteAuth.rsdata.rs_data)
}

// bool ret = 2;
inline void rsdata::clear_ret() {
  _impl_.ret_ = false;
}
inline bool rsdata::_internal_ret() const {
  return _impl_.ret_;
}
inline bool rsdata::ret() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.rsdata.ret)
  return _internal_ret();
}
inline void rsdata::_internal_set_ret(bool value) {
  
  _impl_.ret_ = value;
}
inline void rsdata::set_ret(bool value) {
  _internal_set_ret(value);
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.rsdata.ret)
}

// bytes rs_sig_data = 3;
inline void rsdata::clear_rs_sig_data() {
  _impl_.rs_sig_data_.ClearToEmpty();
}
inline const std::string& rsdata::rs_sig_data() const {
  // @@protoc_insertion_point(field_get:AppleRemoteAuth.rsdata.rs_sig_data)
  return _internal_rs_sig_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void rsdata::set_rs_sig_data(ArgT0&& arg0, ArgT... args) {
 
 _impl_.rs_sig_data_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AppleRemoteAuth.rsdata.rs_sig_data)
}
inline std::string* rsdata::mutable_rs_sig_data() {
  std::string* _s = _internal_mutable_rs_sig_data();
  // @@protoc_insertion_point(field_mutable:AppleRemoteAuth.rsdata.rs_sig_data)
  return _s;
}
inline const std::string& rsdata::_internal_rs_sig_data() const {
  return _impl_.rs_sig_data_.Get();
}
inline void rsdata::_internal_set_rs_sig_data(const std::string& value) {
  
  _impl_.rs_sig_data_.Set(value, GetArenaForAllocation());
}
inline std::string* rsdata::_internal_mutable_rs_sig_data() {
  
  return _impl_.rs_sig_data_.Mutable(GetArenaForAllocation());
}
inline std::string* rsdata::release_rs_sig_data() {
  // @@protoc_insertion_point(field_release:AppleRemoteAuth.rsdata.rs_sig_data)
  return _impl_.rs_sig_data_.Release();
}
inline void rsdata::set_allocated_rs_sig_data(std::string* rs_sig_data) {
  if (rs_sig_data != nullptr) {
    
  } else {
    
  }
  _impl_.rs_sig_data_.SetAllocated(rs_sig_data, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.rs_sig_data_.IsDefault()) {
    _impl_.rs_sig_data_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AppleRemoteAuth.rsdata.rs_sig_data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace AppleRemoteAuth

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GenerateRS_2eproto
