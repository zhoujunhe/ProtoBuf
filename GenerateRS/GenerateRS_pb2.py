# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: GenerateRS.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x10GenerateRS.proto\x12\x0f\x41ppleRemoteAuth\"\xd5\x01\n\x10RemoteDeviceInfo\x12\x0f\n\x07rq_data\x18\x01 \x01(\x0c\x12\x13\n\x0brq_sig_data\x18\x02 \x01(\x0c\x12\x19\n\x11grappa_session_id\x18\x03 \x01(\r\x12\x1a\n\x12key_fair_play_guid\x18\x04 \x01(\x0c\x12\x1d\n\x15\x66\x61ir_play_certificate\x18\x05 \x01(\x0c\x12\x18\n\x10\x66\x61ir_device_type\x18\x06 \x01(\x03\x12\x13\n\x0bprivate_key\x18\x07 \x01(\r\x12\x16\n\x0e\x66\x61ir_play_guid\x18\x08 \x01(\t\"\x19\n\x06rsdata\x12\x0f\n\x07rs_data\x18\x01 \x01(\x0c\x32Q\n\x03\x61id\x12J\n\nGenerateRS\x12!.AppleRemoteAuth.RemoteDeviceInfo\x1a\x17.AppleRemoteAuth.rsdata\"\x00\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'GenerateRS_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _REMOTEDEVICEINFO._serialized_start=38
  _REMOTEDEVICEINFO._serialized_end=251
  _RSDATA._serialized_start=253
  _RSDATA._serialized_end=278
  _AID._serialized_start=280
  _AID._serialized_end=361
# @@protoc_insertion_point(module_scope)
