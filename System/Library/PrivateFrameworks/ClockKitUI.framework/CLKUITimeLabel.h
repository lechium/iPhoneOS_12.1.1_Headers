/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKTimeFormatterObserver.h>
#import <libobjc.A.dylib/CLKTimeFormatterDelegate.h>
#import <libobjc.A.dylib/CLKUILabel.h>

@protocol _CLKUITimeLabelManager;
@class UIFont, UIColor, NSString, NSAttributedString, CLKUITimeLabelStyle, CLKDevice, CLKTimeFormatter;

@interface CLKUITimeLabel : UIView <CLKTimeFormatterObserver, CLKTimeFormatterDelegate, CLKUILabel> {

	unsigned long long _options;
	id<_CLKUITimeLabelManager> _labelManager;
	BOOL _styleTransitioning;
	double _styleTransitionFraction;
	CGRect _styleTransitionEndFrame;
	CLKUITimeLabelStyle* _fromStyle;
	id<_CLKUITimeLabelManager> _fromLabelManager;
	double _fadeStart;
	double _fadeEnd;
	NSString* _timeText;
	BOOL _showsDesignator;
	BOOL _paused;
	BOOL _showSeconds;
	CLKDevice* _device;
	CLKTimeFormatter* _timeFormatter;
	double _maxWidth;
	/*^block*/id _didResizeHandler;
	CLKUITimeLabelStyle* _style;

}

@property (nonatomic,copy) CLKUITimeLabelStyle * style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                            //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CLKTimeFormatter * timeFormatter;              //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (assign,nonatomic) BOOL showsDesignator;                            //@synthesize showsDesignator=_showsDesignator - In the implementation block
@property (assign,nonatomic) BOOL paused;                                     //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) double maxWidth;                                 //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,readonly) CGSize intrinsicSize; 
@property (nonatomic,copy) id didResizeHandler;                               //@synthesize didResizeHandler=_didResizeHandler - In the implementation block
@property (assign,nonatomic) BOOL showSeconds;                                //@synthesize showSeconds=_showSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
+(id)labelWithOptions:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)labelWithOptions:(unsigned long long)arg1 ;
-(CLKTimeFormatter *)timeFormatter;
-(id)identifyingInfoForTimeFormatter:(id)arg1 ;
-(void)setShowsDesignator:(BOOL)arg1 ;
-(id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(id)_newLabelManager;
-(void)_resizeIfNecessary;
-(void)_cancelAnimation;
-(void)setThreeDigitFont:(id)arg1 fourDigitFont:(id)arg2 designatorFont:(id)arg3 ;
-(void)cleanupAfterStyleTransition;
-(void)setStyleTransitionFraction:(double)arg1 ;
-(void)_scaleTransitionLabels;
-(void)_fadeTransitionLabels;
-(id)initWithTimeLabelOptions:(unsigned long long)arg1 ;
-(void)prepareToTransitionToStyle:(id)arg1 ;
-(CGSize)styleTransitionEndSize;
-(CGSize)styleTransitionCurrentSize;
-(BOOL)showsDesignator;
-(CLKDevice *)device;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(UIEdgeInsets)opticalInsets;
-(void)setTimeFont:(id)arg1 designatorFont:(id)arg2 ;
-(id)didResizeHandler;
-(void)setDidResizeHandler:(id)arg1 ;
-(void)timeFormatterTextDidChange:(id)arg1 ;
-(void)setShowSeconds:(BOOL)arg1 ;
-(void)_enumerateUnderlyingLabelsWithBlock:(/*^block*/id)arg1 ;
-(id)_newUnderlyingLabel:(BOOL)arg1 ;
-(BOOL)showSeconds;
-(void)setBlinkingPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)sizeToFit;
-(void)setStyle:(CLKUITimeLabelStyle *)arg1 ;
-(CLKUITimeLabelStyle *)style;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)didMoveToWindow;
-(void)setTimeOffset:(double)arg1 ;
-(unsigned long long)options;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(double)_lastLineBaseline;
-(double)maxWidth;
-(long long)textAlignment;
-(void)setPaused:(BOOL)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(void)setMaxWidth:(double)arg1 ;
-(CGSize)intrinsicSize;
-(BOOL)paused;
@end

