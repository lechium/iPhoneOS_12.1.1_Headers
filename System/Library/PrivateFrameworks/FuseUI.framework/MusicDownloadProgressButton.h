/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, CADisplayLink, SKUIItemOfferButton, CAMediaTimingFunction;

@interface MusicDownloadProgressButton : UIControl {

	UIImageView* _addToLibraryOrDownloadImageView;
	double _currentAnimatedProgress;
	CADisplayLink* _displayLink;
	UIImageView* _finishedImageView;
	double _initialAnimatedProgress;
	BOOL _isAnimatingProgress;
	SKUIItemOfferButton* _itemOfferButton;
	CGSize _lastLayoutSize;
	double _progressAnimationEndTime;
	double _progressAnimationStartTime;
	CAMediaTimingFunction* _progressAnimationTimingFunction;
	long long _progressType;
	double _progress;
	long long _style;

}

@property (assign,nonatomic) long long progressType;              //@synthesize progressType=_progressType - In the implementation block
@property (assign,nonatomic) double progress;                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) long long style;                   //@synthesize style=_style - In the implementation block
+(id)_finishedImageForLayoutSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(long long)progressType;
-(void)setProgressType:(long long)arg1 ;
-(void)_reloadForCurrentStateForInitialSetup:(BOOL)arg1 previousProgressType:(long long)arg2 ;
-(BOOL)_usesDrawingForProgressType:(long long)arg1 ;
-(BOOL)_needsAddToLibraryOrDownloadImageViewForProgressType:(long long)arg1 ;
-(BOOL)_needsFinishedImageViewForProgressType:(long long)arg1 ;
-(void)_handleDisplayLinkDidFire:(id)arg1 ;
-(void)_stopProgressAnimation;
-(id)_addToLibraryOrDownloadImage;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)style;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)setProgress:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)progress;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end

