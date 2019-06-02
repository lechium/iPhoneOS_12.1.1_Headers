/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, PKContinuousButton, UIActivityIndicatorView, UIView, PKPeerPaymentAccountResolutionController, PKPeerPaymentContactResolver;

@interface PKPassPeerPaymentAccountResolutionView : UIView {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	PKContinuousButton* _button;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _bottomRule;
	PKPeerPaymentAccountResolutionController* _peerPaymentAccountResolutionController;
	unsigned long long _peerPaymentAccountResolution;
	PKPeerPaymentContactResolver* _contactResolver;
	BOOL _showSpinner;

}
-(id)_activityIndicator;
-(void)_showSpinner:(BOOL)arg1 ;
-(id)_bodyText;
-(id)_titleText;
-(id)_contactResolver;
-(id)_buttonText;
-(id)_bodyLabel;
-(id)_bottomRule;
-(id)initWithAccountResolutionController:(id)arg1 ;
-(BOOL)_displaysTitleLabel;
-(void)_handleButtonPressed:(id)arg1 ;
-(void)layoutSubviews;
-(id)_titleLabel;
-(id)_button;
@end

