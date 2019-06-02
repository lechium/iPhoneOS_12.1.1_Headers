/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HKHealthWrapCodableMessageHeader : PBCodable <NSCopying> {

	long long _version;
	NSData* _encryptedHMACKey;
	NSData* _encryptedMessageKey;
	NSData* _encryptionIdentity;
	NSString* _studyIdentifier;
	NSData* _studyUUID;
	int _trailingHMACLength;
	int _trailingSHALength;
	NSData* _uploadUUID;
	BOOL _compressed;
	SCD_Struct_HK11 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                          //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedMessageKey; 
@property (nonatomic,retain) NSData * encryptedMessageKey;               //@synthesize encryptedMessageKey=_encryptedMessageKey - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptionIdentity; 
@property (nonatomic,retain) NSData * encryptionIdentity;                //@synthesize encryptionIdentity=_encryptionIdentity - In the implementation block
@property (nonatomic,readonly) BOOL hasUploadUUID; 
@property (nonatomic,retain) NSData * uploadUUID;                        //@synthesize uploadUUID=_uploadUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasStudyIdentifier; 
@property (nonatomic,retain) NSString * studyIdentifier;                 //@synthesize studyIdentifier=_studyIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedHMACKey; 
@property (nonatomic,retain) NSData * encryptedHMACKey;                  //@synthesize encryptedHMACKey=_encryptedHMACKey - In the implementation block
@property (assign,nonatomic) BOOL hasTrailingHMACLength; 
@property (assign,nonatomic) int trailingHMACLength;                     //@synthesize trailingHMACLength=_trailingHMACLength - In the implementation block
@property (assign,nonatomic) BOOL hasTrailingSHALength; 
@property (assign,nonatomic) int trailingSHALength;                      //@synthesize trailingSHALength=_trailingSHALength - In the implementation block
@property (assign,nonatomic) BOOL hasCompressed; 
@property (assign,nonatomic) BOOL compressed;                            //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) BOOL hasStudyUUID; 
@property (nonatomic,retain) NSData * studyUUID;                         //@synthesize studyUUID=_studyUUID - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSData *)studyUUID;
-(void)setEncryptedMessageKey:(NSData *)arg1 ;
-(void)setEncryptionIdentity:(NSData *)arg1 ;
-(void)setUploadUUID:(NSData *)arg1 ;
-(void)setStudyIdentifier:(NSString *)arg1 ;
-(void)setEncryptedHMACKey:(NSData *)arg1 ;
-(void)setStudyUUID:(NSData *)arg1 ;
-(BOOL)hasEncryptedMessageKey;
-(BOOL)hasEncryptionIdentity;
-(BOOL)hasUploadUUID;
-(BOOL)hasStudyIdentifier;
-(BOOL)hasEncryptedHMACKey;
-(void)setTrailingHMACLength:(int)arg1 ;
-(void)setHasTrailingHMACLength:(BOOL)arg1 ;
-(BOOL)hasTrailingHMACLength;
-(void)setTrailingSHALength:(int)arg1 ;
-(void)setHasTrailingSHALength:(BOOL)arg1 ;
-(BOOL)hasTrailingSHALength;
-(void)setHasCompressed:(BOOL)arg1 ;
-(BOOL)hasCompressed;
-(BOOL)hasStudyUUID;
-(NSData *)encryptedMessageKey;
-(NSData *)encryptionIdentity;
-(NSData *)uploadUUID;
-(NSString *)studyIdentifier;
-(NSData *)encryptedHMACKey;
-(int)trailingHMACLength;
-(int)trailingSHALength;
-(BOOL)compressed;
-(void)setCompressed:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

