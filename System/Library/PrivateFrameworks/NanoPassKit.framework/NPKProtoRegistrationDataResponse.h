/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoRegistrationDataResponse : PBCodable <NSCopying> {

	NSString* _pushToken;
	NSData* _registrationDataBytes;
	BOOL _pending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                 //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasRegistrationDataBytes; 
@property (nonatomic,retain) NSData * registrationDataBytes;               //@synthesize registrationDataBytes=_registrationDataBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasPushToken; 
@property (nonatomic,retain) NSString * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)pending;
-(void)setPushToken:(NSString *)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)hasPushToken;
-(NSString *)pushToken;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setRegistrationDataBytes:(NSData *)arg1 ;
-(BOOL)hasRegistrationDataBytes;
-(NSData *)registrationDataBytes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

