/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKitUI/ClassKitUI-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol OS_dispatch_semaphore;
@class CLSNotificationBannerViewController, NSObject;

@interface CLSNotificationBannerWindow : UIWindow {

	CLSNotificationBannerViewController* _currentBannerViewController;
	NSObject*<OS_dispatch_semaphore> _bannerSemaphore;

}

@property (nonatomic,retain) CLSNotificationBannerViewController * currentBannerViewController;              //@synthesize currentBannerViewController=_currentBannerViewController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> bannerSemaphore;                               //@synthesize bannerSemaphore=_bannerSemaphore - In the implementation block
+(id)bannerWindow;
+(void)enqueBanner:(id)arg1 ;
+(id)queue;
-(CLSNotificationBannerViewController *)currentBannerViewController;
-(NSObject*<OS_dispatch_semaphore>)bannerSemaphore;
-(void)_showBanner:(id)arg1 ;
-(void)_hideBanner:(id)arg1 quickly:(BOOL)arg2 ;
-(void)setCurrentBannerViewController:(CLSNotificationBannerViewController *)arg1 ;
-(void)setBannerSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)init;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_includeInDefaultImageSnapshot;
-(void)handlePan:(id)arg1 ;
@end

