/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMDCKSyncStatsCollector : NSObject {

	NSMutableDictionary* _inMemorySyncStatistics;

}

@property (nonatomic,retain) NSMutableDictionary * inMemorySyncStatistics;              //@synthesize inMemorySyncStatistics=_inMemorySyncStatistics - In the implementation block
+(id)sharedInstance;
-(NSMutableDictionary *)inMemorySyncStatistics;
-(void)_incrementCountsForColumnSyncedKey:(id)arg1 syncedColumnAmountToIncrease:(unsigned long long)arg2 totalColumnAmountKey:(id)arg3 totalColumnAmountToIncrease:(unsigned long long)arg4 ;
-(void)refreshWithDBSyncStatistics;
-(id)currentInMemorySyncStatistics;
-(void)incrementSyncedChatCount:(unsigned long long)arg1 incrementTotalChatCount:(unsigned long long)arg2 ;
-(void)incrementSyncedMessageCount:(unsigned long long)arg1 incrementTotalMessageCount:(unsigned long long)arg2 ;
-(void)incrementSyncedAttachmentCount:(unsigned long long)arg1 incrementTotalAttachmentCount:(unsigned long long)arg2 ;
-(void)setInMemorySyncStatistics:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
@end

