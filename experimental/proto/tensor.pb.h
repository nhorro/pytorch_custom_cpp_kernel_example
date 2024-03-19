// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensor_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020003 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_tensor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensor_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensor_2eproto;
class TensorMessage;
struct TensorMessageDefaultTypeInternal;
extern TensorMessageDefaultTypeInternal _TensorMessage_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::TensorMessage* Arena::CreateMaybeMessage<::TensorMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class TensorMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TensorMessage) */ {
 public:
  inline TensorMessage() : TensorMessage(nullptr) {}
  ~TensorMessage() override;
  explicit PROTOBUF_CONSTEXPR TensorMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TensorMessage(const TensorMessage& from);
  TensorMessage(TensorMessage&& from) noexcept
    : TensorMessage() {
    *this = ::std::move(from);
  }

  inline TensorMessage& operator=(const TensorMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline TensorMessage& operator=(TensorMessage&& from) noexcept {
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
  static const TensorMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const TensorMessage* internal_default_instance() {
    return reinterpret_cast<const TensorMessage*>(
               &_TensorMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TensorMessage& a, TensorMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(TensorMessage* other) {
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
  void UnsafeArenaSwap(TensorMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TensorMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TensorMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TensorMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const TensorMessage& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TensorMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TensorMessage";
  }
  protected:
  explicit TensorMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 1,
    kSizeFieldNumber = 2,
    kDtypeFieldNumber = 3,
  };
  // repeated float data = 1;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  private:
  float _internal_data(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_data() const;
  void _internal_add_data(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_data();
  public:
  float data(int index) const;
  void set_data(int index, float value);
  void add_data(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      data() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_data();

  // repeated int32 size = 2;
  int size_size() const;
  private:
  int _internal_size_size() const;
  public:
  void clear_size();
  private:
  int32_t _internal_size(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      _internal_size() const;
  void _internal_add_size(int32_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      _internal_mutable_size();
  public:
  int32_t size(int index) const;
  void set_size(int index, int32_t value);
  void add_size(int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      size() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      mutable_size();

  // string dtype = 3;
  void clear_dtype();
  const std::string& dtype() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_dtype(ArgT0&& arg0, ArgT... args);
  std::string* mutable_dtype();
  PROTOBUF_NODISCARD std::string* release_dtype();
  void set_allocated_dtype(std::string* dtype);
  private:
  const std::string& _internal_dtype() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_dtype(const std::string& value);
  std::string* _internal_mutable_dtype();
  public:

  // @@protoc_insertion_point(class_scope:TensorMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > data_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t > size_;
  mutable std::atomic<int> _size_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr dtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TensorMessage

// repeated float data = 1;
inline int TensorMessage::_internal_data_size() const {
  return data_.size();
}
inline int TensorMessage::data_size() const {
  return _internal_data_size();
}
inline void TensorMessage::clear_data() {
  data_.Clear();
}
inline float TensorMessage::_internal_data(int index) const {
  return data_.Get(index);
}
inline float TensorMessage::data(int index) const {
  // @@protoc_insertion_point(field_get:TensorMessage.data)
  return _internal_data(index);
}
inline void TensorMessage::set_data(int index, float value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:TensorMessage.data)
}
inline void TensorMessage::_internal_add_data(float value) {
  data_.Add(value);
}
inline void TensorMessage::add_data(float value) {
  _internal_add_data(value);
  // @@protoc_insertion_point(field_add:TensorMessage.data)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
TensorMessage::_internal_data() const {
  return data_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
TensorMessage::data() const {
  // @@protoc_insertion_point(field_list:TensorMessage.data)
  return _internal_data();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
TensorMessage::_internal_mutable_data() {
  return &data_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
TensorMessage::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:TensorMessage.data)
  return _internal_mutable_data();
}

// repeated int32 size = 2;
inline int TensorMessage::_internal_size_size() const {
  return size_.size();
}
inline int TensorMessage::size_size() const {
  return _internal_size_size();
}
inline void TensorMessage::clear_size() {
  size_.Clear();
}
inline int32_t TensorMessage::_internal_size(int index) const {
  return size_.Get(index);
}
inline int32_t TensorMessage::size(int index) const {
  // @@protoc_insertion_point(field_get:TensorMessage.size)
  return _internal_size(index);
}
inline void TensorMessage::set_size(int index, int32_t value) {
  size_.Set(index, value);
  // @@protoc_insertion_point(field_set:TensorMessage.size)
}
inline void TensorMessage::_internal_add_size(int32_t value) {
  size_.Add(value);
}
inline void TensorMessage::add_size(int32_t value) {
  _internal_add_size(value);
  // @@protoc_insertion_point(field_add:TensorMessage.size)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
TensorMessage::_internal_size() const {
  return size_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
TensorMessage::size() const {
  // @@protoc_insertion_point(field_list:TensorMessage.size)
  return _internal_size();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
TensorMessage::_internal_mutable_size() {
  return &size_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
TensorMessage::mutable_size() {
  // @@protoc_insertion_point(field_mutable_list:TensorMessage.size)
  return _internal_mutable_size();
}

// string dtype = 3;
inline void TensorMessage::clear_dtype() {
  dtype_.ClearToEmpty();
}
inline const std::string& TensorMessage::dtype() const {
  // @@protoc_insertion_point(field_get:TensorMessage.dtype)
  return _internal_dtype();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TensorMessage::set_dtype(ArgT0&& arg0, ArgT... args) {
 
 dtype_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:TensorMessage.dtype)
}
inline std::string* TensorMessage::mutable_dtype() {
  std::string* _s = _internal_mutable_dtype();
  // @@protoc_insertion_point(field_mutable:TensorMessage.dtype)
  return _s;
}
inline const std::string& TensorMessage::_internal_dtype() const {
  return dtype_.Get();
}
inline void TensorMessage::_internal_set_dtype(const std::string& value) {
  
  dtype_.Set(value, GetArenaForAllocation());
}
inline std::string* TensorMessage::_internal_mutable_dtype() {
  
  return dtype_.Mutable(GetArenaForAllocation());
}
inline std::string* TensorMessage::release_dtype() {
  // @@protoc_insertion_point(field_release:TensorMessage.dtype)
  return dtype_.Release();
}
inline void TensorMessage::set_allocated_dtype(std::string* dtype) {
  if (dtype != nullptr) {
    
  } else {
    
  }
  dtype_.SetAllocated(dtype, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (dtype_.IsDefault()) {
    dtype_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:TensorMessage.dtype)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensor_2eproto