// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChatAck.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ChatAck_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ChatAck_2eproto

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
#include "ChatClient.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ChatAck_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ChatAck_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChatAck_2eproto;
class ChatAck;
class ChatAckDefaultTypeInternal;
extern ChatAckDefaultTypeInternal _ChatAck_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::ChatAck* Arena::CreateMaybeMessage<::ChatAck>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class ChatAck PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ChatAck) */ {
 public:
  inline ChatAck() : ChatAck(nullptr) {};
  virtual ~ChatAck();

  ChatAck(const ChatAck& from);
  ChatAck(ChatAck&& from) noexcept
    : ChatAck() {
    *this = ::std::move(from);
  }

  inline ChatAck& operator=(const ChatAck& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChatAck& operator=(ChatAck&& from) noexcept {
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
  static const ChatAck& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ChatAck* internal_default_instance() {
    return reinterpret_cast<const ChatAck*>(
               &_ChatAck_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChatAck& a, ChatAck& b) {
    a.Swap(&b);
  }
  inline void Swap(ChatAck* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ChatAck* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ChatAck* New() const final {
    return CreateMaybeMessage<ChatAck>(nullptr);
  }

  ChatAck* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ChatAck>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ChatAck& from);
  void MergeFrom(const ChatAck& from);
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
  void InternalSwap(ChatAck* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ChatAck";
  }
  protected:
  explicit ChatAck(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ChatAck_2eproto);
    return ::descriptor_table_ChatAck_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kConversationFieldNumber = 1,
    kFromFieldNumber = 2,
    kSeqFieldNumber = 3,
    kClientFieldNumber = 4,
  };
  // string conversation = 1;
  void clear_conversation();
  const std::string& conversation() const;
  void set_conversation(const std::string& value);
  void set_conversation(std::string&& value);
  void set_conversation(const char* value);
  void set_conversation(const char* value, size_t size);
  std::string* mutable_conversation();
  std::string* release_conversation();
  void set_allocated_conversation(std::string* conversation);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_conversation();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_conversation(
      std::string* conversation);
  private:
  const std::string& _internal_conversation() const;
  void _internal_set_conversation(const std::string& value);
  std::string* _internal_mutable_conversation();
  public:

  // string from = 2;
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

  // uint64 seq = 3;
  void clear_seq();
  ::PROTOBUF_NAMESPACE_ID::uint64 seq() const;
  void set_seq(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_seq() const;
  void _internal_set_seq(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // .ChatClient client = 4;
  void clear_client();
  ::ChatClient client() const;
  void set_client(::ChatClient value);
  private:
  ::ChatClient _internal_client() const;
  void _internal_set_client(::ChatClient value);
  public:

  // @@protoc_insertion_point(class_scope:ChatAck)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr conversation_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr from_;
  ::PROTOBUF_NAMESPACE_ID::uint64 seq_;
  int client_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ChatAck_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChatAck

// string conversation = 1;
inline void ChatAck::clear_conversation() {
  conversation_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ChatAck::conversation() const {
  // @@protoc_insertion_point(field_get:ChatAck.conversation)
  return _internal_conversation();
}
inline void ChatAck::set_conversation(const std::string& value) {
  _internal_set_conversation(value);
  // @@protoc_insertion_point(field_set:ChatAck.conversation)
}
inline std::string* ChatAck::mutable_conversation() {
  // @@protoc_insertion_point(field_mutable:ChatAck.conversation)
  return _internal_mutable_conversation();
}
inline const std::string& ChatAck::_internal_conversation() const {
  return conversation_.Get();
}
inline void ChatAck::_internal_set_conversation(const std::string& value) {
  
  conversation_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ChatAck::set_conversation(std::string&& value) {
  
  conversation_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ChatAck.conversation)
}
inline void ChatAck::set_conversation(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  conversation_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:ChatAck.conversation)
}
inline void ChatAck::set_conversation(const char* value,
    size_t size) {
  
  conversation_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ChatAck.conversation)
}
inline std::string* ChatAck::_internal_mutable_conversation() {
  
  return conversation_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ChatAck::release_conversation() {
  // @@protoc_insertion_point(field_release:ChatAck.conversation)
  return conversation_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ChatAck::set_allocated_conversation(std::string* conversation) {
  if (conversation != nullptr) {
    
  } else {
    
  }
  conversation_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), conversation,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ChatAck.conversation)
}
inline std::string* ChatAck::unsafe_arena_release_conversation() {
  // @@protoc_insertion_point(field_unsafe_arena_release:ChatAck.conversation)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return conversation_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void ChatAck::unsafe_arena_set_allocated_conversation(
    std::string* conversation) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (conversation != nullptr) {
    
  } else {
    
  }
  conversation_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      conversation, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:ChatAck.conversation)
}

// string from = 2;
inline void ChatAck::clear_from() {
  from_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ChatAck::from() const {
  // @@protoc_insertion_point(field_get:ChatAck.from)
  return _internal_from();
}
inline void ChatAck::set_from(const std::string& value) {
  _internal_set_from(value);
  // @@protoc_insertion_point(field_set:ChatAck.from)
}
inline std::string* ChatAck::mutable_from() {
  // @@protoc_insertion_point(field_mutable:ChatAck.from)
  return _internal_mutable_from();
}
inline const std::string& ChatAck::_internal_from() const {
  return from_.Get();
}
inline void ChatAck::_internal_set_from(const std::string& value) {
  
  from_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ChatAck::set_from(std::string&& value) {
  
  from_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ChatAck.from)
}
inline void ChatAck::set_from(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  from_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:ChatAck.from)
}
inline void ChatAck::set_from(const char* value,
    size_t size) {
  
  from_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ChatAck.from)
}
inline std::string* ChatAck::_internal_mutable_from() {
  
  return from_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ChatAck::release_from() {
  // @@protoc_insertion_point(field_release:ChatAck.from)
  return from_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ChatAck::set_allocated_from(std::string* from) {
  if (from != nullptr) {
    
  } else {
    
  }
  from_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ChatAck.from)
}
inline std::string* ChatAck::unsafe_arena_release_from() {
  // @@protoc_insertion_point(field_unsafe_arena_release:ChatAck.from)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return from_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void ChatAck::unsafe_arena_set_allocated_from(
    std::string* from) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (from != nullptr) {
    
  } else {
    
  }
  from_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      from, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:ChatAck.from)
}

// uint64 seq = 3;
inline void ChatAck::clear_seq() {
  seq_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ChatAck::_internal_seq() const {
  return seq_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ChatAck::seq() const {
  // @@protoc_insertion_point(field_get:ChatAck.seq)
  return _internal_seq();
}
inline void ChatAck::_internal_set_seq(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  seq_ = value;
}
inline void ChatAck::set_seq(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_seq(value);
  // @@protoc_insertion_point(field_set:ChatAck.seq)
}

// .ChatClient client = 4;
inline void ChatAck::clear_client() {
  client_ = 0;
}
inline ::ChatClient ChatAck::_internal_client() const {
  return static_cast< ::ChatClient >(client_);
}
inline ::ChatClient ChatAck::client() const {
  // @@protoc_insertion_point(field_get:ChatAck.client)
  return _internal_client();
}
inline void ChatAck::_internal_set_client(::ChatClient value) {
  
  client_ = value;
}
inline void ChatAck::set_client(::ChatClient value) {
  _internal_set_client(value);
  // @@protoc_insertion_point(field_set:ChatAck.client)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ChatAck_2eproto
