/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPResponseOperationHeaderAssetAuthorizationResponseHeaderInfo : PBCodable <NSCopying> {

	NSString* _headerKey;
	NSString* _headerValue;

}

@property (nonatomic,retain) NSString * headerKey;                //@synthesize headerKey=_headerKey - In the implementation block
@property (nonatomic,retain) NSString * headerValue;              //@synthesize headerValue=_headerValue - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHeaderKey:(NSString *)arg1 ;
-(void)setHeaderValue:(NSString *)arg1 ;
-(NSString *)headerKey;
-(NSString *)headerValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

