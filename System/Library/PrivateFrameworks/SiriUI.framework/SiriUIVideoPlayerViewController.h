/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVPlayerViewController.h>

@protocol SiriUIVideoPlayerViewControllerDelegate;
@class NSString;

@interface SiriUIVideoPlayerViewController : AVPlayerViewController {

	BOOL _observingPlayerStatus;
	BOOL _observingItemStatus;
	BOOL _observingPlayback;
	BOOL _observingViewController;
	void* _playerStatusObserverContext;
	void* _itemStatusObserverContext;
	NSString* _savedAudioSessionCategory;
	unsigned long long _savedAudioSessionCategoryOptions;
	id<SiriUIVideoPlayerViewControllerDelegate> _videoPlayerControllerDelegate;

}

@property (assign,nonatomic,__weak) id<SiriUIVideoPlayerViewControllerDelegate> videoPlayerControllerDelegate;              //@synthesize videoPlayerControllerDelegate=_videoPlayerControllerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldPlayHighResolutionContent; 
-(void)_updateAudioSessionCategory;
-(void)_removeObservers;
-(void)setPlayer:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)_registerObservers;
-(void)_restoreAudioPlaybackCategoryAndOptions;
-(id<SiriUIVideoPlayerViewControllerDelegate>)videoPlayerControllerDelegate;
-(void)_playbackDidFinish:(id)arg1 ;
-(BOOL)shouldPlayHighResolutionContent;
-(void)setVideoPlayerControllerDelegate:(id<SiriUIVideoPlayerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

