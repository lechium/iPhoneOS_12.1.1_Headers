/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class LPVideoView, LPControlsSuppressingAVPlayerViewController, UIPanGestureRecognizer, PHSwipeDownTracker, CALayer, __AVPlayerLayerView, AVPlayerController, AVPlayer, NSString;

@interface LPFullScreenVideoViewController : UIViewController <UIGestureRecognizerDelegate> {

	LPVideoView* _sourceView;
	LPControlsSuppressingAVPlayerViewController* _playerViewController;
	UIPanGestureRecognizer* _slideGesture;
	PHSwipeDownTracker* _swipeDownTracker;
	CGRect _swipeDownInitialBounds;
	CALayer* _videoMaskLayer;
	__AVPlayerLayerView* _playerLayerView;
	AVPlayerController* _playerController;
	AVPlayer* _player;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)slideToDismissGestureRecognized:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 sourceView:(id)arg2 ;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dismissNonInteractively;
-(void)setUpFullScreenVideoViewControllerIfNeeded;
-(void)cancelDismissalGestures;
-(void)beginSlideToDismissTransitionWithRecognizer:(id)arg1 ;
-(void)updateSlideToDismissTransitionWithRecognizer:(id)arg1 ;
-(void)completeSlideToDismissTransition;
-(void)installCornerMaskLayer;
-(void)completeTransitionWithInitialVelocity:(PHDisplayVelocity)arg1 damping:(double)arg2 duration:(double)arg3 didComplete:(BOOL)arg4 ;
-(void)fadeBackgroundToColor:(id)arg1 withDuration:(double)arg2 damping:(double)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)installGestureRecognizers;
-(void)animateIn;
@end
