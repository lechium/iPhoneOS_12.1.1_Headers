/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageAction : PBCodable <NSCopying> {

	long long _messageActionType;
	NSString* _originalMessageGuid;
	NSString* _otherHandle;
	NSData* _padding;
	unsigned _version;
	SCD_Struct_IM4 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                            //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasMessageActionType; 
@property (assign,nonatomic) long long messageActionType;                 //@synthesize messageActionType=_messageActionType - In the implementation block
@property (nonatomic,readonly) BOOL hasOtherHandle; 
@property (nonatomic,retain) NSString * otherHandle;                      //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalMessageGuid; 
@property (nonatomic,retain) NSString * originalMessageGuid;              //@synthesize originalMessageGuid=_originalMessageGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                            //@synthesize padding=_padding - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasPadding;
-(BOOL)hasOtherHandle;
-(void)setHasMessageActionType:(BOOL)arg1 ;
-(BOOL)hasMessageActionType;
-(BOOL)hasOriginalMessageGuid;
-(NSString *)otherHandle;
-(void)setOtherHandle:(NSString *)arg1 ;
-(long long)messageActionType;
-(NSString *)originalMessageGuid;
-(void)setMessageActionType:(long long)arg1 ;
-(void)setOriginalMessageGuid:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setPadding:(NSData *)arg1 ;
-(NSData *)padding;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
