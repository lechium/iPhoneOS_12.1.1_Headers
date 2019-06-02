/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIView, NCNotificationManagementBlueButton;

@interface NCNotificationManagementView : UIView {

	UIImageView* _icon;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _topSeparator;
	NCNotificationManagementBlueButton* _offButton;
	NCNotificationManagementBlueButton* _deliveryButton;
	UILabel* _explanation;
	UIView* _bottomSeparator;
	BOOL _isCriticalAlert;

}

@property (nonatomic,readonly) NCNotificationManagementBlueButton * deliveryButton;              //@synthesize deliveryButton=_deliveryButton - In the implementation block
@property (nonatomic,readonly) NCNotificationManagementBlueButton * offButton;                   //@synthesize offButton=_offButton - In the implementation block
-(id)initWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3 sectionSettings:(id)arg4 criticalAlert:(BOOL)arg5 ;
-(NCNotificationManagementBlueButton *)deliveryButton;
-(NCNotificationManagementBlueButton *)offButton;
-(void)_configureIconIfNeccessary:(id)arg1 ;
-(void)_configureTitleIfNeccessary:(id)arg1 ;
-(void)_configureSubtitleIfNeccessary:(id)arg1 ;
-(void)_configureDeliveryButtonIfNeccessary:(id)arg1 ;
-(void)_configureExplanationIfNeccessary:(id)arg1 ;
-(void)_configureOffButtonIfNeccessary;
-(id)_newSeparatorView;
-(void)_configureTopSeparatorIfNeccessary;
-(CGSize)_titleSizeForPlatterWidth:(double)arg1 ;
-(CGSize)_explanationSizeForPlatterWidth:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_separatorHeight;
@end

