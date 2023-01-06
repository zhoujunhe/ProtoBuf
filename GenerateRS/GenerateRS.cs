// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: GenerateRS.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace AppleRemoteAuth {

  /// <summary>Holder for reflection information generated from GenerateRS.proto</summary>
  public static partial class GenerateRSReflection {

    #region Descriptor
    /// <summary>File descriptor for GenerateRS.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static GenerateRSReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChBHZW5lcmF0ZVJTLnByb3RvEg9BcHBsZVJlbW90ZUF1dGgi1QEKEFJlbW90",
            "ZURldmljZUluZm8SDwoHcnFfZGF0YRgBIAEoDBITCgtycV9zaWdfZGF0YRgC",
            "IAEoDBIZChFncmFwcGFfc2Vzc2lvbl9pZBgDIAEoDRIaChJrZXlfZmFpcl9w",
            "bGF5X2d1aWQYBCABKAwSHQoVZmFpcl9wbGF5X2NlcnRpZmljYXRlGAUgASgM",
            "EhgKEGZhaXJfZGV2aWNlX3R5cGUYBiABKAMSEwoLcHJpdmF0ZV9rZXkYByAB",
            "KA0SFgoOZmFpcl9wbGF5X2d1aWQYCCABKAkiUAoGcnNkYXRhEg8KB3JzX2Rh",
            "dGEYASABKAwSCwoDcmV0GAIgASgIEhgKC3JzX3NpZ19kYXRhGAMgASgMSACI",
            "AQFCDgoMX3JzX3NpZ19kYXRhMlEKA2FpZBJKCgpHZW5lcmF0ZVJTEiEuQXBw",
            "bGVSZW1vdGVBdXRoLlJlbW90ZURldmljZUluZm8aFy5BcHBsZVJlbW90ZUF1",
            "dGgucnNkYXRhIgBiBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::AppleRemoteAuth.RemoteDeviceInfo), global::AppleRemoteAuth.RemoteDeviceInfo.Parser, new[]{ "RqData", "RqSigData", "GrappaSessionId", "KeyFairPlayGuid", "FairPlayCertificate", "FairDeviceType", "PrivateKey", "FairPlayGuid" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::AppleRemoteAuth.rsdata), global::AppleRemoteAuth.rsdata.Parser, new[]{ "RsData", "Ret", "RsSigData" }, new[]{ "RsSigData" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  /// The request message 
  /// </summary>
  public sealed partial class RemoteDeviceInfo : pb::IMessage<RemoteDeviceInfo>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<RemoteDeviceInfo> _parser = new pb::MessageParser<RemoteDeviceInfo>(() => new RemoteDeviceInfo());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<RemoteDeviceInfo> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::AppleRemoteAuth.GenerateRSReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public RemoteDeviceInfo() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public RemoteDeviceInfo(RemoteDeviceInfo other) : this() {
      rqData_ = other.rqData_;
      rqSigData_ = other.rqSigData_;
      grappaSessionId_ = other.grappaSessionId_;
      keyFairPlayGuid_ = other.keyFairPlayGuid_;
      fairPlayCertificate_ = other.fairPlayCertificate_;
      fairDeviceType_ = other.fairDeviceType_;
      privateKey_ = other.privateKey_;
      fairPlayGuid_ = other.fairPlayGuid_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public RemoteDeviceInfo Clone() {
      return new RemoteDeviceInfo(this);
    }

    /// <summary>Field number for the "rq_data" field.</summary>
    public const int RqDataFieldNumber = 1;
    private pb::ByteString rqData_ = pb::ByteString.Empty;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pb::ByteString RqData {
      get { return rqData_; }
      set {
        rqData_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "rq_sig_data" field.</summary>
    public const int RqSigDataFieldNumber = 2;
    private pb::ByteString rqSigData_ = pb::ByteString.Empty;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pb::ByteString RqSigData {
      get { return rqSigData_; }
      set {
        rqSigData_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "grappa_session_id" field.</summary>
    public const int GrappaSessionIdFieldNumber = 3;
    private uint grappaSessionId_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public uint GrappaSessionId {
      get { return grappaSessionId_; }
      set {
        grappaSessionId_ = value;
      }
    }

    /// <summary>Field number for the "key_fair_play_guid" field.</summary>
    public const int KeyFairPlayGuidFieldNumber = 4;
    private pb::ByteString keyFairPlayGuid_ = pb::ByteString.Empty;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pb::ByteString KeyFairPlayGuid {
      get { return keyFairPlayGuid_; }
      set {
        keyFairPlayGuid_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "fair_play_certificate" field.</summary>
    public const int FairPlayCertificateFieldNumber = 5;
    private pb::ByteString fairPlayCertificate_ = pb::ByteString.Empty;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pb::ByteString FairPlayCertificate {
      get { return fairPlayCertificate_; }
      set {
        fairPlayCertificate_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "fair_device_type" field.</summary>
    public const int FairDeviceTypeFieldNumber = 6;
    private long fairDeviceType_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public long FairDeviceType {
      get { return fairDeviceType_; }
      set {
        fairDeviceType_ = value;
      }
    }

    /// <summary>Field number for the "private_key" field.</summary>
    public const int PrivateKeyFieldNumber = 7;
    private uint privateKey_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public uint PrivateKey {
      get { return privateKey_; }
      set {
        privateKey_ = value;
      }
    }

    /// <summary>Field number for the "fair_play_guid" field.</summary>
    public const int FairPlayGuidFieldNumber = 8;
    private string fairPlayGuid_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string FairPlayGuid {
      get { return fairPlayGuid_; }
      set {
        fairPlayGuid_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as RemoteDeviceInfo);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(RemoteDeviceInfo other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (RqData != other.RqData) return false;
      if (RqSigData != other.RqSigData) return false;
      if (GrappaSessionId != other.GrappaSessionId) return false;
      if (KeyFairPlayGuid != other.KeyFairPlayGuid) return false;
      if (FairPlayCertificate != other.FairPlayCertificate) return false;
      if (FairDeviceType != other.FairDeviceType) return false;
      if (PrivateKey != other.PrivateKey) return false;
      if (FairPlayGuid != other.FairPlayGuid) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (RqData.Length != 0) hash ^= RqData.GetHashCode();
      if (RqSigData.Length != 0) hash ^= RqSigData.GetHashCode();
      if (GrappaSessionId != 0) hash ^= GrappaSessionId.GetHashCode();
      if (KeyFairPlayGuid.Length != 0) hash ^= KeyFairPlayGuid.GetHashCode();
      if (FairPlayCertificate.Length != 0) hash ^= FairPlayCertificate.GetHashCode();
      if (FairDeviceType != 0L) hash ^= FairDeviceType.GetHashCode();
      if (PrivateKey != 0) hash ^= PrivateKey.GetHashCode();
      if (FairPlayGuid.Length != 0) hash ^= FairPlayGuid.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      if (RqData.Length != 0) {
        output.WriteRawTag(10);
        output.WriteBytes(RqData);
      }
      if (RqSigData.Length != 0) {
        output.WriteRawTag(18);
        output.WriteBytes(RqSigData);
      }
      if (GrappaSessionId != 0) {
        output.WriteRawTag(24);
        output.WriteUInt32(GrappaSessionId);
      }
      if (KeyFairPlayGuid.Length != 0) {
        output.WriteRawTag(34);
        output.WriteBytes(KeyFairPlayGuid);
      }
      if (FairPlayCertificate.Length != 0) {
        output.WriteRawTag(42);
        output.WriteBytes(FairPlayCertificate);
      }
      if (FairDeviceType != 0L) {
        output.WriteRawTag(48);
        output.WriteInt64(FairDeviceType);
      }
      if (PrivateKey != 0) {
        output.WriteRawTag(56);
        output.WriteUInt32(PrivateKey);
      }
      if (FairPlayGuid.Length != 0) {
        output.WriteRawTag(66);
        output.WriteString(FairPlayGuid);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (RqData.Length != 0) {
        output.WriteRawTag(10);
        output.WriteBytes(RqData);
      }
      if (RqSigData.Length != 0) {
        output.WriteRawTag(18);
        output.WriteBytes(RqSigData);
      }
      if (GrappaSessionId != 0) {
        output.WriteRawTag(24);
        output.WriteUInt32(GrappaSessionId);
      }
      if (KeyFairPlayGuid.Length != 0) {
        output.WriteRawTag(34);
        output.WriteBytes(KeyFairPlayGuid);
      }
      if (FairPlayCertificate.Length != 0) {
        output.WriteRawTag(42);
        output.WriteBytes(FairPlayCertificate);
      }
      if (FairDeviceType != 0L) {
        output.WriteRawTag(48);
        output.WriteInt64(FairDeviceType);
      }
      if (PrivateKey != 0) {
        output.WriteRawTag(56);
        output.WriteUInt32(PrivateKey);
      }
      if (FairPlayGuid.Length != 0) {
        output.WriteRawTag(66);
        output.WriteString(FairPlayGuid);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      if (RqData.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeBytesSize(RqData);
      }
      if (RqSigData.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeBytesSize(RqSigData);
      }
      if (GrappaSessionId != 0) {
        size += 1 + pb::CodedOutputStream.ComputeUInt32Size(GrappaSessionId);
      }
      if (KeyFairPlayGuid.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeBytesSize(KeyFairPlayGuid);
      }
      if (FairPlayCertificate.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeBytesSize(FairPlayCertificate);
      }
      if (FairDeviceType != 0L) {
        size += 1 + pb::CodedOutputStream.ComputeInt64Size(FairDeviceType);
      }
      if (PrivateKey != 0) {
        size += 1 + pb::CodedOutputStream.ComputeUInt32Size(PrivateKey);
      }
      if (FairPlayGuid.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(FairPlayGuid);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(RemoteDeviceInfo other) {
      if (other == null) {
        return;
      }
      if (other.RqData.Length != 0) {
        RqData = other.RqData;
      }
      if (other.RqSigData.Length != 0) {
        RqSigData = other.RqSigData;
      }
      if (other.GrappaSessionId != 0) {
        GrappaSessionId = other.GrappaSessionId;
      }
      if (other.KeyFairPlayGuid.Length != 0) {
        KeyFairPlayGuid = other.KeyFairPlayGuid;
      }
      if (other.FairPlayCertificate.Length != 0) {
        FairPlayCertificate = other.FairPlayCertificate;
      }
      if (other.FairDeviceType != 0L) {
        FairDeviceType = other.FairDeviceType;
      }
      if (other.PrivateKey != 0) {
        PrivateKey = other.PrivateKey;
      }
      if (other.FairPlayGuid.Length != 0) {
        FairPlayGuid = other.FairPlayGuid;
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            RqData = input.ReadBytes();
            break;
          }
          case 18: {
            RqSigData = input.ReadBytes();
            break;
          }
          case 24: {
            GrappaSessionId = input.ReadUInt32();
            break;
          }
          case 34: {
            KeyFairPlayGuid = input.ReadBytes();
            break;
          }
          case 42: {
            FairPlayCertificate = input.ReadBytes();
            break;
          }
          case 48: {
            FairDeviceType = input.ReadInt64();
            break;
          }
          case 56: {
            PrivateKey = input.ReadUInt32();
            break;
          }
          case 66: {
            FairPlayGuid = input.ReadString();
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            RqData = input.ReadBytes();
            break;
          }
          case 18: {
            RqSigData = input.ReadBytes();
            break;
          }
          case 24: {
            GrappaSessionId = input.ReadUInt32();
            break;
          }
          case 34: {
            KeyFairPlayGuid = input.ReadBytes();
            break;
          }
          case 42: {
            FairPlayCertificate = input.ReadBytes();
            break;
          }
          case 48: {
            FairDeviceType = input.ReadInt64();
            break;
          }
          case 56: {
            PrivateKey = input.ReadUInt32();
            break;
          }
          case 66: {
            FairPlayGuid = input.ReadString();
            break;
          }
        }
      }
    }
    #endif

  }

  /// <summary>
  /// The response message 
  /// </summary>
  public sealed partial class rsdata : pb::IMessage<rsdata>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<rsdata> _parser = new pb::MessageParser<rsdata>(() => new rsdata());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<rsdata> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::AppleRemoteAuth.GenerateRSReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public rsdata() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public rsdata(rsdata other) : this() {
      rsData_ = other.rsData_;
      ret_ = other.ret_;
      rsSigData_ = other.rsSigData_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public rsdata Clone() {
      return new rsdata(this);
    }

    /// <summary>Field number for the "rs_data" field.</summary>
    public const int RsDataFieldNumber = 1;
    private pb::ByteString rsData_ = pb::ByteString.Empty;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pb::ByteString RsData {
      get { return rsData_; }
      set {
        rsData_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "ret" field.</summary>
    public const int RetFieldNumber = 2;
    private bool ret_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Ret {
      get { return ret_; }
      set {
        ret_ = value;
      }
    }

    /// <summary>Field number for the "rs_sig_data" field.</summary>
    public const int RsSigDataFieldNumber = 3;
    private pb::ByteString rsSigData_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pb::ByteString RsSigData {
      get { return rsSigData_ ?? pb::ByteString.Empty; }
      set {
        rsSigData_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }
    /// <summary>Gets whether the "rs_sig_data" field is set</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool HasRsSigData {
      get { return rsSigData_ != null; }
    }
    /// <summary>Clears the value of the "rs_sig_data" field</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void ClearRsSigData() {
      rsSigData_ = null;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as rsdata);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(rsdata other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (RsData != other.RsData) return false;
      if (Ret != other.Ret) return false;
      if (RsSigData != other.RsSigData) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (RsData.Length != 0) hash ^= RsData.GetHashCode();
      if (Ret != false) hash ^= Ret.GetHashCode();
      if (HasRsSigData) hash ^= RsSigData.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      if (RsData.Length != 0) {
        output.WriteRawTag(10);
        output.WriteBytes(RsData);
      }
      if (Ret != false) {
        output.WriteRawTag(16);
        output.WriteBool(Ret);
      }
      if (HasRsSigData) {
        output.WriteRawTag(26);
        output.WriteBytes(RsSigData);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (RsData.Length != 0) {
        output.WriteRawTag(10);
        output.WriteBytes(RsData);
      }
      if (Ret != false) {
        output.WriteRawTag(16);
        output.WriteBool(Ret);
      }
      if (HasRsSigData) {
        output.WriteRawTag(26);
        output.WriteBytes(RsSigData);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      if (RsData.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeBytesSize(RsData);
      }
      if (Ret != false) {
        size += 1 + 1;
      }
      if (HasRsSigData) {
        size += 1 + pb::CodedOutputStream.ComputeBytesSize(RsSigData);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(rsdata other) {
      if (other == null) {
        return;
      }
      if (other.RsData.Length != 0) {
        RsData = other.RsData;
      }
      if (other.Ret != false) {
        Ret = other.Ret;
      }
      if (other.HasRsSigData) {
        RsSigData = other.RsSigData;
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            RsData = input.ReadBytes();
            break;
          }
          case 16: {
            Ret = input.ReadBool();
            break;
          }
          case 26: {
            RsSigData = input.ReadBytes();
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            RsData = input.ReadBytes();
            break;
          }
          case 16: {
            Ret = input.ReadBool();
            break;
          }
          case 26: {
            RsSigData = input.ReadBytes();
            break;
          }
        }
      }
    }
    #endif

  }

  #endregion

}

#endregion Designer generated code
