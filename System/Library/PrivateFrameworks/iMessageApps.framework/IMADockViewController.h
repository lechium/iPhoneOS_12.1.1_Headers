/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iMessageApps/iMessageApps-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKBrowserSwitcherFooterViewDelegate.h>
#import <libobjc.A.dylib/CKBrowserViewControllerSendDelegate.h>
#import <libobjc.A.dylib/CKBrowserSwitcherViewControllerDelegate.h>
#import <libobjc.A.dylib/CKFullScreenAppViewControllerDelegate.h>
#import <libobjc.A.dylib/CKBrowserDragControllerTranscriptDelegate.h>
#import <libobjc.A.dylib/CKBrowserTransitionCoordinatorDelegate.h>

@protocol IMADockViewControllerDelegate;
@class CKBrowserSwitcherFooterView, CKBrowserSwitcherFooterViewDataSource, IMBalloonPlugin, CKFullScreenAppViewController, CKBrowserTransitionCoordinator, CKBrowserSwitcherViewController, UIViewController, NSString;

@interface IMADockViewController : UIViewController <CKBrowserSwitcherFooterViewDelegate, CKBrowserViewControllerSendDelegate, CKBrowserSwitcherViewControllerDelegate, CKFullScreenAppViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, CKBrowserTransitionCoordinatorDelegate> {

	CKBrowserSwitcherFooterView* _appStrip;
	CKBrowserSwitcherFooterViewDataSource* _appStripDataSource;
	IMBalloonPlugin* _currentBalloonPlugin;
	CKFullScreenAppViewController* _expandedAppViewController;
	CKBrowserTransitionCoordinator* _alwaysExpandedCoordinator;
	BOOL _isTransitioningPresentationStyles;
	BOOL _alwaysPresentAppsExpanded;
	BOOL _hidesCompactAppForStickerDrag;
	id<IMADockViewControllerDelegate> _delegate;
	CKBrowserSwitcherViewController* _switcherViewController;

}

@property (nonatomic,retain) CKBrowserSwitcherViewController * switcherViewController;              //@synthesize switcherViewController=_switcherViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IMADockViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL alwaysPresentAppsExpanded;                                        //@synthesize alwaysPresentAppsExpanded=_alwaysPresentAppsExpanded - In the implementation block
@property (nonatomic,readonly) double minimizedDockHeight; 
@property (nonatomic,readonly) UIViewController * currentAppViewController; 
@property (assign,nonatomic) BOOL hidesCompactAppForStickerDrag;                                    //@synthesize hidesCompactAppForStickerDrag=_hidesCompactAppForStickerDrag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateAppStripFrame;
-(void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2 ;
-(void)switcherView:(id)arg1 didMagnify:(BOOL)arg2 ;
-(void)startEditingPayload:(id)arg1 ;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(id)dragControllerTranscriptDelegate;
-(void)dragManagerDidBeginDragging:(id)arg1 ;
-(void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2 ;
-(void)dragManagerDidEndDragging:(id)arg1 ;
-(int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2 ;
-(void)dismissAndReloadInputViews:(BOOL)arg1 ;
-(BOOL)shouldAlwaysShowAppTitle;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 ;
-(void)commitPayload:(id)arg1 ;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 ;
-(void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dismissToKeyboard:(BOOL)arg1 ;
-(void)commitSticker:(id)arg1 ;
-(void)commitSticker:(id)arg1 withDragTarget:(id)arg2 ;
-(void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2 ;
-(void)switcherViewControllerDidCollapse:(id)arg1 ;
-(void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2 ;
-(void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2 ;
-(void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2 ;
-(void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2 ;
-(CGSize)browserTransitionCoordinator:(id)arg1 preferredSizeForBrowser:(id)arg2 ;
-(double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1 ;
-(BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg1 ;
-(id)transitionsPresentationViewController;
-(void)cleanupRunningApps;
-(double)minimizedDockHeight;
-(UIViewController *)currentAppViewController;
-(void)setAlwaysPresentAppsExpanded:(BOOL)arg1 ;
-(void)hideAppViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)alwaysPresentAppsExpanded;
-(void)dealloc;
-(void)setDelegate:(id<IMADockViewControllerDelegate>)arg1 ;
-(id<IMADockViewControllerDelegate>)delegate;
-(void)dismiss;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)updateSwitcherViewFrame;
-(CKBrowserSwitcherViewController *)switcherViewController;
-(void)notifyDelegateOfSelectedPlugin:(id)arg1 ;
-(void)_hideCompactBrowserAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateSwitcherOffscreen:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(CGRect)alwaysExpandedAppViewControllerFrame;
-(BOOL)addSwitcherForPlugin:(id)arg1 ;
-(void)positionSwitcherOffscreen:(BOOL)arg1 ;
-(id)appViewControllerPresenter;
-(double)switcherHeight;
-(BOOL)isAppCompact;
-(void)hideBrowserAnimated:(BOOL)arg1 ;
-(BOOL)hidesCompactAppForStickerDrag;
-(BOOL)isSwitcherOffscreen;
-(id)imageViewForSticker:(id)arg1 ;
-(void)setHidesCompactAppForStickerDrag:(BOOL)arg1 ;
-(void)setSwitcherViewController:(CKBrowserSwitcherViewController *)arg1 ;
@end
