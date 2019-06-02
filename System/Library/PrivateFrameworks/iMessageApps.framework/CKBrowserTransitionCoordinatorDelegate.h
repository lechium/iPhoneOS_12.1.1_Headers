/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKBrowserTransitionCoordinatorDelegate <NSObject>
@optional
-(BOOL)shouldAlwaysShowAppTitle;
-(void)browserTransitionCoordinator:(id)arg1 expandedStateDidChange:(BOOL)arg2 withReason:(long long)arg3;
-(void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinator:(id)arg1 browserWillBecomeInactive:(id)arg2;
-(void)browserTransitionCoordinator:(id)arg1 didTransitionFromOrientation:(long long)arg2 toOrientation:(long long)arg3;
-(void)browserTransitionCoordinator:(id)arg1 didSwitchToPlugin:(id)arg2;
-(void)browserTransitionCoordinator:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
-(CGSize*)browserTransitionCoordinator:(id)arg1 preferredSizeForBrowser:(id)arg2;
-(void)browserTransitionCoordinatorWantsPresentationOfAppStore:(id)arg1;
-(void)browserTransitionCoordinatorWantsPresentationOfAppManager:(id)arg1;
-(id)appGrabberForBrowserTransitionCoordinator:(id)arg1;
-(void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(id)arg1;
-(CGRect*)cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(id)arg1;
-(double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1;
-(BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg1;
-(id)appTitleOverride;
-(id)appIconOverride;
-(id)transitionsPresentationViewController;

@end
