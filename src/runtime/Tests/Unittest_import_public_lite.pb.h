// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class PublicImportMessageLite;
@class PublicImportMessageLiteBuilder;



@interface UnittestImportPublicLiteRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define PublicImportMessageLite_e @"e"
@interface PublicImportMessageLite : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasE_:1;
  SInt32 e;
}
- (BOOL) hasE;
@property (readonly) SInt32 e;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PublicImportMessageLiteBuilder*) builder;
+ (PublicImportMessageLiteBuilder*) builder;
+ (PublicImportMessageLiteBuilder*) builderWithPrototype:(PublicImportMessageLite*) prototype;
- (PublicImportMessageLiteBuilder*) toBuilder;

+ (PublicImportMessageLite*) parseFromData:(NSData*) data;
+ (PublicImportMessageLite*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PublicImportMessageLite*) parseFromInputStream:(NSInputStream*) input;
+ (PublicImportMessageLite*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PublicImportMessageLite*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PublicImportMessageLite*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PublicImportMessageLiteBuilder : PBGeneratedMessageBuilder {
@private
  PublicImportMessageLite* resultPublicImportMessageLite;
}

- (PublicImportMessageLite*) defaultInstance;

- (PublicImportMessageLiteBuilder*) clear;
- (PublicImportMessageLiteBuilder*) clone;

- (PublicImportMessageLite*) build;
- (PublicImportMessageLite*) buildPartial;

- (PublicImportMessageLiteBuilder*) mergeFrom:(PublicImportMessageLite*) other;
- (PublicImportMessageLiteBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PublicImportMessageLiteBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasE;
- (SInt32) e;
- (PublicImportMessageLiteBuilder*) setE:(SInt32) value;
- (PublicImportMessageLiteBuilder*) clearE;
@end


// @@protoc_insertion_point(global_scope)
