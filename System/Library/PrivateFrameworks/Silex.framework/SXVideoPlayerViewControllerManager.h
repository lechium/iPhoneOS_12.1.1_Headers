/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoPlayerViewControllerProvider.h>

@class SVVolumeProvider, NSURL, NSMutableDictionary, NSString;

@interface SXVideoPlayerViewControllerManager : NSObject <SXVideoPlayerViewControllerProvider> {

	BOOL _presentedAndAppeared;
	SVVolumeProvider* _volumeProvider;
	NSURL* _autoplayURL;
	NSMutableDictionary* _videoAnalyticsRouters;
	NSMutableDictionary* _visibilityMonitors;
	NSMutableDictionary* _videoPlayerViewControllers;
	NSMutableDictionary* _loseOwnershipBlocks;
	NSMutableDictionary* _pendingVideoPlayerViewControllers;
	NSMutableDictionary* _pendingLoseOwnershipBlocks;
	NSMutableDictionary* _pendingReceiveOwnershipBlocks;

}

@property (nonatomic,readonly) SVVolumeProvider * volumeProvider;                                    //@synthesize volumeProvider=_volumeProvider - In the implementation block
@property (nonatomic,copy) NSURL * autoplayURL;                                                      //@synthesize autoplayURL=_autoplayURL - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * videoAnalyticsRouters;                          //@synthesize videoAnalyticsRouters=_videoAnalyticsRouters - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * visibilityMonitors;                             //@synthesize visibilityMonitors=_visibilityMonitors - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * videoPlayerViewControllers;                     //@synthesize videoPlayerViewControllers=_videoPlayerViewControllers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * loseOwnershipBlocks;                            //@synthesize loseOwnershipBlocks=_loseOwnershipBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingVideoPlayerViewControllers;              //@synthesize pendingVideoPlayerViewControllers=_pendingVideoPlayerViewControllers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingLoseOwnershipBlocks;                     //@synthesize pendingLoseOwnershipBlocks=_pendingLoseOwnershipBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingReceiveOwnershipBlocks;                  //@synthesize pendingReceiveOwnershipBlocks=_pendingReceiveOwnershipBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL presentedAndAppeared;                                              //@synthesize presentedAndAppeared=_presentedAndAppeared - In the implementation block
-(void)setPresentedAndAppeared:(BOOL)arg1 ;
-(id)initWithVolumeProvider:(id)arg1 ;
-(SVVolumeProvider *)volumeProvider;
-(id)videoPlayerViewControllerForURL:(id)arg1 receiveOwnershipBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)loseOwnershipBlocks;
-(NSMutableDictionary *)videoPlayerViewControllers;
-(NSURL *)autoplayURL;
-(NSMutableDictionary *)videoAnalyticsRouters;
-(NSMutableDictionary *)visibilityMonitors;
-(void)setAutoplayURL:(NSURL *)arg1 ;
-(BOOL)presentedAndAppeared;
-(NSMutableDictionary *)pendingReceiveOwnershipBlocks;
-(NSMutableDictionary *)pendingLoseOwnershipBlocks;
-(NSMutableDictionary *)pendingVideoPlayerViewControllers;
-(void)registerExistingVideoPlayerViewController:(id)arg1 URL:(id)arg2 analyticsRouter:(id)arg3 videoPlayerVisibilityMonitor:(id)arg4 loseOwnershipBlock:(/*^block*/id)arg5 ;
-(void)configureAutoplayForVideoWithURL:(id)arg1 analyticsRouter:(id)arg2 ;
@end

