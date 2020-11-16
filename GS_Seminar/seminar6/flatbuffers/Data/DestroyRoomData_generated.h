// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_DESTROYROOMDATA_DATA_H_
#define FLATBUFFERS_GENERATED_DESTROYROOMDATA_DATA_H_

#include "../flatbuffers/flatbuffers.h"

#include "ForwardUserData_generated.h"
#include "RoomData_generated.h"
#include "UserData_generated.h"

namespace Data {

struct DestroyRoomData;

struct DestroyRoomData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ROOM = 4,
    VT_USERS = 6
  };
  const Data::RoomData *room() const { return GetPointer<const Data::RoomData *>(VT_ROOM); }
  const flatbuffers::Vector<flatbuffers::Offset<Data::ForwardUserData>> *users() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Data::ForwardUserData>> *>(VT_USERS); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ROOM) &&
           verifier.VerifyTable(room()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_USERS) &&
           verifier.Verify(users()) &&
           verifier.VerifyVectorOfTables(users()) &&
           verifier.EndTable();
  }
};

struct DestroyRoomDataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_room(flatbuffers::Offset<Data::RoomData> room) { fbb_.AddOffset(DestroyRoomData::VT_ROOM, room); }
  void add_users(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Data::ForwardUserData>>> users) { fbb_.AddOffset(DestroyRoomData::VT_USERS, users); }
  DestroyRoomDataBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  DestroyRoomDataBuilder &operator=(const DestroyRoomDataBuilder &);
  flatbuffers::Offset<DestroyRoomData> Finish() {
    auto o = flatbuffers::Offset<DestroyRoomData>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<DestroyRoomData> CreateDestroyRoomData(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Data::RoomData> room = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Data::ForwardUserData>>> users = 0) {
  DestroyRoomDataBuilder builder_(_fbb);
  builder_.add_users(users);
  builder_.add_room(room);
  return builder_.Finish();
}

inline flatbuffers::Offset<DestroyRoomData> CreateDestroyRoomDataDirect(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Data::RoomData> room = 0,
    const std::vector<flatbuffers::Offset<Data::ForwardUserData>> *users = nullptr) {
  return CreateDestroyRoomData(_fbb, room, users ? _fbb.CreateVector<flatbuffers::Offset<Data::ForwardUserData>>(*users) : 0);
}

inline const Data::DestroyRoomData *GetDestroyRoomData(const void *buf) { return flatbuffers::GetRoot<Data::DestroyRoomData>(buf); }

inline bool VerifyDestroyRoomDataBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<Data::DestroyRoomData>(nullptr); }

inline void FinishDestroyRoomDataBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<Data::DestroyRoomData> root) { fbb.Finish(root); }

}  // namespace Data

#endif  // FLATBUFFERS_GENERATED_DESTROYROOMDATA_DATA_H_