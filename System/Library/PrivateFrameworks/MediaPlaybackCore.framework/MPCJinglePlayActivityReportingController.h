/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCReportingController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, SSVPlayActivityController;

@interface MPCJinglePlayActivityReportingController : MPCReportingController {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	double _nonCatalogAggregatePlayDuration;
	double _nonCatalogAggregateStartTime;
	NSString* _nonCatalogDeviceName;
	BOOL _nonCatalogOffline;
	BOOL _nonCatalogSBEnabled;
	unsigned long long _nonCatalogSourceType;
	unsigned long long _nonCatalogStoreAccountID;
	NSString* _nonCatalogBuildVersion;
	NSString* _nonCatalogStoreFrontID;
	BOOL _shouldReportAggregateTimePlayActivityEvents;
	BOOL _shouldReportPlayActivityEvents;
	SSVPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) SSVPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAggregateTimePlayActivityEvents;                  //@synthesize shouldReportAggregateTimePlayActivityEvents=_shouldReportAggregateTimePlayActivityEvents - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPlayActivityEvents;                               //@synthesize shouldReportPlayActivityEvents=_shouldReportPlayActivityEvents - In the implementation block
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
-(void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setShouldReportPlayActivityEvents:(BOOL)arg1 ;
-(void)_recordReportingEvents:(id)arg1 ;
-(id)_captureNonCatalogAggregatePlayActivityEventWithNonCatalogAggregateEndTime:(double)arg1 ;
-(void)_clearNonCatalogAggregatePlayActivityEventData;
-(void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SSVPlayActivityController *)playActivityController;
-(BOOL)shouldReportAggregateTimePlayActivityEvents;
-(void)setShouldReportAggregateTimePlayActivityEvents:(BOOL)arg1 ;
-(BOOL)shouldReportPlayActivityEvents;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

