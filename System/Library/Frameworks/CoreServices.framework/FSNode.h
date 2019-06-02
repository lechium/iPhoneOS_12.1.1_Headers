/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface FSNode : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _url;
	unsigned long long _cacheExpiration;
	unsigned _isDirectory : 2;
	unsigned _hasReferringAliasNode : 1;
	unsigned _canUseFileCache : 1;
	unsigned _isInitialized : 1;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,copy) FSNode * referringAliasNode; 
@property (getter=isDirectory,nonatomic,readonly) BOOL directory; 
@property (getter=isBusyDirectory,nonatomic,readonly) BOOL busyDirectory; 
@property (getter=isExecutable,nonatomic,readonly) BOOL executable; 
@property (getter=isResolvable,nonatomic,readonly) BOOL resolvable; 
@property (getter=isSymbolicLink,nonatomic,readonly) BOOL symbolicLink; 
@property (getter=isAliasFile,nonatomic,readonly) BOOL aliasFile; 
@property (nonatomic,readonly) BOOL hasPackageBit; 
@property (getter=isRegularFile,nonatomic,readonly) BOOL regularFile; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) BOOL hasHiddenExtension; 
@property (getter=isVolume,readonly) BOOL volume; 
@property (getter=isMountTrigger,readonly) BOOL mountTrigger; 
@property (getter=isOnDiskImage,readonly) BOOL onDiskImage; 
@property (getter=isOnLocalVolume,readonly) BOOL onLocalVolume; 
+(id)rootVolumeNode;
+(id)_resolvedURLFromAliasFile:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
+(id)_resolvedNodeFromAliasFile:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
+(BOOL)canReadURL:(id)arg1 fromSandboxWithAuditToken:(const SCD_Struct_LS6*)arg2 ;
+(BOOL)canWriteURL:(id)arg1 fromSandboxWithAuditToken:(const SCD_Struct_LS6*)arg2 ;
+(BOOL)canReadMetadataOfURL:(id)arg1 fromSandboxWithAuditToken:(const SCD_Struct_LS6*)arg2 ;
+(BOOL)canAccessURL:(id)arg1 fromSandboxWithAuditToken:(const SCD_Struct_LS6*)arg2 operation:(const char*)arg3 ;
+(unsigned)compareBookmarkData:(id)arg1 toBookmarkData:(id)arg2 ;
+(BOOL)getFileSystemRepresentation:(char)arg1 forBookmarkData:(id)arg2 ;
+(id)pathForBookmarkData:(id)arg1 error:(id*)arg2 ;
+(id)nameForBookmarkData:(id)arg1 error:(id*)arg2 ;
+(BOOL)getVolumeIdentifier:(unsigned long long*)arg1 forBookmarkData:(id)arg2 error:(id*)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isDirectory;
-(BOOL)isSymbolicLink;
-(BOOL)isExecutable;
-(BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)getTemporaryResourceValue:(id*)arg1 forKey:(id)arg2 ;
-(id)initWithURL:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)resolvedNodeWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)getFileIdentifier:(unsigned long long*)arg1 error:(id*)arg2 ;
-(void)setReferringAliasNode:(FSNode *)arg1 ;
-(BOOL)getFileSystemRepresentation:(char)arg1 error:(id*)arg2 ;
-(FSNode *)referringAliasNode;
-(id)initWithFileSystemRepresentation:(const char*)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 lastPathComponent:(id)arg3 createIntermediateDirectories:(BOOL)arg4 flags:(unsigned)arg5 error:(id*)arg6 ;
-(id)initWithConfigurationString:(int)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)temporaryDirectoryNodeWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(id)initTemporaryNodeOnVolume:(id)arg1 flags:(unsigned)arg2 fileDescriptor:(int*)arg3 error:(id*)arg4 ;
-(BOOL)getValue:(id*)arg1 forResourcePropertyKeyAndDirectoryFlag:(id)arg2 ;
-(void)clearURLPropertyCacheIfStale;
-(void)setDirectoryFlagForResourcePropertyKey:(id)arg1 value:(id)arg2 ;
-(id)childNodeWithRelativePath:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)volumeNodeWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(id)diskImageURLWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)isResolvable;
-(BOOL)isBusyDirectory;
-(BOOL)getHFSType:(unsigned*)arg1 creator:(unsigned*)arg2 error:(id*)arg3 ;
-(BOOL)isAliasFile;
-(BOOL)getFinderInfo:(/*function pointer*/void**)arg1 error:(id*)arg2 ;
-(BOOL)hasPackageBit;
-(BOOL)hasHiddenExtension;
-(BOOL)getIsDirectory_NoIO:(BOOL*)arg1 ;
-(id)pathWithError:(id*)arg1 ;
-(id)canonical:(BOOL)arg1 pathWithError:(id*)arg2 ;
-(id)canonicalPathWithError:(id*)arg1 ;
-(BOOL)isMountTrigger;
-(BOOL)isVolume;
-(BOOL)getVolumeIdentifier:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)isOnDiskImage;
-(BOOL)isOnLocalVolume;
-(BOOL)getDeviceNumber:(int*)arg1 error:(id*)arg2 ;
-(BOOL)getInodeNumber:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)canReadFromSandboxWithAuditToken:(const SCD_Struct_LS6*)arg1 ;
-(CFBundleRef)CFBundleWithError:(id*)arg1 ;
-(BOOL)getOwnerUID:(unsigned*)arg1 GID:(unsigned*)arg2 error:(id*)arg3 ;
-(BOOL)getDate:(double*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)getCreationDate:(double*)arg1 error:(id*)arg2 ;
-(BOOL)getContentModificationDate:(double*)arg1 error:(id*)arg2 ;
-(BOOL)getLength:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)getWriterBundleIdentifier:(id*)arg1 error:(id*)arg2 ;
-(BOOL)canWriteFromSandboxWithAuditToken:(const SCD_Struct_LS6*)arg1 ;
-(BOOL)canReadMetadataFromSandboxWithAuditToken:(const SCD_Struct_LS6*)arg1 ;
-(id)extendedAttributeWithName:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
-(BOOL)setExtendedAttribute:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1 relativeToNode:(id)arg2 error:(id*)arg3 ;
-(id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToNode:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
-(id)extensionWithError:(id*)arg1 ;
-(BOOL)getResourceValue:(id*)arg1 forKey:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(id)nameWithError:(id*)arg1 ;
-(id)bundleInfoDictionaryWithError:(id*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(void)prepareForReuse;
-(void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)URL;
-(BOOL)isRegularFile;
@end

