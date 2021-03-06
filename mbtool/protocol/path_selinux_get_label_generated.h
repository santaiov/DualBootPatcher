// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PATHSELINUXGETLABEL_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_PATHSELINUXGETLABEL_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"


namespace mbtool {
namespace daemon {
namespace v3 {

struct PathSELinuxGetLabelRequest;
struct PathSELinuxGetLabelResponse;

struct PathSELinuxGetLabelRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_PATH = 4,
    VT_FOLLOW_SYMLINKS = 6
  };
  const flatbuffers::String *path() const { return GetPointer<const flatbuffers::String *>(VT_PATH); }
  bool follow_symlinks() const { return GetField<uint8_t>(VT_FOLLOW_SYMLINKS, 0) != 0; }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_PATH) &&
           verifier.Verify(path()) &&
           VerifyField<uint8_t>(verifier, VT_FOLLOW_SYMLINKS) &&
           verifier.EndTable();
  }
};

struct PathSELinuxGetLabelRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_path(flatbuffers::Offset<flatbuffers::String> path) { fbb_.AddOffset(PathSELinuxGetLabelRequest::VT_PATH, path); }
  void add_follow_symlinks(bool follow_symlinks) { fbb_.AddElement<uint8_t>(PathSELinuxGetLabelRequest::VT_FOLLOW_SYMLINKS, static_cast<uint8_t>(follow_symlinks), 0); }
  PathSELinuxGetLabelRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathSELinuxGetLabelRequestBuilder &operator=(const PathSELinuxGetLabelRequestBuilder &);
  flatbuffers::Offset<PathSELinuxGetLabelRequest> Finish() {
    auto o = flatbuffers::Offset<PathSELinuxGetLabelRequest>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<PathSELinuxGetLabelRequest> CreatePathSELinuxGetLabelRequest(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> path = 0,
   bool follow_symlinks = false) {
  PathSELinuxGetLabelRequestBuilder builder_(_fbb);
  builder_.add_path(path);
  builder_.add_follow_symlinks(follow_symlinks);
  return builder_.Finish();
}

struct PathSELinuxGetLabelResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4,
    VT_ERROR_MSG = 6,
    VT_LABEL = 8
  };
  bool success() const { return GetField<uint8_t>(VT_SUCCESS, 0) != 0; }
  const flatbuffers::String *error_msg() const { return GetPointer<const flatbuffers::String *>(VT_ERROR_MSG); }
  const flatbuffers::String *label() const { return GetPointer<const flatbuffers::String *>(VT_LABEL); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR_MSG) &&
           verifier.Verify(error_msg()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_LABEL) &&
           verifier.Verify(label()) &&
           verifier.EndTable();
  }
};

struct PathSELinuxGetLabelResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) { fbb_.AddElement<uint8_t>(PathSELinuxGetLabelResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0); }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) { fbb_.AddOffset(PathSELinuxGetLabelResponse::VT_ERROR_MSG, error_msg); }
  void add_label(flatbuffers::Offset<flatbuffers::String> label) { fbb_.AddOffset(PathSELinuxGetLabelResponse::VT_LABEL, label); }
  PathSELinuxGetLabelResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathSELinuxGetLabelResponseBuilder &operator=(const PathSELinuxGetLabelResponseBuilder &);
  flatbuffers::Offset<PathSELinuxGetLabelResponse> Finish() {
    auto o = flatbuffers::Offset<PathSELinuxGetLabelResponse>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<PathSELinuxGetLabelResponse> CreatePathSELinuxGetLabelResponse(flatbuffers::FlatBufferBuilder &_fbb,
   bool success = false,
   flatbuffers::Offset<flatbuffers::String> error_msg = 0,
   flatbuffers::Offset<flatbuffers::String> label = 0) {
  PathSELinuxGetLabelResponseBuilder builder_(_fbb);
  builder_.add_label(label);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_PATHSELINUXGETLABEL_MBTOOL_DAEMON_V3_H_
