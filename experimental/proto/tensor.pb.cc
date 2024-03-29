// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensor.proto

#include "tensor.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR TensorMessage::TensorMessage(
    ::_pbi::ConstantInitialized)
  : data_()
  , size_()
  , _size_cached_byte_size_(0)
  , dtype_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct TensorMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TensorMessageDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TensorMessageDefaultTypeInternal() {}
  union {
    TensorMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TensorMessageDefaultTypeInternal _TensorMessage_default_instance_;
static ::_pb::Metadata file_level_metadata_tensor_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_tensor_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tensor_2eproto = nullptr;

const uint32_t TableStruct_tensor_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TensorMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::TensorMessage, data_),
  PROTOBUF_FIELD_OFFSET(::TensorMessage, size_),
  PROTOBUF_FIELD_OFFSET(::TensorMessage, dtype_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::TensorMessage)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_TensorMessage_default_instance_._instance,
};

const char descriptor_table_protodef_tensor_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014tensor.proto\":\n\rTensorMessage\022\014\n\004data\030"
  "\001 \003(\002\022\014\n\004size\030\002 \003(\005\022\r\n\005dtype\030\003 \001(\tb\006prot"
  "o3"
  ;
static ::_pbi::once_flag descriptor_table_tensor_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tensor_2eproto = {
    false, false, 82, descriptor_table_protodef_tensor_2eproto,
    "tensor.proto",
    &descriptor_table_tensor_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_tensor_2eproto::offsets,
    file_level_metadata_tensor_2eproto, file_level_enum_descriptors_tensor_2eproto,
    file_level_service_descriptors_tensor_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tensor_2eproto_getter() {
  return &descriptor_table_tensor_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tensor_2eproto(&descriptor_table_tensor_2eproto);

// ===================================================================

class TensorMessage::_Internal {
 public:
};

TensorMessage::TensorMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  data_(arena),
  size_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:TensorMessage)
}
TensorMessage::TensorMessage(const TensorMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      data_(from.data_),
      size_(from.size_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  dtype_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    dtype_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_dtype().empty()) {
    dtype_.Set(from._internal_dtype(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:TensorMessage)
}

inline void TensorMessage::SharedCtor() {
dtype_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  dtype_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TensorMessage::~TensorMessage() {
  // @@protoc_insertion_point(destructor:TensorMessage)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TensorMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  dtype_.Destroy();
}

void TensorMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TensorMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:TensorMessage)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  size_.Clear();
  dtype_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TensorMessage::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated float data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_data(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 13) {
          _internal_add_data(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 size = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_size(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 16) {
          _internal_add_size(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string dtype = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_dtype();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "TensorMessage.dtype"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* TensorMessage::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TensorMessage)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated float data = 1;
  if (this->_internal_data_size() > 0) {
    target = stream->WriteFixedPacked(1, _internal_data(), target);
  }

  // repeated int32 size = 2;
  {
    int byte_size = _size_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          2, _internal_size(), byte_size, target);
    }
  }

  // string dtype = 3;
  if (!this->_internal_dtype().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_dtype().data(), static_cast<int>(this->_internal_dtype().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TensorMessage.dtype");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_dtype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TensorMessage)
  return target;
}

size_t TensorMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TensorMessage)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float data = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_data_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    total_size += data_size;
  }

  // repeated int32 size = 2;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->size_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _size_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string dtype = 3;
  if (!this->_internal_dtype().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_dtype());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TensorMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    TensorMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TensorMessage::GetClassData() const { return &_class_data_; }

void TensorMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<TensorMessage *>(to)->MergeFrom(
      static_cast<const TensorMessage &>(from));
}


void TensorMessage::MergeFrom(const TensorMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TensorMessage)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  size_.MergeFrom(from.size_);
  if (!from._internal_dtype().empty()) {
    _internal_set_dtype(from._internal_dtype());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TensorMessage::CopyFrom(const TensorMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TensorMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TensorMessage::IsInitialized() const {
  return true;
}

void TensorMessage::InternalSwap(TensorMessage* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  data_.InternalSwap(&other->data_);
  size_.InternalSwap(&other->size_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &dtype_, lhs_arena,
      &other->dtype_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata TensorMessage::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tensor_2eproto_getter, &descriptor_table_tensor_2eproto_once,
      file_level_metadata_tensor_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TensorMessage*
Arena::CreateMaybeMessage< ::TensorMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TensorMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
