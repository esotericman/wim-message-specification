// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FriendAdd.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_FriendAdd_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_FriendAdd_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_FriendAdd_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_FriendAdd_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_FriendAdd_2eproto;
class FriendAdd;
class FriendAddDefaultTypeInternal;
extern FriendAddDefaultTypeInternal _FriendAdd_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::FriendAdd* Arena::CreateMaybeMessage<::FriendAdd>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class FriendAdd PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:FriendAdd) */ {
 public:
  inline FriendAdd() : FriendAdd(nullptr) {};
  virtual ~FriendAdd();

  FriendAdd(const FriendAdd& from);
  FriendAdd(FriendAdd&& from) noexcept
    : FriendAdd() {
    *this = ::std::move(from);
  }

  inline FriendAdd& operator=(const FriendAdd& from) {
    CopyFrom(from);
    return *this;
  }
  inline FriendAdd& operator=(FriendAdd&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const FriendAdd& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FriendAdd* internal_default_instance() {
    return reinterpret_cast<const FriendAdd*>(
               &_FriendAdd_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FriendAdd& a, FriendAdd& b) {
    a.Swap(&b);
  }
  inline void Swap(FriendAdd* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FriendAdd* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FriendAdd* New() const final {
    return CreateMaybeMessage<FriendAdd>(nullptr);
  }

  FriendAdd* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FriendAdd>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FriendAdd& from);
  void MergeFrom(const FriendAdd& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FriendAdd* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "FriendAdd";
  }
  protected:
  explicit FriendAdd(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_FriendAdd_2eproto);
    return ::descriptor_table_FriendAdd_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFromFieldNumber = 1,
    kToFieldNumber = 2,
    kTimestampFieldNumber = 3,
  };
  // string from = 1;
  void clear_from();
  const std::string& from() const;
  void set_from(const std::string& value);
  void set_from(std::string&& value);
  void set_from(const char* value);
  void set_from(const char* value, size_t size);
  std::string* mutable_from();
  std::string* release_from();
  void set_allocated_from(std::string* from);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_from();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_from(
      std::string* from);
  private:
  const std::string& _internal_from() const;
  void _internal_set_from(const std::string& value);
  std::string* _internal_mutable_from();
  public:

  // string to = 2;
  void clear_to();
  const std::string& to() const;
  void set_to(const std::string& value);
  void set_to(std::string&& value);
  void set_to(const char* value);
  void set_to(const char* value, size_t size);
  std::string* mutable_to();
  std::string* release_to();
  void set_allocated_to(std::string* to);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_to();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_to(
      std::string* to);
  private:
  const std::string& _internal_to() const;
  void _internal_set_to(const std::string& value);
  std::string* _internal_mutable_to();
  public:

  // .google.protobuf.Timestamp timestamp = 3;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  const PROTOBUF_NAMESPACE_ID::Timestamp& timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_timestamp();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_timestamp();
  public:
  void unsafe_arena_set_allocated_timestamp(
      PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_timestamp();

  // @@protoc_insertion_point(class_scope:FriendAdd)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr from_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr to_;
  PROTOBUF_NAMESPACE_ID::Timestamp* timestamp_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_FriendAdd_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FriendAdd

// string from = 1;
inline void FriendAdd::clear_from() {
  from_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& FriendAdd::from() const {
  // @@protoc_insertion_point(field_get:FriendAdd.from)
  return _internal_from();
}
inline void FriendAdd::set_from(const std::string& value) {
  _internal_set_from(value);
  // @@protoc_insertion_point(field_set:FriendAdd.from)
}
inline std::string* FriendAdd::mutable_from() {
  // @@protoc_insertion_point(field_mutable:FriendAdd.from)
  return _internal_mutable_from();
}
inline const std::string& FriendAdd::_internal_from() const {
  return from_.Get();
}
inline void FriendAdd::_internal_set_from(const std::string& value) {
  
  from_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void FriendAdd::set_from(std::string&& value) {
  
  from_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:FriendAdd.from)
}
inline void FriendAdd::set_from(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  from_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:FriendAdd.from)
}
inline void FriendAdd::set_from(const char* value,
    size_t size) {
  
  from_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:FriendAdd.from)
}
inline std::string* FriendAdd::_internal_mutable_from() {
  
  return from_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* FriendAdd::release_from() {
  // @@protoc_insertion_point(field_release:FriendAdd.from)
  return from_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void FriendAdd::set_allocated_from(std::string* from) {
  if (from != nullptr) {
    
  } else {
    
  }
  from_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:FriendAdd.from)
}
inline std::string* FriendAdd::unsafe_arena_release_from() {
  // @@protoc_insertion_point(field_unsafe_arena_release:FriendAdd.from)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return from_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void FriendAdd::unsafe_arena_set_allocated_from(
    std::string* from) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (from != nullptr) {
    
  } else {
    
  }
  from_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      from, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:FriendAdd.from)
}

// string to = 2;
inline void FriendAdd::clear_to() {
  to_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& FriendAdd::to() const {
  // @@protoc_insertion_point(field_get:FriendAdd.to)
  return _internal_to();
}
inline void FriendAdd::set_to(const std::string& value) {
  _internal_set_to(value);
  // @@protoc_insertion_point(field_set:FriendAdd.to)
}
inline std::string* FriendAdd::mutable_to() {
  // @@protoc_insertion_point(field_mutable:FriendAdd.to)
  return _internal_mutable_to();
}
inline const std::string& FriendAdd::_internal_to() const {
  return to_.Get();
}
inline void FriendAdd::_internal_set_to(const std::string& value) {
  
  to_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void FriendAdd::set_to(std::string&& value) {
  
  to_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:FriendAdd.to)
}
inline void FriendAdd::set_to(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  to_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:FriendAdd.to)
}
inline void FriendAdd::set_to(const char* value,
    size_t size) {
  
  to_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:FriendAdd.to)
}
inline std::string* FriendAdd::_internal_mutable_to() {
  
  return to_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* FriendAdd::release_to() {
  // @@protoc_insertion_point(field_release:FriendAdd.to)
  return to_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void FriendAdd::set_allocated_to(std::string* to) {
  if (to != nullptr) {
    
  } else {
    
  }
  to_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), to,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:FriendAdd.to)
}
inline std::string* FriendAdd::unsafe_arena_release_to() {
  // @@protoc_insertion_point(field_unsafe_arena_release:FriendAdd.to)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return to_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void FriendAdd::unsafe_arena_set_allocated_to(
    std::string* to) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (to != nullptr) {
    
  } else {
    
  }
  to_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      to, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:FriendAdd.to)
}

// .google.protobuf.Timestamp timestamp = 3;
inline bool FriendAdd::_internal_has_timestamp() const {
  return this != internal_default_instance() && timestamp_ != nullptr;
}
inline bool FriendAdd::has_timestamp() const {
  return _internal_has_timestamp();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& FriendAdd::_internal_timestamp() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = timestamp_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& FriendAdd::timestamp() const {
  // @@protoc_insertion_point(field_get:FriendAdd.timestamp)
  return _internal_timestamp();
}
inline void FriendAdd::unsafe_arena_set_allocated_timestamp(
    PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp_);
  }
  timestamp_ = timestamp;
  if (timestamp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:FriendAdd.timestamp)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* FriendAdd::release_timestamp() {
  auto temp = unsafe_arena_release_timestamp();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* FriendAdd::unsafe_arena_release_timestamp() {
  // @@protoc_insertion_point(field_release:FriendAdd.timestamp)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = timestamp_;
  timestamp_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* FriendAdd::_internal_mutable_timestamp() {
  
  if (timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    timestamp_ = p;
  }
  return timestamp_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* FriendAdd::mutable_timestamp() {
  // @@protoc_insertion_point(field_mutable:FriendAdd.timestamp)
  return _internal_mutable_timestamp();
}
inline void FriendAdd::set_allocated_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp_);
  }
  if (timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp)->GetArena();
    if (message_arena != submessage_arena) {
      timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    
  } else {
    
  }
  timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:FriendAdd.timestamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_FriendAdd_2eproto
