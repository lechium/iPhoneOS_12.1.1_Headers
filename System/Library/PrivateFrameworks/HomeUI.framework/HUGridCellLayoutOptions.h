/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUGridDisplayOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HUGridCellBackgroundDisplayOptions, UIVisualEffect, UIFont, NSString;

@interface HUGridCellLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying> {

	unsigned long long _contentColorStyle;
	HUGridCellBackgroundDisplayOptions* _backgroundDisplayOptions;
	UIVisualEffect* _vibrancyEffect;
	UIVisualEffect* _secondaryVibrancyEffect;
	double _secondaryContentDimmingFactor;
	UIFont* _font;
	double _iconSize;
	double _cellInnerMargin;
	double _cellCornerRadius;
	double _cellScaleFactor;
	long long _cellSizeSubclass;

}

@property (nonatomic,copy) HUGridCellBackgroundDisplayOptions * backgroundDisplayOptions;              //@synthesize backgroundDisplayOptions=_backgroundDisplayOptions - In the implementation block
@property (nonatomic,retain) UIVisualEffect * vibrancyEffect;                                          //@synthesize vibrancyEffect=_vibrancyEffect - In the implementation block
@property (nonatomic,retain) UIVisualEffect * secondaryVibrancyEffect;                                 //@synthesize secondaryVibrancyEffect=_secondaryVibrancyEffect - In the implementation block
@property (assign,nonatomic) double secondaryContentDimmingFactor;                                     //@synthesize secondaryContentDimmingFactor=_secondaryContentDimmingFactor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                            //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double iconSize;                                                          //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) double cellInnerMargin;                                                   //@synthesize cellInnerMargin=_cellInnerMargin - In the implementation block
@property (assign,nonatomic) double cellCornerRadius;                                                  //@synthesize cellCornerRadius=_cellCornerRadius - In the implementation block
@property (assign,nonatomic) double cellScaleFactor;                                                   //@synthesize cellScaleFactor=_cellScaleFactor - In the implementation block
@property (nonatomic,readonly) long long cellSizeSubclass;                                             //@synthesize cellSizeSubclass=_cellSizeSubclass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long contentColorStyle;                                     //@synthesize contentColorStyle=_contentColorStyle - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(unsigned long long)contentColorStyle;
-(void)setContentColorStyle:(unsigned long long)arg1 ;
-(double)cellCornerRadius;
-(double)secondaryContentDimmingFactor;
-(void)setVibrancyEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)vibrancyEffect;
-(HUGridCellBackgroundDisplayOptions *)backgroundDisplayOptions;
-(double)cellInnerMargin;
-(UIVisualEffect *)secondaryVibrancyEffect;
-(void)setSecondaryContentDimmingFactor:(double)arg1 ;
-(long long)cellSizeSubclass;
-(id)initWithCellSizeSubclass:(long long)arg1 ;
-(void)setBackgroundDisplayOptions:(HUGridCellBackgroundDisplayOptions *)arg1 ;
-(void)setSecondaryVibrancyEffect:(UIVisualEffect *)arg1 ;
-(void)setCellInnerMargin:(double)arg1 ;
-(void)setCellCornerRadius:(double)arg1 ;
-(void)setCellScaleFactor:(double)arg1 ;
-(double)cellScaleFactor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(double)iconSize;
-(void)setIconSize:(double)arg1 ;
@end

