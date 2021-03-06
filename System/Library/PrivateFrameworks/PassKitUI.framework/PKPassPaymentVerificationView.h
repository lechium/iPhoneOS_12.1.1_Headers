/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPassFooterContentView.h>
#import <libobjc.A.dylib/PKPaymentVerificationControllerDelegate.h>

@class UILabel, PKContinuousButton, UIActivityIndicatorView, UIButton, UIView, PKPaymentVerificationController, NSString;

@interface PKPassPaymentVerificationView : PKPassFooterContentView <PKPaymentVerificationControllerDelegate> {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	PKContinuousButton* _button;
	UIActivityIndicatorView* _activityIndicator;
	UIButton* _alternateButton;
	UIView* _bottomRule;
	PKPaymentVerificationController* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateButton;
-(id)_activityIndicator;
-(void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeVerificationPresentation;
-(id)_bodyLabel;
-(id)_bottomRule;
-(id)_alternateButton;
-(id)initWithPass:(id)arg1 passView:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)_titleLabel;
-(id)_button;
@end

