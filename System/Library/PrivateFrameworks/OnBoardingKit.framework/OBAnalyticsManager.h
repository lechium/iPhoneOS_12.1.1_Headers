/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface OBAnalyticsManager : NSObject {

	BOOL _shouldStashMetrics;
	NSMutableArray* _stagedMetrics;

}

@property (retain) NSMutableArray * stagedMetrics;              //@synthesize stagedMetrics=_stagedMetrics - In the implementation block
@property (assign) BOOL shouldStashMetrics;                     //@synthesize shouldStashMetrics=_shouldStashMetrics - In the implementation block
+(id)sharedManager;
-(void)logPresentationOfPrivacyUnifiedAbout;
-(void)logPresentationOfPrivacySplashWithIdentifier:(id)arg1 ;
-(void)setStagedMetrics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stagedMetrics;
-(BOOL)shouldStashMetrics;
-(void)stageMetricID:(unsigned)arg1 metric:(id)arg2 ;
-(void)postMetricID:(unsigned)arg1 metric:(id)arg2 ;
-(void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg1 ;
-(void)logTapOnPrivacyLinkWithIdentifier:(id)arg1 ;
-(void)setShouldStashMetrics:(BOOL)arg1 ;
-(id)init;
-(void)commit;
@end

