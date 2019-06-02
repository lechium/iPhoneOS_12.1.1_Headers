/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
@class NSString, NSMutableDictionary, NSObject;

@interface SPQueryResultsQueue : NSObject {

	BOOL _canceled;
	BOOL _tracked;
	BOOL _live;
	BOOL _shared;
	NSString* _identifier;
	SIResultQueueRef _siResultsQueue;
	NSMutableDictionary* _jobs;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _pausedCount;

}

@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) SIResultQueueRef siResultsQueue;                         //@synthesize siResultsQueue=_siResultsQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * jobs;                              //@synthesize jobs=_jobs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) long long pausedCount;                                   //@synthesize pausedCount=_pausedCount - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                           //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) BOOL tracked;                                            //@synthesize tracked=_tracked - In the implementation block
@property (assign,nonatomic) BOOL live;                                               //@synthesize live=_live - In the implementation block
@property (assign,nonatomic) BOOL shared;                                             //@synthesize shared=_shared - In the implementation block
@property (readonly) BOOL hasPausedResults; 
+(void)startTrackingResultsQueue:(id)arg1 ;
+(void)stopTrackingResultsQueueWithIdentifier:(id)arg1 ;
+(id)findResultsQueueWithIdentifier:(id)arg1 ;
+(id)sharedInstanceDispatchQueue:(id)arg1 ;
-(NSMutableDictionary *)jobs;
-(void)setShared:(BOOL)arg1 ;
-(BOOL)shared;
-(BOOL)canceled;
-(BOOL)live;
-(void)setLive:(BOOL)arg1 ;
-(void)cancelJob:(id)arg1 ;
-(void)setCanceled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)tracked;
-(void)addJob:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)setSiResultsQueue:(SIResultQueueRef)arg1 ;
-(void)setJobs:(NSMutableDictionary *)arg1 ;
-(void)_startTracking;
-(void)_scheduleWakeupForced:(BOOL)arg1 ;
-(BOOL)hasPausedResults;
-(void)_stopTracking;
-(void)pauseResults;
-(void)resumeResults;
-(void)_processResults;
-(SIResultQueueRef)siResultsQueue;
-(long long)pausedCount;
-(void)setPausedCount:(long long)arg1 ;
-(void)setTracked:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)cancel;
@end
