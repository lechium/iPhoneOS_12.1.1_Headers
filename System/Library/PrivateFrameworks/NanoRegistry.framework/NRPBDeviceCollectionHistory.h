/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NRPBSwitchRecordCollection;

@interface NRPBDeviceCollectionHistory : PBCodable <NSCopying> {

	long long _startIndex;
	NSMutableArray* _historys;
	NRPBSwitchRecordCollection* _switchRecords;
	SCD_Struct_NR2 _has;

}

@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) long long startIndex;                                    //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * historys;                               //@synthesize historys=_historys - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitchRecords; 
@property (nonatomic,retain) NRPBSwitchRecordCollection * switchRecords;              //@synthesize switchRecords=_switchRecords - In the implementation block
+(Class)historyType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStartIndex;
-(long long)startIndex;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(void)addHistory:(id)arg1 ;
-(unsigned long long)historysCount;
-(void)clearHistorys;
-(id)historyAtIndex:(unsigned long long)arg1 ;
-(void)setSwitchRecords:(NRPBSwitchRecordCollection *)arg1 ;
-(BOOL)hasSwitchRecords;
-(NSMutableArray *)historys;
-(void)setHistorys:(NSMutableArray *)arg1 ;
-(NRPBSwitchRecordCollection *)switchRecords;
-(void)setStartIndex:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

