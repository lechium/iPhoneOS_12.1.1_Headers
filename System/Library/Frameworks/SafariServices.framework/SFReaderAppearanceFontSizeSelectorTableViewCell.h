/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SFReaderAppearanceFontSizeSelectorDelegate;
@class UIView, UIButton;

@interface SFReaderAppearanceFontSizeSelectorTableViewCell : UITableViewCell {

	UIView* _verticalSeparatorView;
	UIButton* _decreaseFontSizeButton;
	UIButton* _increaseFontSizeButton;
	id<SFReaderAppearanceFontSizeSelectorDelegate> _delegate;

}

@property (nonatomic,retain) UIButton * decreaseFontSizeButton;                                           //@synthesize decreaseFontSizeButton=_decreaseFontSizeButton - In the implementation block
@property (nonatomic,retain) UIButton * increaseFontSizeButton;                                           //@synthesize increaseFontSizeButton=_increaseFontSizeButton - In the implementation block
@property (assign,nonatomic,__weak) id<SFReaderAppearanceFontSizeSelectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)requiredHeight;
-(void)_createFontSizeSelectorButtons;
-(void)_decreaseButtonAction:(id)arg1 ;
-(void)_increaseButtonAction:(id)arg1 ;
-(UIButton *)decreaseFontSizeButton;
-(void)setDecreaseFontSizeButton:(UIButton *)arg1 ;
-(UIButton *)increaseFontSizeButton;
-(void)setIncreaseFontSizeButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<SFReaderAppearanceFontSizeSelectorDelegate>)arg1 ;
-(id<SFReaderAppearanceFontSizeSelectorDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
