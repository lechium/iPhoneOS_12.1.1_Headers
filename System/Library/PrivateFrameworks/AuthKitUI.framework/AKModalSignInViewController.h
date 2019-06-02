/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <AuthKitUI/AKBaseSignInViewController.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextAlertDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, UITextField, AKRoundedButton, UIView, NSString;

@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, UITextFieldDelegate> {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UITextField* _passwordField;
	AKRoundedButton* _signInButton;
	UIView* _containerView;

}

@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                         //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;                 //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) AKRoundedButton * signInButton;              //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UIView * containerView;                      //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)_isSignInAllowed;
-(void)_startBusyWorkUI;
-(void)_hidebusyWorkUI;
-(void)_passwordRecoveryButtonWasTapped:(id)arg1 ;
-(void)_passwordFieldDidChange:(id)arg1 ;
-(void)_signInButtonTapped:(id)arg1 ;
-(BOOL)_shouldShowForgotGlyph;
-(void)displayAlertForContext:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateViewConstraints;
-(void)_setupViews;
-(void)_setupConstraints;
-(void)_createViews;
-(UILabel *)bodyLabel;
-(AKRoundedButton *)signInButton;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)setPasswordField:(UITextField *)arg1 ;
-(void)setSignInButton:(AKRoundedButton *)arg1 ;
-(id)init;
-(UILabel *)titleLabel;
-(BOOL)becomeFirstResponder;
-(void)viewDidLoad;
-(BOOL)resignFirstResponder;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)passwordField;
@end
