/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@protocol SBUILockOverlayViewDelegate;
@class UIResizableView, UILabel, UIButton, SBLockOverlayStylePropertiesFactory, _UILegibilitySettings;

@interface SBUILockOverlayView : SBFTouchPassThroughView {

	id<SBUILockOverlayViewDelegate> _delegate;
	UIResizableView* _textContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _actionButton;
	SBLockOverlayStylePropertiesFactory* _underlayPropertiesFactory;
	unsigned long long _style;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic,__weak) id<SBUILockOverlayViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) SBLockOverlayStylePropertiesFactory * underlayPropertiesFactory;              //@synthesize underlayPropertiesFactory=_underlayPropertiesFactory - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;                                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                                                      //@synthesize actionButton=_actionButton - In the implementation block
-(void)_buttonPressed;
-(UILabel *)subtitleLabel;
-(UIButton *)actionButton;
-(double)_maxLabelWidth;
-(id)_actionFont;
-(id)_legibilitySettingsForStyle:(unsigned long long)arg1 ;
-(void)_sizeView:(id)arg1 forFixedWith:(BOOL)arg2 ;
-(unsigned long long)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(CGSize)arg3 ;
-(SBLockOverlayStylePropertiesFactory *)underlayPropertiesFactory;
-(id)_subtitleFont;
-(void)setDelegate:(id<SBUILockOverlayViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(unsigned long long)style;
-(id<SBUILockOverlayViewDelegate>)delegate;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_titleFont;
@end

