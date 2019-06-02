/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoSkipHandling.h>

@protocol SVVideoQueueProviding, SVVisibilityReporting, SVVideoVisiblePercentageManager, SVVideoViewControllerProviding;
@class NSString;

@interface SVPlaylistSkipHandler : NSObject <SVVideoSkipHandling> {

	id<SVVideoQueueProviding> _queueProvider;
	id<SVVisibilityReporting> _visiblityReporter;
	id<SVVideoVisiblePercentageManager> _visiblePercentageManager;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;

}

@property (nonatomic,readonly) id<SVVideoQueueProviding> queueProvider;                                     //@synthesize queueProvider=_queueProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<SVVisibilityReporting> visiblityReporter;                          //@synthesize visiblityReporter=_visiblityReporter - In the implementation block
@property (nonatomic,readonly) id<SVVideoVisiblePercentageManager> visiblePercentageManager;                //@synthesize visiblePercentageManager=_visiblePercentageManager - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoQueueProviding>)queueProvider;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id<SVVideoVisiblePercentageManager>)visiblePercentageManager;
-(id<SVVisibilityReporting>)visiblityReporter;
-(void)skipToVideo:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithQueueProvider:(id)arg1 visibiltyReporter:(id)arg2 visiblePercentageManager:(id)arg3 videoViewControllerProvider:(id)arg4 ;
-(long long)contentTransitionTypeForVideo:(id)arg1 ;
@end

