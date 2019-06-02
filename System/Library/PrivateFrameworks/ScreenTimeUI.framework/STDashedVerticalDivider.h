/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, UIImageView, UILabel, NSLayoutConstraint;

@interface STDashedVerticalDivider : UIView {

	NSString* _labelText;
	NSLayoutXAxisAnchor* _dashedLineCenterXAnchor;
	NSLayoutYAxisAnchor* _labelLastBaselineAnchor;
	UIImageView* _dashedLine;
	UILabel* _label;
	NSLayoutConstraint* _labelLeftConstraint;

}

@property (nonatomic,retain) UIImageView * dashedLine;                                          //@synthesize dashedLine=_dashedLine - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelLeftConstraint;                          //@synthesize labelLeftConstraint=_labelLeftConstraint - In the implementation block
@property (nonatomic,copy) NSString * labelText;                                                //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,copy,readonly) NSLayoutXAxisAnchor * dashedLineCenterXAnchor;              //@synthesize dashedLineCenterXAnchor=_dashedLineCenterXAnchor - In the implementation block
@property (nonatomic,copy,readonly) NSLayoutYAxisAnchor * labelLastBaselineAnchor;              //@synthesize labelLastBaselineAnchor=_labelLastBaselineAnchor - In the implementation block
+(id)dashedLineImage;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(NSLayoutConstraint *)labelLeftConstraint;
-(NSLayoutXAxisAnchor *)dashedLineCenterXAnchor;
-(NSLayoutYAxisAnchor *)labelLastBaselineAnchor;
-(UIImageView *)dashedLine;
-(void)setDashedLine:(UIImageView *)arg1 ;
-(void)setLabelLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(id)init;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

