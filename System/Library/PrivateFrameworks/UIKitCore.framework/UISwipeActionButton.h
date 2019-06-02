/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIView;

@interface UISwipeActionButton : UIButton {

	BOOL _autosizes;
	UIColor* _defaultBackgroundColor;
	UIColor* _highlightedBackgroundColor;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UIView * backgroundView;                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;                  //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (nonatomic,readonly) double buttonWidth; 
@property (assign,nonatomic) BOOL autosizes;                                    //@synthesize autosizes=_autosizes - In the implementation block
@property (nonatomic,readonly) UIView * sourceView; 
+(id)titleFont;
+(double)defaultButtonWidth;
+(id)titleFontOfSize:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)backgroundView;
-(UIView *)sourceView;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(double)buttonWidth;
-(unsigned long long)_defaultLayoutForHeight:(double)arg1 ;
-(long long)_numberOfLinesForTitle:(id)arg1 ;
-(CGRect)_allowableContentRectForContentRect:(CGRect)arg1 ;
-(BOOL)_heightDemandsCompactLayout;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)defaultBackgroundColor;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(BOOL)autosizes;
-(void)setAutosizes:(BOOL)arg1 ;
@end

