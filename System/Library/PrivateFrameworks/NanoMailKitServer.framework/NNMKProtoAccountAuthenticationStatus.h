/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoAccountAuthenticationStatus : PBCodable <NSCopying> {

	NSMutableArray* _accountsStatus;

}

@property (nonatomic,retain) NSMutableArray * accountsStatus;              //@synthesize accountsStatus=_accountsStatus - In the implementation block
+(Class)accountsStatusType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)accountsStatus;
-(void)addAccountsStatus:(id)arg1 ;
-(unsigned long long)accountsStatusCount;
-(void)clearAccountsStatus;
-(id)accountsStatusAtIndex:(unsigned long long)arg1 ;
-(void)setAccountsStatus:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

