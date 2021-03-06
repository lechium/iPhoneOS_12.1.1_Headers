/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface PPConnectionsParameters : NSObject {

	NSDictionary* _assets;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)donationBlacklistApps;
-(id)assetValueForKey:(id)arg1 ;
-(long long)unsignedIntegerValueForKey:(id)arg1 default:(long long)arg2 ;
-(long long)integerValueForKey:(id)arg1 default:(long long)arg2 ;
-(double)doubleValueForKey:(id)arg1 default:(long long)arg2 ;
-(BOOL)boolValueForKey:(id)arg1 default:(BOOL)arg2 ;
-(long long)expirySeconds;
-(double)userActivityExpirySeconds;
-(double)namedEntitySourceLookBackSeconds;
-(double)namedEntitySourceExpirySeconds;
-(double)calendarEventLocationLookaheadTimeSeconds;
-(double)calendarEventLocationExpirySeconds;
-(unsigned long long)quickTypePredictionLimit;
-(unsigned long long)userActivityBatchSize;
-(double)userActivityCandidateScore;
-(long long)appSwitcherPredictionExpiry;
-(long long)locationAppPredictionInstallHalflife;
-(long long)locationAppPredictionInstallMaxScore;
-(long long)locationAppPredictionLaunchTimeOfDayFactor;
-(long long)locationAppPredictionOverallLaunchFactor;
-(double)linguisticTriggerExpirySeconds;
-(double)pasteboardItemExpirySeconds;
-(double)locationAppLastUseTimeoutSeconds;
-(BOOL)shouldUseWhitelistWebsite;
-(BOOL)shouldUseWhitelistApps;
-(id)locationPredictionBlacklistApps;
-(id)donationWhitelistWebsites;
-(id)donationBlacklistWebsites;
-(id)donationWhitelistApps;
-(id)init;
@end

