// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GenerateRS.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - GenerateRsRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface GenerateRsRoot : GPBRootObject
@end

#pragma mark - RemoteDeviceInfo

typedef GPB_ENUM(RemoteDeviceInfo_FieldNumber) {
  RemoteDeviceInfo_FieldNumber_RqData = 1,
  RemoteDeviceInfo_FieldNumber_RqSigData = 2,
  RemoteDeviceInfo_FieldNumber_GrappaSessionId = 3,
  RemoteDeviceInfo_FieldNumber_KeyFairPlayGuid = 4,
  RemoteDeviceInfo_FieldNumber_FairPlayCertificate = 5,
  RemoteDeviceInfo_FieldNumber_FairDeviceType = 6,
  RemoteDeviceInfo_FieldNumber_PrivateKey = 7,
  RemoteDeviceInfo_FieldNumber_FairPlayGuid = 8,
};

/**
 * The request message
 **/
GPB_FINAL @interface RemoteDeviceInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *rqData;

@property(nonatomic, readwrite, copy, null_resettable) NSData *rqSigData;

@property(nonatomic, readwrite) uint32_t grappaSessionId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *keyFairPlayGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSData *fairPlayCertificate;

@property(nonatomic, readwrite) int64_t fairDeviceType;

@property(nonatomic, readwrite) uint32_t privateKey;

@property(nonatomic, readwrite, copy, null_resettable) NSString *fairPlayGuid;

@end

#pragma mark - rsdata

typedef GPB_ENUM(rsdata_FieldNumber) {
  rsdata_FieldNumber_RsData = 1,
  rsdata_FieldNumber_Ret = 2,
  rsdata_FieldNumber_RsSigData = 3,
};

/**
 * The response message
 **/
GPB_FINAL @interface rsdata : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *rsData;

@property(nonatomic, readwrite) BOOL ret;

@property(nonatomic, readwrite, copy, null_resettable) NSData *rsSigData;
/** Test to see if @c rsSigData has been set. */
@property(nonatomic, readwrite) BOOL hasRsSigData;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
