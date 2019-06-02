/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVView.h>
#import <AVKit/AVScrubberDelegate.h>

@protocol AVTransportControlsViewDelegate;
@class AVStyleSheet, AVScrubber, AVLabel, AVButton, AVPlaybackControlsRoutePickerView, NSArray, UIView, AVBackdropView, NSLayoutConstraint, AVTouchIgnoringView, UILabel, NSTimer, _UIVisualEffectBackdropView, NSString;

@interface AVTransportControlsView : AVView <AVScrubberDelegate> {

	BOOL _doubleRowLayoutEnabled;
	BOOL _showsLoadingIndicator;
	BOOL _showsLiveStreamingControls;
	BOOL _liveStreamingControlsIncludeScrubber;
	BOOL _collapsed;
	BOOL _included;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	BOOL _backdropViewNeedsLayout;
	float _scrubberValueWhenScrubInstructionsTimerBegan;
	id<AVTransportControlsViewDelegate> _delegate;
	AVStyleSheet* _styleSheet;
	double _minimumRequiredWidth;
	AVScrubber* _scrubber;
	AVLabel* _elapsedTimeLabel;
	AVLabel* _timeRemainingLabel;
	AVButton* _standardPlayPauseButton;
	AVButton* _skipForwardButton;
	AVButton* _skipBackButton;
	AVButton* _startLeftwardContentTransitionButton;
	AVButton* _startRightwardContentTransitionButton;
	AVPlaybackControlsRoutePickerView* _routePickerView;
	AVButton* _mediaSelectionButton;
	NSArray* _customButtons;
	UIView* _customContentTransitioningInfoPanel;
	AVBackdropView* _backdropView;
	AVBackdropView* _detachedExtraContentBackdropView;
	NSArray* _doubleRowLayoutConstraints;
	NSLayoutConstraint* _scrubberInstructionsDoubleRowActiveConstraint;
	AVLabel* _liveBroadcastLabel;
	AVLabel* _liveBroadcastScrubberLabel;
	AVTouchIgnoringView* _embeddedExtraContentContainer;
	UILabel* _scrubInstructionsLabel;
	UILabel* _scrubInstructionsBackdropLabel;
	NSTimer* _scrubInstructionsTimer;
	_UIVisualEffectBackdropView* _captureView;
	CGSize _extrinsicContentSize;

}

@property (nonatomic,readonly) AVBackdropView * backdropView;                                                   //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) AVBackdropView * detachedExtraContentBackdropView;                                 //@synthesize detachedExtraContentBackdropView=_detachedExtraContentBackdropView - In the implementation block
@property (nonatomic,readonly) NSArray * doubleRowLayoutConstraints;                                            //@synthesize doubleRowLayoutConstraints=_doubleRowLayoutConstraints - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * scrubberInstructionsDoubleRowActiveConstraint;              //@synthesize scrubberInstructionsDoubleRowActiveConstraint=_scrubberInstructionsDoubleRowActiveConstraint - In the implementation block
@property (nonatomic,readonly) AVLabel * liveBroadcastLabel;                                                    //@synthesize liveBroadcastLabel=_liveBroadcastLabel - In the implementation block
@property (nonatomic,readonly) AVLabel * liveBroadcastScrubberLabel;                                            //@synthesize liveBroadcastScrubberLabel=_liveBroadcastScrubberLabel - In the implementation block
@property (nonatomic,readonly) AVTouchIgnoringView * embeddedExtraContentContainer;                             //@synthesize embeddedExtraContentContainer=_embeddedExtraContentContainer - In the implementation block
@property (nonatomic,readonly) UILabel * scrubInstructionsLabel;                                                //@synthesize scrubInstructionsLabel=_scrubInstructionsLabel - In the implementation block
@property (nonatomic,readonly) UILabel * scrubInstructionsBackdropLabel;                                        //@synthesize scrubInstructionsBackdropLabel=_scrubInstructionsBackdropLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * scrubInstructionsTimer;                                           //@synthesize scrubInstructionsTimer=_scrubInstructionsTimer - In the implementation block
@property (assign,nonatomic) float scrubberValueWhenScrubInstructionsTimerBegan;                                //@synthesize scrubberValueWhenScrubInstructionsTimerBegan=_scrubberValueWhenScrubInstructionsTimerBegan - In the implementation block
@property (nonatomic,readonly) NSArray * singleRowViews; 
@property (assign,nonatomic) CGSize extrinsicContentSize;                                                       //@synthesize extrinsicContentSize=_extrinsicContentSize - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                                 //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                                   //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                                       //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                                      //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
@property (assign,nonatomic) BOOL backdropViewNeedsLayout;                                                      //@synthesize backdropViewNeedsLayout=_backdropViewNeedsLayout - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectBackdropView * captureView;                                       //@synthesize captureView=_captureView - In the implementation block
@property (assign,nonatomic,__weak) id<AVTransportControlsViewDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVStyleSheet * styleSheet;                                                         //@synthesize styleSheet=_styleSheet - In the implementation block
@property (assign,getter=isDoubleRowLayoutEnabled,nonatomic) BOOL doubleRowLayoutEnabled;                       //@synthesize doubleRowLayoutEnabled=_doubleRowLayoutEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                                        //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsLiveStreamingControls;                                                   //@synthesize showsLiveStreamingControls=_showsLiveStreamingControls - In the implementation block
@property (assign,nonatomic) BOOL liveStreamingControlsIncludeScrubber;                                         //@synthesize liveStreamingControlsIncludeScrubber=_liveStreamingControlsIncludeScrubber - In the implementation block
@property (nonatomic,readonly) double minimumRequiredWidth;                                                     //@synthesize minimumRequiredWidth=_minimumRequiredWidth - In the implementation block
@property (nonatomic,readonly) AVScrubber * scrubber;                                                           //@synthesize scrubber=_scrubber - In the implementation block
@property (nonatomic,readonly) AVLabel * elapsedTimeLabel;                                                      //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,readonly) AVLabel * timeRemainingLabel;                                                    //@synthesize timeRemainingLabel=_timeRemainingLabel - In the implementation block
@property (nonatomic,readonly) AVButton * standardPlayPauseButton;                                              //@synthesize standardPlayPauseButton=_standardPlayPauseButton - In the implementation block
@property (nonatomic,readonly) AVButton * skipForwardButton;                                                    //@synthesize skipForwardButton=_skipForwardButton - In the implementation block
@property (nonatomic,readonly) AVButton * skipBackButton;                                                       //@synthesize skipBackButton=_skipBackButton - In the implementation block
@property (nonatomic,readonly) AVButton * startLeftwardContentTransitionButton;                                 //@synthesize startLeftwardContentTransitionButton=_startLeftwardContentTransitionButton - In the implementation block
@property (nonatomic,readonly) AVButton * startRightwardContentTransitionButton;                                //@synthesize startRightwardContentTransitionButton=_startRightwardContentTransitionButton - In the implementation block
@property (nonatomic,readonly) AVPlaybackControlsRoutePickerView * routePickerView;                             //@synthesize routePickerView=_routePickerView - In the implementation block
@property (nonatomic,readonly) AVButton * mediaSelectionButton;                                                 //@synthesize mediaSelectionButton=_mediaSelectionButton - In the implementation block
@property (nonatomic,copy) NSArray * customButtons;                                                             //@synthesize customButtons=_customButtons - In the implementation block
@property (nonatomic,retain) UIView * customContentTransitioningInfoPanel;                                      //@synthesize customContentTransitioningInfoPanel=_customContentTransitioningInfoPanel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(CGSize)extrinsicContentSize;
-(void)_showScrubInstructions;
-(BOOL)isCollapsedOrExcluded;
-(void)setIncluded:(BOOL)arg1 ;
-(BOOL)isIncluded;
-(BOOL)hasAlternateAppearance;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(BOOL)hasFullScreenAppearance;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(void)setCustomContentTransitioningInfoPanel:(UIView *)arg1 ;
-(UIView *)customContentTransitioningInfoPanel;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(id)initWithFrame:(CGRect)arg1 styleSheet:(id)arg2 captureView:(id)arg3 ;
-(void)setStyleSheet:(AVStyleSheet *)arg1 ;
-(void)scrubberSlowKnobMovementDetected:(id)arg1 ;
-(void)setDoubleRowLayoutEnabled:(BOOL)arg1 ;
-(void)setShowsLiveStreamingControls:(BOOL)arg1 ;
-(void)setLiveStreamingControlsIncludeScrubber:(BOOL)arg1 ;
-(void)setCustomButtons:(NSArray *)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)scrubberValueChanged:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(void)_ensureLayoutConstraints;
-(void)_updateScrubInstructionsLabelsText;
-(id)_scrubInstructionsAttributedText;
-(void)_updateCustomContentTransitioningInfoPanelLayout;
-(NSArray *)singleRowViews;
-(BOOL)isDoubleRowLayoutEnabled;
-(BOOL)showsLiveStreamingControls;
-(BOOL)liveStreamingControlsIncludeScrubber;
-(double)minimumRequiredWidth;
-(AVLabel *)elapsedTimeLabel;
-(AVButton *)standardPlayPauseButton;
-(AVButton *)skipForwardButton;
-(AVButton *)skipBackButton;
-(AVButton *)startLeftwardContentTransitionButton;
-(AVButton *)startRightwardContentTransitionButton;
-(AVPlaybackControlsRoutePickerView *)routePickerView;
-(AVButton *)mediaSelectionButton;
-(NSArray *)customButtons;
-(AVBackdropView *)detachedExtraContentBackdropView;
-(void)setDetachedExtraContentBackdropView:(AVBackdropView *)arg1 ;
-(NSArray *)doubleRowLayoutConstraints;
-(NSLayoutConstraint *)scrubberInstructionsDoubleRowActiveConstraint;
-(AVLabel *)liveBroadcastLabel;
-(AVLabel *)liveBroadcastScrubberLabel;
-(AVTouchIgnoringView *)embeddedExtraContentContainer;
-(UILabel *)scrubInstructionsLabel;
-(UILabel *)scrubInstructionsBackdropLabel;
-(NSTimer *)scrubInstructionsTimer;
-(void)setScrubInstructionsTimer:(NSTimer *)arg1 ;
-(float)scrubberValueWhenScrubInstructionsTimerBegan;
-(void)setScrubberValueWhenScrubInstructionsTimerBegan:(float)arg1 ;
-(BOOL)backdropViewNeedsLayout;
-(void)setBackdropViewNeedsLayout:(BOOL)arg1 ;
-(AVScrubber *)scrubber;
-(AVLabel *)timeRemainingLabel;
-(void)setCollapsed:(BOOL)arg1 ;
-(AVStyleSheet *)styleSheet;
-(void)setDelegate:(id<AVTransportControlsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<AVTransportControlsViewDelegate>)delegate;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(AVBackdropView *)backdropView;
-(_UIVisualEffectBackdropView *)captureView;
-(BOOL)isCollapsed;
-(void)_updateFontSizes;
@end

