// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: embedding.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_embedding_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_embedding_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_embedding_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_embedding_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_embedding_2eproto;
namespace protoembedding {
class NodeEmbeddingRequest;
class NodeEmbeddingRequestDefaultTypeInternal;
extern NodeEmbeddingRequestDefaultTypeInternal _NodeEmbeddingRequest_default_instance_;
class NodeEmbeddingResponse;
class NodeEmbeddingResponseDefaultTypeInternal;
extern NodeEmbeddingResponseDefaultTypeInternal _NodeEmbeddingResponse_default_instance_;
}  // namespace protoembedding
PROTOBUF_NAMESPACE_OPEN
template<> ::protoembedding::NodeEmbeddingRequest* Arena::CreateMaybeMessage<::protoembedding::NodeEmbeddingRequest>(Arena*);
template<> ::protoembedding::NodeEmbeddingResponse* Arena::CreateMaybeMessage<::protoembedding::NodeEmbeddingResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protoembedding {

// ===================================================================

class NodeEmbeddingRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protoembedding.NodeEmbeddingRequest) */ {
 public:
  inline NodeEmbeddingRequest() : NodeEmbeddingRequest(nullptr) {};
  virtual ~NodeEmbeddingRequest();

  NodeEmbeddingRequest(const NodeEmbeddingRequest& from);
  NodeEmbeddingRequest(NodeEmbeddingRequest&& from) noexcept
    : NodeEmbeddingRequest() {
    *this = ::std::move(from);
  }

  inline NodeEmbeddingRequest& operator=(const NodeEmbeddingRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline NodeEmbeddingRequest& operator=(NodeEmbeddingRequest&& from) noexcept {
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
  static const NodeEmbeddingRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NodeEmbeddingRequest* internal_default_instance() {
    return reinterpret_cast<const NodeEmbeddingRequest*>(
               &_NodeEmbeddingRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NodeEmbeddingRequest& a, NodeEmbeddingRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(NodeEmbeddingRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NodeEmbeddingRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NodeEmbeddingRequest* New() const final {
    return CreateMaybeMessage<NodeEmbeddingRequest>(nullptr);
  }

  NodeEmbeddingRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NodeEmbeddingRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NodeEmbeddingRequest& from);
  void MergeFrom(const NodeEmbeddingRequest& from);
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
  void InternalSwap(NodeEmbeddingRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protoembedding.NodeEmbeddingRequest";
  }
  protected:
  explicit NodeEmbeddingRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_embedding_2eproto);
    return ::descriptor_table_embedding_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNodeIdsFieldNumber = 1,
  };
  // repeated uint32 node_ids = 1;
  int node_ids_size() const;
  private:
  int _internal_node_ids_size() const;
  public:
  void clear_node_ids();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_node_ids(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_node_ids() const;
  void _internal_add_node_ids(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_node_ids();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 node_ids(int index) const;
  void set_node_ids(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_node_ids(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      node_ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_node_ids();

  // @@protoc_insertion_point(class_scope:protoembedding.NodeEmbeddingRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > node_ids_;
  mutable std::atomic<int> _node_ids_cached_byte_size_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_embedding_2eproto;
};
// -------------------------------------------------------------------

class NodeEmbeddingResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protoembedding.NodeEmbeddingResponse) */ {
 public:
  inline NodeEmbeddingResponse() : NodeEmbeddingResponse(nullptr) {};
  virtual ~NodeEmbeddingResponse();

  NodeEmbeddingResponse(const NodeEmbeddingResponse& from);
  NodeEmbeddingResponse(NodeEmbeddingResponse&& from) noexcept
    : NodeEmbeddingResponse() {
    *this = ::std::move(from);
  }

  inline NodeEmbeddingResponse& operator=(const NodeEmbeddingResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline NodeEmbeddingResponse& operator=(NodeEmbeddingResponse&& from) noexcept {
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
  static const NodeEmbeddingResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NodeEmbeddingResponse* internal_default_instance() {
    return reinterpret_cast<const NodeEmbeddingResponse*>(
               &_NodeEmbeddingResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(NodeEmbeddingResponse& a, NodeEmbeddingResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(NodeEmbeddingResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NodeEmbeddingResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NodeEmbeddingResponse* New() const final {
    return CreateMaybeMessage<NodeEmbeddingResponse>(nullptr);
  }

  NodeEmbeddingResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NodeEmbeddingResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NodeEmbeddingResponse& from);
  void MergeFrom(const NodeEmbeddingResponse& from);
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
  void InternalSwap(NodeEmbeddingResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protoembedding.NodeEmbeddingResponse";
  }
  protected:
  explicit NodeEmbeddingResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_embedding_2eproto);
    return ::descriptor_table_embedding_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDimensionsFieldNumber = 2,
    kMissingIdsFieldNumber = 3,
    kEmbeddingsDataFieldNumber = 1,
  };
  // repeated int32 dimensions = 2;
  int dimensions_size() const;
  private:
  int _internal_dimensions_size() const;
  public:
  void clear_dimensions();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_dimensions(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_dimensions() const;
  void _internal_add_dimensions(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_dimensions();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 dimensions(int index) const;
  void set_dimensions(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_dimensions(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      dimensions() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_dimensions();

  // repeated uint32 missing_ids = 3;
  int missing_ids_size() const;
  private:
  int _internal_missing_ids_size() const;
  public:
  void clear_missing_ids();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_missing_ids(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_missing_ids() const;
  void _internal_add_missing_ids(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_missing_ids();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 missing_ids(int index) const;
  void set_missing_ids(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_missing_ids(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      missing_ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_missing_ids();

  // bytes embeddings_data = 1;
  void clear_embeddings_data();
  const std::string& embeddings_data() const;
  void set_embeddings_data(const std::string& value);
  void set_embeddings_data(std::string&& value);
  void set_embeddings_data(const char* value);
  void set_embeddings_data(const void* value, size_t size);
  std::string* mutable_embeddings_data();
  std::string* release_embeddings_data();
  void set_allocated_embeddings_data(std::string* embeddings_data);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_embeddings_data();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_embeddings_data(
      std::string* embeddings_data);
  private:
  const std::string& _internal_embeddings_data() const;
  void _internal_set_embeddings_data(const std::string& value);
  std::string* _internal_mutable_embeddings_data();
  public:

  // @@protoc_insertion_point(class_scope:protoembedding.NodeEmbeddingResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > dimensions_;
  mutable std::atomic<int> _dimensions_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > missing_ids_;
  mutable std::atomic<int> _missing_ids_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr embeddings_data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_embedding_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NodeEmbeddingRequest

// repeated uint32 node_ids = 1;
inline int NodeEmbeddingRequest::_internal_node_ids_size() const {
  return node_ids_.size();
}
inline int NodeEmbeddingRequest::node_ids_size() const {
  return _internal_node_ids_size();
}
inline void NodeEmbeddingRequest::clear_node_ids() {
  node_ids_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NodeEmbeddingRequest::_internal_node_ids(int index) const {
  return node_ids_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NodeEmbeddingRequest::node_ids(int index) const {
  // @@protoc_insertion_point(field_get:protoembedding.NodeEmbeddingRequest.node_ids)
  return _internal_node_ids(index);
}
inline void NodeEmbeddingRequest::set_node_ids(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  node_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:protoembedding.NodeEmbeddingRequest.node_ids)
}
inline void NodeEmbeddingRequest::_internal_add_node_ids(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  node_ids_.Add(value);
}
inline void NodeEmbeddingRequest::add_node_ids(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_node_ids(value);
  // @@protoc_insertion_point(field_add:protoembedding.NodeEmbeddingRequest.node_ids)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
NodeEmbeddingRequest::_internal_node_ids() const {
  return node_ids_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
NodeEmbeddingRequest::node_ids() const {
  // @@protoc_insertion_point(field_list:protoembedding.NodeEmbeddingRequest.node_ids)
  return _internal_node_ids();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
NodeEmbeddingRequest::_internal_mutable_node_ids() {
  return &node_ids_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
NodeEmbeddingRequest::mutable_node_ids() {
  // @@protoc_insertion_point(field_mutable_list:protoembedding.NodeEmbeddingRequest.node_ids)
  return _internal_mutable_node_ids();
}

// -------------------------------------------------------------------

// NodeEmbeddingResponse

// bytes embeddings_data = 1;
inline void NodeEmbeddingResponse::clear_embeddings_data() {
  embeddings_data_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& NodeEmbeddingResponse::embeddings_data() const {
  // @@protoc_insertion_point(field_get:protoembedding.NodeEmbeddingResponse.embeddings_data)
  return _internal_embeddings_data();
}
inline void NodeEmbeddingResponse::set_embeddings_data(const std::string& value) {
  _internal_set_embeddings_data(value);
  // @@protoc_insertion_point(field_set:protoembedding.NodeEmbeddingResponse.embeddings_data)
}
inline std::string* NodeEmbeddingResponse::mutable_embeddings_data() {
  // @@protoc_insertion_point(field_mutable:protoembedding.NodeEmbeddingResponse.embeddings_data)
  return _internal_mutable_embeddings_data();
}
inline const std::string& NodeEmbeddingResponse::_internal_embeddings_data() const {
  return embeddings_data_.Get();
}
inline void NodeEmbeddingResponse::_internal_set_embeddings_data(const std::string& value) {
  
  embeddings_data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void NodeEmbeddingResponse::set_embeddings_data(std::string&& value) {
  
  embeddings_data_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:protoembedding.NodeEmbeddingResponse.embeddings_data)
}
inline void NodeEmbeddingResponse::set_embeddings_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  embeddings_data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:protoembedding.NodeEmbeddingResponse.embeddings_data)
}
inline void NodeEmbeddingResponse::set_embeddings_data(const void* value,
    size_t size) {
  
  embeddings_data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:protoembedding.NodeEmbeddingResponse.embeddings_data)
}
inline std::string* NodeEmbeddingResponse::_internal_mutable_embeddings_data() {
  
  return embeddings_data_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* NodeEmbeddingResponse::release_embeddings_data() {
  // @@protoc_insertion_point(field_release:protoembedding.NodeEmbeddingResponse.embeddings_data)
  return embeddings_data_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void NodeEmbeddingResponse::set_allocated_embeddings_data(std::string* embeddings_data) {
  if (embeddings_data != nullptr) {
    
  } else {
    
  }
  embeddings_data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), embeddings_data,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:protoembedding.NodeEmbeddingResponse.embeddings_data)
}
inline std::string* NodeEmbeddingResponse::unsafe_arena_release_embeddings_data() {
  // @@protoc_insertion_point(field_unsafe_arena_release:protoembedding.NodeEmbeddingResponse.embeddings_data)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return embeddings_data_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void NodeEmbeddingResponse::unsafe_arena_set_allocated_embeddings_data(
    std::string* embeddings_data) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (embeddings_data != nullptr) {
    
  } else {
    
  }
  embeddings_data_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      embeddings_data, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:protoembedding.NodeEmbeddingResponse.embeddings_data)
}

// repeated int32 dimensions = 2;
inline int NodeEmbeddingResponse::_internal_dimensions_size() const {
  return dimensions_.size();
}
inline int NodeEmbeddingResponse::dimensions_size() const {
  return _internal_dimensions_size();
}
inline void NodeEmbeddingResponse::clear_dimensions() {
  dimensions_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NodeEmbeddingResponse::_internal_dimensions(int index) const {
  return dimensions_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NodeEmbeddingResponse::dimensions(int index) const {
  // @@protoc_insertion_point(field_get:protoembedding.NodeEmbeddingResponse.dimensions)
  return _internal_dimensions(index);
}
inline void NodeEmbeddingResponse::set_dimensions(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  dimensions_.Set(index, value);
  // @@protoc_insertion_point(field_set:protoembedding.NodeEmbeddingResponse.dimensions)
}
inline void NodeEmbeddingResponse::_internal_add_dimensions(::PROTOBUF_NAMESPACE_ID::int32 value) {
  dimensions_.Add(value);
}
inline void NodeEmbeddingResponse::add_dimensions(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_dimensions(value);
  // @@protoc_insertion_point(field_add:protoembedding.NodeEmbeddingResponse.dimensions)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
NodeEmbeddingResponse::_internal_dimensions() const {
  return dimensions_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
NodeEmbeddingResponse::dimensions() const {
  // @@protoc_insertion_point(field_list:protoembedding.NodeEmbeddingResponse.dimensions)
  return _internal_dimensions();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
NodeEmbeddingResponse::_internal_mutable_dimensions() {
  return &dimensions_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
NodeEmbeddingResponse::mutable_dimensions() {
  // @@protoc_insertion_point(field_mutable_list:protoembedding.NodeEmbeddingResponse.dimensions)
  return _internal_mutable_dimensions();
}

// repeated uint32 missing_ids = 3;
inline int NodeEmbeddingResponse::_internal_missing_ids_size() const {
  return missing_ids_.size();
}
inline int NodeEmbeddingResponse::missing_ids_size() const {
  return _internal_missing_ids_size();
}
inline void NodeEmbeddingResponse::clear_missing_ids() {
  missing_ids_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NodeEmbeddingResponse::_internal_missing_ids(int index) const {
  return missing_ids_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NodeEmbeddingResponse::missing_ids(int index) const {
  // @@protoc_insertion_point(field_get:protoembedding.NodeEmbeddingResponse.missing_ids)
  return _internal_missing_ids(index);
}
inline void NodeEmbeddingResponse::set_missing_ids(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  missing_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:protoembedding.NodeEmbeddingResponse.missing_ids)
}
inline void NodeEmbeddingResponse::_internal_add_missing_ids(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  missing_ids_.Add(value);
}
inline void NodeEmbeddingResponse::add_missing_ids(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_missing_ids(value);
  // @@protoc_insertion_point(field_add:protoembedding.NodeEmbeddingResponse.missing_ids)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
NodeEmbeddingResponse::_internal_missing_ids() const {
  return missing_ids_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
NodeEmbeddingResponse::missing_ids() const {
  // @@protoc_insertion_point(field_list:protoembedding.NodeEmbeddingResponse.missing_ids)
  return _internal_missing_ids();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
NodeEmbeddingResponse::_internal_mutable_missing_ids() {
  return &missing_ids_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
NodeEmbeddingResponse::mutable_missing_ids() {
  // @@protoc_insertion_point(field_mutable_list:protoembedding.NodeEmbeddingResponse.missing_ids)
  return _internal_mutable_missing_ids();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protoembedding

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_embedding_2eproto
