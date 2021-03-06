/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FCCKPrivateDatabaseCKPayload : NSObject {

	NSArray* _recordIDs;
	NSArray* _records;
	NSArray* _zoneIDs;
	NSArray* _zones;
	long long _destination;

}

@property (nonatomic,retain) NSArray * recordIDs;                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * records;                  //@synthesize records=_records - In the implementation block
@property (nonatomic,retain) NSArray * zoneIDs;                  //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSArray * zones;                    //@synthesize zones=_zones - In the implementation block
@property (assign,nonatomic) long long destination;              //@synthesize destination=_destination - In the implementation block
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(void)setRecords:(NSArray *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)zones;
-(void)setZones:(NSArray *)arg1 ;
-(void)setDestination:(long long)arg1 ;
-(long long)destination;
-(NSArray *)records;
@end

