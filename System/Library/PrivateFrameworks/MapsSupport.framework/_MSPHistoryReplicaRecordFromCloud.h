/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPHistoryReplicaRecord.h>
#import <libobjc.A.dylib/MSPReplicaRecordFromCloud.h>

@class NSData, MSPVectorTimestamp, NSDate, NSString;

@interface _MSPHistoryReplicaRecordFromCloud : NSObject <MSPHistoryReplicaRecord, MSPReplicaRecordFromCloud> {

	BOOL _tombstoneRepresentedByCloudRecord;
	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	NSDate* _modificationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * contents;                                                                         //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;                                                    //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modificationDate;                                                                 //@synthesize modificationDate=_modificationDate - In the implementation block
@property (getter=isTombstoneRepresentedByCloudRecord,nonatomic,readonly) BOOL tombstoneRepresentedByCloudRecord;              //@synthesize tombstoneRepresentedByCloudRecord=_tombstoneRepresentedByCloudRecord - In the implementation block
+(id)tombstone;
-(id)initWithCloudRecord:(id)arg1 ;
-(MSPVectorTimestamp *)contentsTimestamp;
-(BOOL)isTombstoneRepresentedByCloudRecord;
-(id)_initAsTombstone;
-(NSString *)description;
-(NSData *)contents;
-(NSDate *)modificationDate;
@end

