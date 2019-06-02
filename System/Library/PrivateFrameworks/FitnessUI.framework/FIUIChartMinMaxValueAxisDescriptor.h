/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <libobjc.A.dylib/FIUIChartAxisDescriptor.h>

@class UIFont, UIColor, NSNumber, NSString;

@interface FIUIChartMinMaxValueAxisDescriptor : NSObject <FIUIChartAxisDescriptor> {

	UIFont* _labelFont;
	UIColor* _unhighlightedLabelColor;
	UIColor* _highlightedLabelColor;
	double _axisDescriptorPadding;
	UIColor* _shadowColor;
	double _shadowBlur;
	NSNumber* _minValue;
	NSNumber* _maxValue;
	NSNumber* _highlightedValue;
	CGSize _shadowOffset;

}

@property (nonatomic,retain) NSNumber * minValue;                               //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxValue;                               //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) NSNumber * highlightedValue;                       //@synthesize highlightedValue=_highlightedValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIFont * labelFont;                                //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) UIColor * unhighlightedLabelColor;                 //@synthesize unhighlightedLabelColor=_unhighlightedLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedLabelColor;                   //@synthesize highlightedLabelColor=_highlightedLabelColor - In the implementation block
@property (assign,nonatomic) double axisDescriptorPadding;                      //@synthesize axisDescriptorPadding=_axisDescriptorPadding - In the implementation block
@property (assign,nonatomic) unsigned long long labelAlignment; 
@property (assign,nonatomic) unsigned long long subLabelAlignment; 
@property (nonatomic,retain) UIFont * subLabelFont; 
@property (nonatomic,retain) UIColor * selectedLabelColor; 
@property (nonatomic,retain) UIColor * highlightedSubLabelColor; 
@property (nonatomic,retain) UIColor * unhighlightedSubLabelColor; 
@property (assign,nonatomic) double subAxisDescriptorPadding; 
@property (assign,nonatomic) BOOL hideClippedLabels; 
@property (nonatomic,retain) UIColor * shadowColor;                             //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                               //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowBlur;                                 //@synthesize shadowBlur=_shadowBlur - In the implementation block
-(void)setMaxValue:(NSNumber *)arg1 ;
-(NSNumber *)maxValue;
-(UIFont *)labelFont;
-(id)axisLabels;
-(void)setHighlightedValue:(NSNumber *)arg1 ;
-(double)axisDescriptorPadding;
-(Class)expectedDataType;
-(UIColor *)unhighlightedLabelColor;
-(void)setUnhighlightedLabelColor:(UIColor *)arg1 ;
-(UIColor *)highlightedLabelColor;
-(void)setHighlightedLabelColor:(UIColor *)arg1 ;
-(void)setAxisDescriptorPadding:(double)arg1 ;
-(NSNumber *)highlightedValue;
-(id)_axisLabelForValue:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)setLabelFont:(UIFont *)arg1 ;
-(void)setMinValue:(NSNumber *)arg1 ;
-(NSNumber *)minValue;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(double)shadowBlur;
-(void)setShadowBlur:(double)arg1 ;
@end

