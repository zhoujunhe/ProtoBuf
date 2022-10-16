// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GenerateRS.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

#import "GenerateRs.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - GenerateRsRoot

@implementation GenerateRsRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - GenerateRsRoot_FileDescriptor

static GPBFileDescriptor *GenerateRsRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"AppleRemoteAuth"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - RemoteDeviceInfo

@implementation RemoteDeviceInfo

@dynamic rqData;
@dynamic rqSigData;
@dynamic grappaSessionId;
@dynamic keyFairPlayGuid;
@dynamic fairPlayCertificate;
@dynamic fairDeviceType;
@dynamic privateKey;
@dynamic fairPlayGuid;

typedef struct RemoteDeviceInfo__storage_ {
  uint32_t _has_storage_[1];
  uint32_t grappaSessionId;
  uint32_t privateKey;
  NSData *rqData;
  NSData *rqSigData;
  NSData *keyFairPlayGuid;
  NSData *fairPlayCertificate;
  NSString *fairPlayGuid;
  int64_t fairDeviceType;
} RemoteDeviceInfo__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "rqData",
        .dataTypeSpecific.clazz = Nil,
        .number = RemoteDeviceInfo_FieldNumber_RqData,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RemoteDeviceInfo__storage_, rqData),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
      {
        .name = "rqSigData",
        .dataTypeSpecific.clazz = Nil,
        .number = RemoteDeviceInfo_FieldNumber_RqSigData,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(RemoteDeviceInfo__storage_, rqSigData),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
      {
        .name = "grappaSessionId",
        .dataTypeSpecific.clazz = Nil,
        .number = RemoteDeviceInfo_FieldNumber_GrappaSessionId,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(RemoteDeviceInfo__storage_, grappaSessionId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "keyFairPlayGuid",
        .dataTypeSpecific.clazz = Nil,
        .number = RemoteDeviceInfo_FieldNumber_KeyFairPlayGuid,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(RemoteDeviceInfo__storage_, keyFairPlayGuid),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
      {
        .name = "fairPlayCertificate",
        .dataTypeSpecific.clazz = Nil,
        .number = RemoteDeviceInfo_FieldNumber_FairPlayCertificate,
        .hasIndex = 4,
        .offset = (uint32_t)offsetof(RemoteDeviceInfo__storage_, fairPlayCertificate),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
      {
        .name = "fairDeviceType",
        .dataTypeSpecific.clazz = Nil,
        .number = RemoteDeviceInfo_FieldNumber_FairDeviceType,
        .hasIndex = 5,
        .offset = (uint32_t)offsetof(RemoteDeviceInfo__storage_, fairDeviceType),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "privateKey",
        .dataTypeSpecific.clazz = Nil,
        .number = RemoteDeviceInfo_FieldNumber_PrivateKey,
        .hasIndex = 6,
        .offset = (uint32_t)offsetof(RemoteDeviceInfo__storage_, privateKey),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "fairPlayGuid",
        .dataTypeSpecific.clazz = Nil,
        .number = RemoteDeviceInfo_FieldNumber_FairPlayGuid,
        .hasIndex = 7,
        .offset = (uint32_t)offsetof(RemoteDeviceInfo__storage_, fairPlayGuid),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RemoteDeviceInfo class]
                                     rootClass:[GenerateRsRoot class]
                                          file:GenerateRsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RemoteDeviceInfo__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - rsdata

@implementation rsdata

@dynamic rsData;

typedef struct rsdata__storage_ {
  uint32_t _has_storage_[1];
  NSData *rsData;
} rsdata__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "rsData",
        .dataTypeSpecific.clazz = Nil,
        .number = rsdata_FieldNumber_RsData,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(rsdata__storage_, rsData),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[rsdata class]
                                     rootClass:[GenerateRsRoot class]
                                          file:GenerateRsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(rsdata__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
