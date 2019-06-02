/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, NSArray, UIColor;

@interface _TVStarHistogram : UIView {

	UIImage* _starImage;
	NSArray* _starBars;
	UIColor* _barEmptyColor;
	UIColor* _barFillColor;
	double _lineSpacing;

}

@property (nonatomic,copy) NSArray * starBars;                     //@synthesize starBars=_starBars - In the implementation block
@property (nonatomic,retain) UIImage * starImage;                  //@synthesize starImage=_starImage - In the implementation block
@property (nonatomic,retain) UIColor * barEmptyColor;              //@synthesize barEmptyColor=_barEmptyColor - In the implementation block
@property (nonatomic,retain) UIColor * barFillColor;               //@synthesize barFillColor=_barFillColor - In the implementation block
@property (assign,nonatomic) double lineSpacing;                   //@synthesize lineSpacing=_lineSpacing - In the implementation block
+(id)_histogramViewWithElement:(id)arg1 existingView:(id)arg2 ;
+(id)histogramViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)setStarBars:(NSArray *)arg1 ;
-(void)setStarImage:(UIImage *)arg1 ;
-(void)setBarEmptyColor:(UIColor *)arg1 ;
-(void)setBarFillColor:(UIColor *)arg1 ;
-(NSArray *)starBars;
-(UIImage *)starImage;
-(UIColor *)barEmptyColor;
-(UIColor *)barFillColor;
-(BOOL)canBecomeFocused;
-(void)drawRect:(CGRect)arg1 ;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
@end

