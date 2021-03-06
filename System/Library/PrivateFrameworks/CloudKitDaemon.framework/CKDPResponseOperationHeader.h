/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable <NSCopying> {

	NSMutableArray* _assetAuthorizationResponses;

}

@property (nonatomic,retain) NSMutableArray * assetAuthorizationResponses;              //@synthesize assetAuthorizationResponses=_assetAuthorizationResponses - In the implementation block
+(Class)assetAuthorizationResponsesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addAssetAuthorizationResponses:(id)arg1 ;
-(unsigned long long)assetAuthorizationResponsesCount;
-(void)clearAssetAuthorizationResponses;
-(id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)assetAuthorizationResponses;
-(void)setAssetAuthorizationResponses:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

