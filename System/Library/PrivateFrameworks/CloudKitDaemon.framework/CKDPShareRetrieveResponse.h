/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPShareRetrieveResponse : PBCodable <NSCopying> {

	NSMutableArray* _shares;

}

@property (nonatomic,retain) NSMutableArray * shares;              //@synthesize shares=_shares - In the implementation block
+(Class)shareType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addShare:(id)arg1 ;
-(unsigned long long)sharesCount;
-(void)clearShares;
-(id)shareAtIndex:(unsigned long long)arg1 ;
-(void)setShares:(NSMutableArray *)arg1 ;
-(NSMutableArray *)shares;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
