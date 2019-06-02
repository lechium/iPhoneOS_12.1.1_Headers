/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRFieldCKInfo, NSString, NSData, NSSet, NSNumber;

@interface BRCVersion : NSObject <NSCopying, NSSecureCoding> {

	BRFieldCKInfo* _ckInfo;
	long long _mtime;
	NSString* _originalPOSIXName;
	long long _size;
	long long _thumbnailSize;
	NSData* _thumbnailSignature;
	NSData* _contentSignature;
	NSData* _xattrSignature;
	NSData* _quarantineInfo;
	NSSet* _conflictLoserEtags;
	NSData* _lazyXattr;
	NSNumber* _lastEditorDeviceOrUserRowID;
	NSString* _lastEditorDeviceName;

}

@property (assign,nonatomic) long long mtime;                                     //@synthesize mtime=_mtime - In the implementation block
@property (nonatomic,retain) NSString * originalPOSIXName;                        //@synthesize originalPOSIXName=_originalPOSIXName - In the implementation block
@property (assign,nonatomic) long long size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long thumbnailSize;                             //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,retain) NSData * xattrSignature;                             //@synthesize xattrSignature=_xattrSignature - In the implementation block
@property (nonatomic,retain) NSData * quarantineInfo;                             //@synthesize quarantineInfo=_quarantineInfo - In the implementation block
@property (nonatomic,retain) NSData * contentSignature;                           //@synthesize contentSignature=_contentSignature - In the implementation block
@property (nonatomic,retain) NSData * thumbnailSignature;                         //@synthesize thumbnailSignature=_thumbnailSignature - In the implementation block
@property (nonatomic,retain) NSSet * conflictLoserEtags;                          //@synthesize conflictLoserEtags=_conflictLoserEtags - In the implementation block
@property (nonatomic,retain) NSNumber * lastEditorDeviceOrUserRowID;              //@synthesize lastEditorDeviceOrUserRowID=_lastEditorDeviceOrUserRowID - In the implementation block
@property (nonatomic,retain) NSNumber * lastEditorDeviceRowID; 
@property (nonatomic,retain) NSString * lastEditorDeviceName;                     //@synthesize lastEditorDeviceName=_lastEditorDeviceName - In the implementation block
@property (nonatomic,retain) NSNumber * lastEditorRowID; 
@property (nonatomic,retain) BRFieldCKInfo * ckInfo;                              //@synthesize ckInfo=_ckInfo - In the implementation block
@property (nonatomic,readonly) BOOL isPackage; 
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (nonatomic,retain) NSData * lazyXattr;                                  //@synthesize lazyXattr=_lazyXattr - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isPackage;
-(NSString *)originalPOSIXName;
-(BOOL)hasThumbnail;
-(id)uti;
-(NSSet *)conflictLoserEtags;
-(void)setConflictLoserEtags:(NSSet *)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(NSNumber *)lastEditorRowID;
-(long long)mtime;
-(unsigned long long)diffAgainst:(id)arg1 ;
-(BRFieldCKInfo *)ckInfo;
-(void)setCkInfo:(BRFieldCKInfo *)arg1 ;
-(NSData *)xattrSignature;
-(void)setMtime:(long long)arg1 ;
-(id)initFromResultSet:(id)arg1 pos:(int)arg2 ;
-(BOOL)check:(id)arg1 logToFile:(_sFILE*)arg2 ;
-(BOOL)isEtagEqual:(id)arg1 ;
-(void)setXattrSignature:(NSData *)arg1 ;
-(NSData *)lazyXattr;
-(void)setLazyXattr:(NSData *)arg1 ;
-(BOOL)_hasLastEditorDeviceRowID;
-(BOOL)_hasLastEditorRowID;
-(NSNumber *)lastEditorDeviceRowID;
-(id)lastEditorUserIdentityWithDB:(id)arg1 ;
-(id)initWithVersion:(id)arg1 ;
-(void)setLastEditorDeviceRowID:(NSNumber *)arg1 ;
-(void)setLastEditorRowID:(NSNumber *)arg1 ;
-(id)lastEditorDeviceDisplayNameWithDB:(id)arg1 ;
-(id)lastEditorDisplayNameWithDB:(id)arg1 ;
-(id)displayNameWithoutExtension:(BOOL)arg1 ;
-(id)additionNameForItemID:(id)arg1 zoneID:(id)arg2 ;
-(BOOL)isSmallAndMostRecentClientsGenerateThumbnails;
-(void)setOriginalPOSIXName:(NSString *)arg1 ;
-(NSData *)thumbnailSignature;
-(void)setThumbnailSignature:(NSData *)arg1 ;
-(NSData *)contentSignature;
-(void)setContentSignature:(NSData *)arg1 ;
-(NSNumber *)lastEditorDeviceOrUserRowID;
-(void)setLastEditorDeviceOrUserRowID:(NSNumber *)arg1 ;
-(NSString *)lastEditorDeviceName;
-(void)setLastEditorDeviceName:(NSString *)arg1 ;
-(NSData *)quarantineInfo;
-(void)setQuarantineInfo:(NSData *)arg1 ;
-(long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(long long)arg1 ;
-(long long)thumbnailSize;
-(void)setThumbnailSize:(long long)arg1 ;
@end

