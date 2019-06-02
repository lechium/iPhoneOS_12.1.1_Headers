/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CPSNavigationAlertFocusButton;

@interface CPSNavigationAlertButtonView : UIView {

	CPSNavigationAlertFocusButton* _primaryButton;
	CPSNavigationAlertFocusButton* _secondaryButton;

}

@property (nonatomic,retain) CPSNavigationAlertFocusButton * primaryButton;                //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) CPSNavigationAlertFocusButton * secondaryButton;              //@synthesize secondaryButton=_secondaryButton - In the implementation block
-(void)setPrimaryButton:(CPSNavigationAlertFocusButton *)arg1 ;
-(void)setSecondaryButton:(CPSNavigationAlertFocusButton *)arg1 ;
-(CPSNavigationAlertFocusButton *)secondaryButton;
-(CPSNavigationAlertFocusButton *)primaryButton;
-(id)initWithPrimaryAction:(id)arg1 secondaryAction:(id)arg2 progressView:(id)arg3 ;
@end

