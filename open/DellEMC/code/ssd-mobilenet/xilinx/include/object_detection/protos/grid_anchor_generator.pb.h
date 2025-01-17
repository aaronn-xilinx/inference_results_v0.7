// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/grid_anchor_generator.proto

#ifndef PROTOBUF_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto__INCLUDED
#define PROTOBUF_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace object_detection {
namespace protos {
class GridAnchorGenerator;
class GridAnchorGeneratorDefaultTypeInternal;
extern GridAnchorGeneratorDefaultTypeInternal _GridAnchorGenerator_default_instance_;
}  // namespace protos
}  // namespace object_detection

namespace object_detection {
namespace protos {

namespace protobuf_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto

// ===================================================================

class GridAnchorGenerator : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:object_detection.protos.GridAnchorGenerator) */ {
 public:
  GridAnchorGenerator();
  virtual ~GridAnchorGenerator();

  GridAnchorGenerator(const GridAnchorGenerator& from);

  inline GridAnchorGenerator& operator=(const GridAnchorGenerator& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GridAnchorGenerator(GridAnchorGenerator&& from) noexcept
    : GridAnchorGenerator() {
    *this = ::std::move(from);
  }

  inline GridAnchorGenerator& operator=(GridAnchorGenerator&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GridAnchorGenerator& default_instance();

  static inline const GridAnchorGenerator* internal_default_instance() {
    return reinterpret_cast<const GridAnchorGenerator*>(
               &_GridAnchorGenerator_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(GridAnchorGenerator* other);
  friend void swap(GridAnchorGenerator& a, GridAnchorGenerator& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GridAnchorGenerator* New() const PROTOBUF_FINAL { return New(NULL); }

  GridAnchorGenerator* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GridAnchorGenerator& from);
  void MergeFrom(const GridAnchorGenerator& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GridAnchorGenerator* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float scales = 7;
  int scales_size() const;
  void clear_scales();
  static const int kScalesFieldNumber = 7;
  float scales(int index) const;
  void set_scales(int index, float value);
  void add_scales(float value);
  const ::google::protobuf::RepeatedField< float >&
      scales() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_scales();

  // repeated float aspect_ratios = 8;
  int aspect_ratios_size() const;
  void clear_aspect_ratios();
  static const int kAspectRatiosFieldNumber = 8;
  float aspect_ratios(int index) const;
  void set_aspect_ratios(int index, float value);
  void add_aspect_ratios(float value);
  const ::google::protobuf::RepeatedField< float >&
      aspect_ratios() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_aspect_ratios();

  // optional int32 height_offset = 5 [default = 0];
  bool has_height_offset() const;
  void clear_height_offset();
  static const int kHeightOffsetFieldNumber = 5;
  ::google::protobuf::int32 height_offset() const;
  void set_height_offset(::google::protobuf::int32 value);

  // optional int32 width_offset = 6 [default = 0];
  bool has_width_offset() const;
  void clear_width_offset();
  static const int kWidthOffsetFieldNumber = 6;
  ::google::protobuf::int32 width_offset() const;
  void set_width_offset(::google::protobuf::int32 value);

  // optional int32 height = 1 [default = 256];
  bool has_height() const;
  void clear_height();
  static const int kHeightFieldNumber = 1;
  ::google::protobuf::int32 height() const;
  void set_height(::google::protobuf::int32 value);

  // optional int32 width = 2 [default = 256];
  bool has_width() const;
  void clear_width();
  static const int kWidthFieldNumber = 2;
  ::google::protobuf::int32 width() const;
  void set_width(::google::protobuf::int32 value);

  // optional int32 height_stride = 3 [default = 16];
  bool has_height_stride() const;
  void clear_height_stride();
  static const int kHeightStrideFieldNumber = 3;
  ::google::protobuf::int32 height_stride() const;
  void set_height_stride(::google::protobuf::int32 value);

  // optional int32 width_stride = 4 [default = 16];
  bool has_width_stride() const;
  void clear_width_stride();
  static const int kWidthStrideFieldNumber = 4;
  ::google::protobuf::int32 width_stride() const;
  void set_width_stride(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:object_detection.protos.GridAnchorGenerator)
 private:
  void set_has_height();
  void clear_has_height();
  void set_has_width();
  void clear_has_width();
  void set_has_height_stride();
  void clear_has_height_stride();
  void set_has_width_stride();
  void clear_has_width_stride();
  void set_has_height_offset();
  void clear_has_height_offset();
  void set_has_width_offset();
  void clear_has_width_offset();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< float > scales_;
  ::google::protobuf::RepeatedField< float > aspect_ratios_;
  ::google::protobuf::int32 height_offset_;
  ::google::protobuf::int32 width_offset_;
  ::google::protobuf::int32 height_;
  ::google::protobuf::int32 width_;
  ::google::protobuf::int32 height_stride_;
  ::google::protobuf::int32 width_stride_;
  friend struct protobuf_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GridAnchorGenerator

// optional int32 height = 1 [default = 256];
inline bool GridAnchorGenerator::has_height() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GridAnchorGenerator::set_has_height() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GridAnchorGenerator::clear_has_height() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GridAnchorGenerator::clear_height() {
  height_ = 256;
  clear_has_height();
}
inline ::google::protobuf::int32 GridAnchorGenerator::height() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.height)
  return height_;
}
inline void GridAnchorGenerator::set_height(::google::protobuf::int32 value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.height)
}

// optional int32 width = 2 [default = 256];
inline bool GridAnchorGenerator::has_width() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void GridAnchorGenerator::set_has_width() {
  _has_bits_[0] |= 0x00000008u;
}
inline void GridAnchorGenerator::clear_has_width() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void GridAnchorGenerator::clear_width() {
  width_ = 256;
  clear_has_width();
}
inline ::google::protobuf::int32 GridAnchorGenerator::width() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.width)
  return width_;
}
inline void GridAnchorGenerator::set_width(::google::protobuf::int32 value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.width)
}

// optional int32 height_stride = 3 [default = 16];
inline bool GridAnchorGenerator::has_height_stride() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void GridAnchorGenerator::set_has_height_stride() {
  _has_bits_[0] |= 0x00000010u;
}
inline void GridAnchorGenerator::clear_has_height_stride() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void GridAnchorGenerator::clear_height_stride() {
  height_stride_ = 16;
  clear_has_height_stride();
}
inline ::google::protobuf::int32 GridAnchorGenerator::height_stride() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.height_stride)
  return height_stride_;
}
inline void GridAnchorGenerator::set_height_stride(::google::protobuf::int32 value) {
  set_has_height_stride();
  height_stride_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.height_stride)
}

// optional int32 width_stride = 4 [default = 16];
inline bool GridAnchorGenerator::has_width_stride() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void GridAnchorGenerator::set_has_width_stride() {
  _has_bits_[0] |= 0x00000020u;
}
inline void GridAnchorGenerator::clear_has_width_stride() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void GridAnchorGenerator::clear_width_stride() {
  width_stride_ = 16;
  clear_has_width_stride();
}
inline ::google::protobuf::int32 GridAnchorGenerator::width_stride() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.width_stride)
  return width_stride_;
}
inline void GridAnchorGenerator::set_width_stride(::google::protobuf::int32 value) {
  set_has_width_stride();
  width_stride_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.width_stride)
}

// optional int32 height_offset = 5 [default = 0];
inline bool GridAnchorGenerator::has_height_offset() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GridAnchorGenerator::set_has_height_offset() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GridAnchorGenerator::clear_has_height_offset() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GridAnchorGenerator::clear_height_offset() {
  height_offset_ = 0;
  clear_has_height_offset();
}
inline ::google::protobuf::int32 GridAnchorGenerator::height_offset() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.height_offset)
  return height_offset_;
}
inline void GridAnchorGenerator::set_height_offset(::google::protobuf::int32 value) {
  set_has_height_offset();
  height_offset_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.height_offset)
}

// optional int32 width_offset = 6 [default = 0];
inline bool GridAnchorGenerator::has_width_offset() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GridAnchorGenerator::set_has_width_offset() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GridAnchorGenerator::clear_has_width_offset() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GridAnchorGenerator::clear_width_offset() {
  width_offset_ = 0;
  clear_has_width_offset();
}
inline ::google::protobuf::int32 GridAnchorGenerator::width_offset() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.width_offset)
  return width_offset_;
}
inline void GridAnchorGenerator::set_width_offset(::google::protobuf::int32 value) {
  set_has_width_offset();
  width_offset_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.width_offset)
}

// repeated float scales = 7;
inline int GridAnchorGenerator::scales_size() const {
  return scales_.size();
}
inline void GridAnchorGenerator::clear_scales() {
  scales_.Clear();
}
inline float GridAnchorGenerator::scales(int index) const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.scales)
  return scales_.Get(index);
}
inline void GridAnchorGenerator::set_scales(int index, float value) {
  scales_.Set(index, value);
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.scales)
}
inline void GridAnchorGenerator::add_scales(float value) {
  scales_.Add(value);
  // @@protoc_insertion_point(field_add:object_detection.protos.GridAnchorGenerator.scales)
}
inline const ::google::protobuf::RepeatedField< float >&
GridAnchorGenerator::scales() const {
  // @@protoc_insertion_point(field_list:object_detection.protos.GridAnchorGenerator.scales)
  return scales_;
}
inline ::google::protobuf::RepeatedField< float >*
GridAnchorGenerator::mutable_scales() {
  // @@protoc_insertion_point(field_mutable_list:object_detection.protos.GridAnchorGenerator.scales)
  return &scales_;
}

// repeated float aspect_ratios = 8;
inline int GridAnchorGenerator::aspect_ratios_size() const {
  return aspect_ratios_.size();
}
inline void GridAnchorGenerator::clear_aspect_ratios() {
  aspect_ratios_.Clear();
}
inline float GridAnchorGenerator::aspect_ratios(int index) const {
  // @@protoc_insertion_point(field_get:object_detection.protos.GridAnchorGenerator.aspect_ratios)
  return aspect_ratios_.Get(index);
}
inline void GridAnchorGenerator::set_aspect_ratios(int index, float value) {
  aspect_ratios_.Set(index, value);
  // @@protoc_insertion_point(field_set:object_detection.protos.GridAnchorGenerator.aspect_ratios)
}
inline void GridAnchorGenerator::add_aspect_ratios(float value) {
  aspect_ratios_.Add(value);
  // @@protoc_insertion_point(field_add:object_detection.protos.GridAnchorGenerator.aspect_ratios)
}
inline const ::google::protobuf::RepeatedField< float >&
GridAnchorGenerator::aspect_ratios() const {
  // @@protoc_insertion_point(field_list:object_detection.protos.GridAnchorGenerator.aspect_ratios)
  return aspect_ratios_;
}
inline ::google::protobuf::RepeatedField< float >*
GridAnchorGenerator::mutable_aspect_ratios() {
  // @@protoc_insertion_point(field_mutable_list:object_detection.protos.GridAnchorGenerator.aspect_ratios)
  return &aspect_ratios_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace protos
}  // namespace object_detection

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_object_5fdetection_2fprotos_2fgrid_5fanchor_5fgenerator_2eproto__INCLUDED
