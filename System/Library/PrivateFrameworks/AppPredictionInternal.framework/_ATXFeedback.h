/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ATXDataStore, _ATXInternalUninstallNotification, NSString;

@interface _ATXFeedback : NSObject {

	_ATXDataStore* _store;
	_ATXInternalUninstallNotification* _uninstallNotificationListener;
	double _decayHalfLifeSeconds;
	double _baseAlpha;
	double _baseBeta;
	double _priorMean;
	double _priorAlpha;
	double _priorBeta;
	NSString* _abGroupIdentifier;

}

@property (nonatomic,readonly) double baseAlpha; 
@property (nonatomic,readonly) double baseBeta; 
@property (nonatomic,readonly) double currentAlpha; 
@property (nonatomic,readonly) double currentBeta; 
@property (nonatomic,readonly) NSString * abGroupIdentifier;              //@synthesize abGroupIdentifier=_abGroupIdentifier - In the implementation block
+(id)sharedInstance;
-(void)decayCounts;
-(void)resetData;
-(id)initWithDataStore:(id)arg1 ;
-(double)baseAlpha;
-(double)baseBeta;
-(double)currentAlpha;
-(double)currentBeta;
-(void)doDecayAtTime:(double)arg1 ;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 ;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(BOOL)arg3 ;
-(void)putNopScoresForApps:(id)arg1 into:(double*)arg2 atTime:(double)arg3 ;
-(void)putFeedbackScoresForApps:(id)arg1 intoScores:(double*)arg2 confirms:(double*)arg3 rejects:(double*)arg4 ;
-(void)removeFeedbackForBundles:(id)arg1 ;
-(void)removeFeedbackForBundle:(id)arg1 ;
-(NSString *)abGroupIdentifier;
-(id)init;
@end

