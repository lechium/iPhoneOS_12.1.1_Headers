/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKDPPulseResponse : PBCodable <NSCopying> {

	NSString* _currentEtag;
	NSMutableArray* _userDatas;

}

@property (nonatomic,readonly) BOOL hasCurrentEtag; 
@property (nonatomic,retain) NSString * currentEtag;                  //@synthesize currentEtag=_currentEtag - In the implementation block
@property (nonatomic,retain) NSMutableArray * userDatas;              //@synthesize userDatas=_userDatas - In the implementation block
+(Class)userDataType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addUserData:(id)arg1 ;
-(void)setCurrentEtag:(NSString *)arg1 ;
-(unsigned long long)userDatasCount;
-(void)clearUserDatas;
-(id)userDataAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCurrentEtag;
-(NSString *)currentEtag;
-(NSMutableArray *)userDatas;
-(void)setUserDatas:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

