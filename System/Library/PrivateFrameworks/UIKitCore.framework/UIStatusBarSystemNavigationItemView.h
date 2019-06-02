/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIButton, NSString;

@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView {

	int _currentLabelCompressionLevel;
	UIButton* _button;
	double _maxWidth;

}

@property (nonatomic,retain) UIButton * button;                             //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double maxWidth;                               //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) int currentLabelCompressionLevel;              //@synthesize currentLabelCompressionLevel=_currentLabelCompressionLevel - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(double)maxWidth;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(double)updateContentsAndWidth;
-(id)accessibilityHUDRepresentation;
-(double)extraRightPadding;
-(double)extraLeftPadding;
-(void)setCurrentLabelCompressionLevel:(int)arg1 ;
-(int)currentLabelCompressionLevel;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(long long)labelLineBreakMode;
-(void)userDidActivateButton:(id)arg1 ;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(BOOL)layoutImageOnTrailingEdge;
-(BOOL)_shouldLayoutImageOnRight;
-(CGSize)_buttonSize;
-(void)setMaxWidth:(double)arg1 ;
@end

