//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKNavigationController.h"

#import "GKDaemonProxyDataUpdateDelegate.h"
#import "GKDashboardServiceInterface.h"
#import "GKExtensionProtocol.h"

@class GKGame, NSString, UIViewController;

@interface GKServiceViewController : GKNavigationController <GKExtensionProtocol, GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface>
{
    _Bool _alwaysShowDoneButton;	// 8 = 0x8
    int _hostPID;	// 12 = 0xc
    GKGame *_game;	// 16 = 0x10
    UIViewController *_privateViewController;	// 24 = 0x18
    double _statusBarHeight;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010000b2b8
+ (id)_exportedInterface;	// IMP=0x000000010000b2a4
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property(nonatomic) _Bool alwaysShowDoneButton; // @synthesize alwaysShowDoneButton=_alwaysShowDoneButton;
@property(retain, nonatomic) UIViewController *privateViewController; // @synthesize privateViewController=_privateViewController;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (double)_statusBarHeightForCurrentInterfaceOrientation;	// IMP=0x000000010000eee8
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x000000010000e9f8
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000e830
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000e7b4
- (void)_addDoneButtonToViewController:(id)arg1;	// IMP=0x000000010000e6e8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010000e474
- (void)_stopObservingChangesToProperties;	// IMP=0x000000010000e350
- (void)_startObservingChangesToProperties;	// IMP=0x000000010000dfd8
- (id)observedKeyPaths;	// IMP=0x000000010000dfc4
- (void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;	// IMP=0x000000010000df78
- (void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2;	// IMP=0x000000010000df3c
- (void)performSelectorOnHostController:(SEL)arg1;	// IMP=0x000000010000df08
- (void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000dee4
- (void)requestImagesForLeaderboardSetsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dec8
- (void)requestDashboardLogoImageWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000deac
- (void)dashboardDidChangeToLeaderboardIdentifier:(id)arg1;	// IMP=0x000000010000de90
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1;	// IMP=0x000000010000de44
- (void)dashboardDidChangeToViewState:(long long)arg1;	// IMP=0x000000010000ddf8
- (void)quitTurnBasedMatch:(id)arg1;	// IMP=0x000000010000ddb0
- (void)finishWithTurnBasedMatch:(id)arg1;	// IMP=0x000000010000dd68
- (void)finishAndPlayChallenge:(id)arg1;	// IMP=0x000000010000dd20
- (void)finish;	// IMP=0x000000010000dd14
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010000d874
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000d41c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000cfc4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000ca54
- (_Bool)_useBackdropViewForWindowBackground;	// IMP=0x000000010000ca4c
- (void)resetPrivateViewController;	// IMP=0x000000010000c9ec
- (void)constructPrivateViewController;	// IMP=0x000000010000c60c
- (void)presentInitialViewController:(id)arg1;	// IMP=0x000000010000c5fc
- (void)messageFromClient:(id)arg1;	// IMP=0x000000010000c5a4
- (void)nudge;	// IMP=0x000000010000c348
- (void)serviceViewControllerCreated:(id)arg1;	// IMP=0x000000010000c2c8
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000be74
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000bc08
- (void)donePressed:(id)arg1;	// IMP=0x000000010000bbfc
- (void)cancelServiceViewController;	// IMP=0x000000010000bbc4
- (void)remoteViewControllerDidCancel;	// IMP=0x000000010000b984
- (void)remoteViewControllerIsCanceling;	// IMP=0x000000010000b748
- (void)remoteViewControllerDidFinish;	// IMP=0x000000010000b508
- (void)remoteViewControllerIsFinishing;	// IMP=0x000000010000b2cc
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x000000010000b298
- (void)dealloc;	// IMP=0x000000010000b1f4
- (id)init;	// IMP=0x000000010000b0d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
