/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLMediaItemViewController.h>
#import <libobjc.A.dylib/AVPictureInPictureControllerDelegate.h>

@class PHPlaceholderView, QLOverlayPlayButton, QLVideoScrubberView, NSLayoutConstraint, UIView, UIScrollView, NSString;

@interface QLMovieItemViewController : QLMediaItemViewController <AVPictureInPictureControllerDelegate> {

	BOOL _previewIsVisisble;
	BOOL _isObservingPlayerExternalPlaybackActive;
	PHPlaceholderView* _airPlayPlaceholderView;
	QLOverlayPlayButton* _playButton;
	QLVideoScrubberView* _scrubber;
	NSLayoutConstraint* _bottomScrubberConstraint;
	UIView* _scrubberContainer;
	UIScrollView* _scrubberContainerScrollView;
	double _scrubberVerticalOffset;

}

@property (retain) QLOverlayPlayButton * playButton;                                    //@synthesize playButton=_playButton - In the implementation block
@property (retain) QLVideoScrubberView * scrubber;                                      //@synthesize scrubber=_scrubber - In the implementation block
@property (retain) NSLayoutConstraint * bottomScrubberConstraint;                       //@synthesize bottomScrubberConstraint=_bottomScrubberConstraint - In the implementation block
@property (retain) UIView * scrubberContainer;                                          //@synthesize scrubberContainer=_scrubberContainer - In the implementation block
@property (retain) UIScrollView * scrubberContainerScrollView;                          //@synthesize scrubberContainerScrollView=_scrubberContainerScrollView - In the implementation block
@property (assign,nonatomic) double scrubberVerticalOffset;                             //@synthesize scrubberVerticalOffset=_scrubberVerticalOffset - In the implementation block
@property (nonatomic,readonly) PHPlaceholderView * airPlayPlaceholderView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(QLVideoScrubberView *)scrubber;
-(void)setScrubber:(QLVideoScrubberView *)arg1 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(id)parallaxView;
-(void)didChangePlayingStatus;
-(void)setPlayControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)timeLabelScrollView;
-(double)scrubberVerticalOffset;
-(void)setScrubberVerticalOffset:(double)arg1 ;
-(void)_updatePlaceHolderView;
-(void)addScrubberIfNeededWithDeferral;
-(PHPlaceholderView *)airPlayPlaceholderView;
-(NSLayoutConstraint *)bottomScrubberConstraint;
-(void)setBottomScrubberConstraint:(NSLayoutConstraint *)arg1 ;
-(QLOverlayPlayButton *)playButton;
-(void)setPlayButton:(QLOverlayPlayButton *)arg1 ;
-(UIView *)scrubberContainer;
-(void)setScrubberContainerScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrubberContainerScrollView;
-(void)setScrubberContainer:(UIView *)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)accessoryView;
-(long long)preferredWhitePointAdaptivityStyle;
-(id)transitioningView;
-(void)play;
@end

