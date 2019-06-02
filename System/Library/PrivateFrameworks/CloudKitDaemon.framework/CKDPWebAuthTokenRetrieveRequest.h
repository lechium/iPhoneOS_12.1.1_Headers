/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPWebAuthTokenRetrieveRequest : PBRequest <NSCopying> {

	NSString* _apiToken;
	BOOL _forceFetchToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasApiToken; 
@property (nonatomic,retain) NSString * apiToken;                  //@synthesize apiToken=_apiToken - In the implementation block
@property (assign,nonatomic) BOOL hasForceFetchToken; 
@property (assign,nonatomic) BOOL forceFetchToken;                 //@synthesize forceFetchToken=_forceFetchToken - In the implementation block
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setApiToken:(NSString *)arg1 ;
-(BOOL)hasApiToken;
-(void)setForceFetchToken:(BOOL)arg1 ;
-(void)setHasForceFetchToken:(BOOL)arg1 ;
-(BOOL)hasForceFetchToken;
-(NSString *)apiToken;
-(BOOL)forceFetchToken;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

