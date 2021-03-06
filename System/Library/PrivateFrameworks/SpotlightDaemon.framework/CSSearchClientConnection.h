/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CSClientConnectionConfiguration, NSMutableOrderedSet;

@interface CSSearchClientConnection : NSObject {

	unsigned _outBatchCount;
	NSMutableDictionary* _queryTasks;
	CSClientConnectionConfiguration* _configuration;
	NSMutableOrderedSet* _pausedTasks;

}

@property (nonatomic,readonly) unsigned outBatchCount;                                     //@synthesize outBatchCount=_outBatchCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * queryTasks;                             //@synthesize queryTasks=_queryTasks - In the implementation block
@property (nonatomic,retain) CSClientConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * pausedTasks;                            //@synthesize pausedTasks=_pausedTasks - In the implementation block
-(id)initWithConnection:(id)arg1 ;
-(id)protectionClass;
-(BOOL)searchInternal;
-(id)initWithConnectionConfiguration:(id)arg1 ;
-(void)cancelQueryTasks;
-(id)queryTask:(long long)arg1 ;
-(void)cancelQueryTask:(long long)arg1 ;
-(void)setQueryTask:(id)arg1 forQueryID:(long long)arg2 ;
-(void)_willSendResultsBatch:(id)arg1 qid:(long long)arg2 ;
-(void)_didReceiveResultsBatchCompletion;
-(unsigned)outBatchCount;
-(NSMutableDictionary *)queryTasks;
-(void)setQueryTasks:(NSMutableDictionary *)arg1 ;
-(NSMutableOrderedSet *)pausedTasks;
-(void)setPausedTasks:(NSMutableOrderedSet *)arg1 ;
-(void)dealloc;
-(CSClientConnectionConfiguration *)configuration;
-(void)setConfiguration:(CSClientConnectionConfiguration *)arg1 ;
-(id)bundleID;
@end

