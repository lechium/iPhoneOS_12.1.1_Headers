/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface FCCKPResponseOperationResultErrorExtension : PBCodable <NSCopying> {

	NSString* _extensionName;
	NSData* _extensionPayload;
	unsigned _typeCode;
	SCD_Struct_FC1 _has;

}

@property (nonatomic,readonly) BOOL hasExtensionName; 
@property (nonatomic,retain) NSString * extensionName;                //@synthesize extensionName=_extensionName - In the implementation block
@property (assign,nonatomic) BOOL hasTypeCode; 
@property (assign,nonatomic) unsigned typeCode;                       //@synthesize typeCode=_typeCode - In the implementation block
@property (nonatomic,readonly) BOOL hasExtensionPayload; 
@property (nonatomic,retain) NSData * extensionPayload;               //@synthesize extensionPayload=_extensionPayload - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setExtensionName:(NSString *)arg1 ;
-(void)setExtensionPayload:(NSData *)arg1 ;
-(BOOL)hasExtensionName;
-(void)setTypeCode:(unsigned)arg1 ;
-(void)setHasTypeCode:(BOOL)arg1 ;
-(BOOL)hasTypeCode;
-(BOOL)hasExtensionPayload;
-(unsigned)typeCode;
-(NSData *)extensionPayload;
-(NSString *)extensionName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

