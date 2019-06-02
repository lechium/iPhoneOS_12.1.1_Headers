/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class SBUILegibilityLabel, UIView, _UILegibilitySettings, UIFont, NSString;

@interface SBFLockScreenDateSubtitleView : UIView {

	SBUILegibilityLabel* _label;
	UIView* _accessoryView;
	UIView* _backgroundView;
	_UILegibilitySettings* _legibilitySettings;
	double _strength;
	double _customInterItemSpacing;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,readonly) double baselineOffsetFromOrigin; 
@property (nonatomic,readonly) double baselineOffsetFromBottom; 
@property (nonatomic,retain) NSString * string; 
@property (nonatomic,retain) UIView * accessoryView;                                  //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) double customInterItemSpacing;                           //@synthesize customInterItemSpacing=_customInterItemSpacing - In the implementation block
+(double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2 ;
+(SCD_Struct_SB1)labelFontMetrics;
+(id)labelFont;
-(id)initWithString:(id)arg1 accessoryView:(id)arg2 ;
-(CGRect)subtitleLabelFrame;
-(double)baselineOffsetFromOrigin;
-(CGRect)backgroundViewFrame;
-(double)customInterItemSpacing;
-(void)setCustomInterItemSpacing:(double)arg1 ;
-(CGRect)accessoryViewFrame;
-(double)interItemSpacing;
-(id)init;
-(void)dealloc;
-(NSString *)string;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)backgroundView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)setString:(NSString *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(double)baselineOffsetFromBottom;
@end
