/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/PMLAWDAvailableSessionsTracker.h>

@class NSMutableArray, NSArray;

@interface PMLAWDAvailableSessionsTrackerMock : PMLAWDAvailableSessionsTracker {

	NSMutableArray* _internalTrackedStats;
	NSArray* _trackedStats;

}

@property (readonly) NSArray * trackedStats;              //@synthesize trackedStats=_trackedStats - In the implementation block
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
-(void)clearTrackedMessages;
-(id)recentStatsForModelName:(id)arg1 ;
-(void)triggerAWDMetricRequest;
-(NSArray *)trackedStats;
-(id)init;
@end
