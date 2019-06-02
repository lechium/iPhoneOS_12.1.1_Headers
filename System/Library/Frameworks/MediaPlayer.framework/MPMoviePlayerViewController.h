/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController {

	id _internal;
	BOOL _statusBarWasHidden;

}

@property (nonatomic,readonly) MPMoviePlayerController * moviePlayer; 
-(void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(MPMoviePlayerController *)moviePlayer;
-(void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1 ;
-(id)initWithContentURL:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)canBecomeFirstResponder;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)_canReloadView;
-(BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredWhitePointAdaptivityStyle;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
@end
