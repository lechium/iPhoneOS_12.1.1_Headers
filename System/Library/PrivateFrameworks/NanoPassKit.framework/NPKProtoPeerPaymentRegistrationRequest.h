/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoPeerPaymentRegistrationRequest : PBRequest <NSCopying> {

	NSString* _serviceURL;
	BOOL _forceReRegistration;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) BOOL hasServiceURL; 
@property (nonatomic,retain) NSString * serviceURL;                    //@synthesize serviceURL=_serviceURL - In the implementation block
@property (assign,nonatomic) BOOL hasForceReRegistration; 
@property (assign,nonatomic) BOOL forceReRegistration;                 //@synthesize forceReRegistration=_forceReRegistration - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)serviceURL;
-(void)setServiceURL:(NSString *)arg1 ;
-(BOOL)hasServiceURL;
-(void)setForceReRegistration:(BOOL)arg1 ;
-(void)setHasForceReRegistration:(BOOL)arg1 ;
-(BOOL)hasForceReRegistration;
-(BOOL)forceReRegistration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
