/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>

@class QLOverlayPlayButton, AVPlayerViewController, AVPlayer, NSString;

@interface QLAVPlayerItemViewController : QLItemViewController <AVPlayerViewControllerDelegate> {

	QLOverlayPlayButton* _playButton;
	AVPlayerViewController* _playerViewController;
	BOOL _fullScreen;
	BOOL _mediaWasPausedOnResignActive;
	AVPlayer* _player;
	CGSize _imageSize;
	BOOL _isAudioOnly;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)transformerClass;
+(BOOL)shouldBeRemoteForContentType:(id)arg1 ;
+(id)supportedContentTypes;
-(void)hostApplicationDidEnterBackground:(id)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)enterFullScreen:(BOOL)arg1 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(BOOL)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2 ;
-(CGSize)imageSize;
-(long long)preferredWhitePointAdaptivityStyle;
-(void)play;
-(void)pause;
@end

