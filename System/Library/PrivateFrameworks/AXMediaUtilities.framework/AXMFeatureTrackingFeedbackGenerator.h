/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMFeedbackGenerator.h>
#import <AXMediaUtilities/AXMFeatureTrackingObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, AXMVisionEngine;

@interface AXMFeatureTrackingFeedbackGenerator : AXMFeedbackGenerator <AXMFeatureTrackingObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _queue_lastAnnouncedNumberOfFaces;
	NSString* _queue_lastSpokenModelClassifier;
	AXMVisionEngine* _engine;

}

@property (nonatomic,retain) AXMVisionEngine * engine;              //@synthesize engine=_engine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEngine:(AXMVisionEngine *)arg1 ;
-(void)didEnableFeedback;
-(void)didDisableFeedback;
-(void)visionEngine:(id)arg1 didBeginTrackingFeature:(id)arg2 appliedOrientation:(id)arg3 ;
-(void)visionEngine:(id)arg1 didFinishTrackingFeature:(id)arg2 appliedOrientation:(id)arg3 ;
-(void)visionEngine:(id)arg1 trackingFeatureLocationDidChange:(id)arg2 appliedOrientation:(id)arg3 ;
-(void)_queue_generateFeedbackForCurrentNumberOfFaces;
-(void)_queue_generateFeedbackForCurrentModelClassifier;
-(id)initWithEngine:(id)arg1 outputManager:(id)arg2 ;
-(AXMVisionEngine *)engine;
@end

