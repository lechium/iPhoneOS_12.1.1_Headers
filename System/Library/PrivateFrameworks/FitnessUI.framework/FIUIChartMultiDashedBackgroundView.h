/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIChartBackgroundView.h>

@class UIImageView, UIColor;

@interface FIUIChartMultiDashedBackgroundView : FIUIChartBackgroundView {

	UIImageView* _imageView;
	UIColor* _lineColor;
	UIColor* _subLineColor;
	double _previousWidth;
	BOOL _backgroundIsTransparent;
	double _lineWidth;
	double _sublineInset;
	unsigned long long _numLines;
	unsigned long long _sublineInterval;

}

@property (assign,nonatomic) double lineWidth;                                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double sublineInset;                             //@synthesize sublineInset=_sublineInset - In the implementation block
@property (assign,nonatomic) unsigned long long numLines;                     //@synthesize numLines=_numLines - In the implementation block
@property (assign,nonatomic) unsigned long long sublineInterval;              //@synthesize sublineInterval=_sublineInterval - In the implementation block
@property (assign,nonatomic) BOOL backgroundIsTransparent;                    //@synthesize backgroundIsTransparent=_backgroundIsTransparent - In the implementation block
+(id)calculateRoundedLinePositionsForTotalWidth:(double)arg1 lineWidth:(double)arg2 numberOfLines:(unsigned long long)arg3 roundedInView:(id)arg4 ;
-(void)setNumLines:(unsigned long long)arg1 ;
-(unsigned long long)numLines;
-(id)_stretchableLinesPatternImage;
-(void)_setNeedsRegenerateBackgroundImage;
-(void)setBackgroundIsTransparent:(BOOL)arg1 ;
-(void)setSublineInterval:(unsigned long long)arg1 ;
-(void)setSublineInset:(double)arg1 ;
-(double)sublineInset;
-(unsigned long long)sublineInterval;
-(BOOL)backgroundIsTransparent;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
@end

