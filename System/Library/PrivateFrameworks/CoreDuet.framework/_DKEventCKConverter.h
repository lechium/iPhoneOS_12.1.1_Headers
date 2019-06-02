/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordZoneID;

@interface _DKEventCKConverter : NSObject {

	CKRecordZoneID* _zoneID;

}

@property (retain) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
-(id)eventsFromRecords:(id)arg1 ;
-(id)eventIDsFromRecordIDsAndTypes:(id)arg1 ;
-(id)recordsFromEvents:(id)arg1 ;
-(id)recordIDsFromEventIDs:(id)arg1 ;
-(id)eventDataFromRecord:(id)arg1 ;
-(id)recordFromEventData:(id)arg1 event:(id)arg2 ;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)initWithZoneID:(id)arg1 ;
@end
