/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFTitleView.h>

@class BFFPasscodeInputView, UIViewController;

@interface BFFPasscodeView : BFFTitleView {

	BFFPasscodeInputView* _passcodeInputView;
	UIViewController* _passcodeViewController;
	CGRect _currentKeyboardFrame;

}

@property (assign,nonatomic) CGRect currentKeyboardFrame;                                   //@synthesize currentKeyboardFrame=_currentKeyboardFrame - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * passcodeViewController;              //@synthesize passcodeViewController=_passcodeViewController - In the implementation block
-(void)keyboardWillShow:(id)arg1 ;
-(void)setCurrentKeyboardFrame:(CGRect)arg1 ;
-(UIViewController *)passcodeViewController;
-(CGRect)currentKeyboardFrame;
-(void)setPasscodeViewController:(UIViewController *)arg1 ;
-(id)passcodeInputView;
-(void)transitionToPasscodeInput:(id)arg1 delegate:(id)arg2 ;
-(void)animateTransitionToPasscodeInput:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

