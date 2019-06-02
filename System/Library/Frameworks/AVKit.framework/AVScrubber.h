/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UISlider.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <AVKit/AVExternalGestureRecognizerPreventing.h>

@protocol AVScrubberDelegate;
@class UISelectionFeedbackGenerator, UIView, NSMutableArray, NSArray, UIScrollView, UIImageView, NSTimer, NSString;

@interface AVScrubber : UISlider <UIScrollViewDelegate, AVExternalGestureRecognizerPreventing> {

	CGPoint _previousTouchLocationInView;
	double _trackingStartTime;
	float _previousValue;
	double _previousValueChangeTime;
	double _currentValueChangedTime;
	BOOL _didHaveLessThanFullScrubbingSpeedSinceTrackingBegin;
	BOOL _scrollScrubbing;
	BOOL _slowKnobMovementDetected;
	BOOL _shouldRecoverFromPrecisionScrubbingIfNeeded;
	BOOL _collapsed;
	BOOL _included;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	float _estimatedFrameRate;
	float _rate;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	UIView* _loadedTrackOverlayView;
	NSMutableArray* _previousScrubberVelocities;
	id<AVScrubberDelegate> _delegate;
	NSArray* _loadedTimeRanges;
	long long _scrubbingSpeed;
	double _resolution;
	UIScrollView* _scrollView;
	UIImageView* _currentThumbView;
	NSTimer* _updateSlowKnobMovementDetectedTimer;
	double _timestampWhenTrackingEnded;
	CGSize _extrinsicContentSize;
	NSDirectionalEdgeInsets _hitRectInsets;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,getter=isScrollScrubbing,nonatomic) BOOL scrollScrubbing;                        //@synthesize scrollScrubbing=_scrollScrubbing - In the implementation block
@property (assign,nonatomic) long long scrubbingSpeed;                                             //@synthesize scrubbingSpeed=_scrubbingSpeed - In the implementation block
@property (assign,nonatomic) double resolution;                                                    //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) BOOL slowKnobMovementDetected;                                        //@synthesize slowKnobMovementDetected=_slowKnobMovementDetected - In the implementation block
@property (assign,nonatomic) BOOL shouldRecoverFromPrecisionScrubbingIfNeeded;                     //@synthesize shouldRecoverFromPrecisionScrubbingIfNeeded=_shouldRecoverFromPrecisionScrubbingIfNeeded - In the implementation block
@property (nonatomic,readonly) UIView * loadedTrackOverlayView;                                    //@synthesize loadedTrackOverlayView=_loadedTrackOverlayView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * currentThumbView;                                //@synthesize currentThumbView=_currentThumbView - In the implementation block
@property (nonatomic,retain) NSMutableArray * previousScrubberVelocities;                          //@synthesize previousScrubberVelocities=_previousScrubberVelocities - In the implementation block
@property (nonatomic,retain) NSTimer * updateSlowKnobMovementDetectedTimer;                        //@synthesize updateSlowKnobMovementDetectedTimer=_updateSlowKnobMovementDetectedTimer - In the implementation block
@property (assign,nonatomic) double timestampWhenTrackingEnded;                                    //@synthesize timestampWhenTrackingEnded=_timestampWhenTrackingEnded - In the implementation block
@property (nonatomic,readonly) UISelectionFeedbackGenerator * feedbackGenerator;                   //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) CGSize extrinsicContentSize;                                          //@synthesize extrinsicContentSize=_extrinsicContentSize - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                    //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                      //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                          //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                         //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
@property (assign,nonatomic,__weak) id<AVScrubberDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * loadedTimeRanges;                                             //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (nonatomic,readonly) NSString * localizedScrubbingSpeedName; 
@property (assign,nonatomic) float estimatedFrameRate;                                             //@synthesize estimatedFrameRate=_estimatedFrameRate - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets hitRectInsets;                                //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (nonatomic,readonly) double timeIntervalSinceTrackingEnded; 
@property (assign,nonatomic) float rate;                                                           //@synthesize rate=_rate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(CGSize)extrinsicContentSize;
-(NSArray *)loadedTimeRanges;
-(BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(CGPoint)arg1 ;
-(UIView *)loadedTrackOverlayView;
-(NSMutableArray *)previousScrubberVelocities;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(float)clampedEstimatedFrameRate;
-(NSString *)localizedScrubbingSpeedName;
-(void)setCurrentThumbView:(UIImageView *)arg1 ;
-(double)timeIntervalSinceTrackingEnded;
-(BOOL)isCollapsedOrExcluded;
-(void)setIncluded:(BOOL)arg1 ;
-(void)endOrCancelTracking;
-(void)updateScrollViewContentSizeAndOffsetIfNeeded;
-(float)normalizedPosition;
-(double)normalizedScrollOffset;
-(float)valueFromScrollView;
-(CGPoint)contentOffsetFromValue;
-(BOOL)_shouldTrackTouchAtPoint:(CGPoint)arg1 ;
-(void)_updateSlowKnobMovementDetected;
-(void)_updateSlowKnobMovementDetectedForTargetValue:(float)arg1 ;
-(void)setPreviousScrubberVelocities:(NSMutableArray *)arg1 ;
-(long long)scrubbingSpeed;
-(void)setScrubbingSpeed:(long long)arg1 ;
-(float)estimatedFrameRate;
-(void)setEstimatedFrameRate:(float)arg1 ;
-(BOOL)isScrollScrubbing;
-(void)setScrollScrubbing:(BOOL)arg1 ;
-(BOOL)slowKnobMovementDetected;
-(void)setSlowKnobMovementDetected:(BOOL)arg1 ;
-(BOOL)shouldRecoverFromPrecisionScrubbingIfNeeded;
-(void)setShouldRecoverFromPrecisionScrubbingIfNeeded:(BOOL)arg1 ;
-(UIImageView *)currentThumbView;
-(NSTimer *)updateSlowKnobMovementDetectedTimer;
-(void)setUpdateSlowKnobMovementDetectedTimer:(NSTimer *)arg1 ;
-(double)timestampWhenTrackingEnded;
-(void)setTimestampWhenTrackingEnded:(double)arg1 ;
-(BOOL)isIncluded;
-(BOOL)hasAlternateAppearance;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(BOOL)hasFullScreenAppearance;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(void)setHitRectInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)hitRectInsets;
-(void)setCollapsed:(BOOL)arg1 ;
-(double)resolution;
-(void)setResolution:(double)arg1 ;
-(void)setDelegate:(id<AVScrubberDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<AVScrubberDelegate>)delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(void)setValue:(float)arg1 ;
-(float)duration;
-(BOOL)isTracking;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)isCollapsed;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
@end

