/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyInput.h>

@protocol _TVSearchBarDelegate;
@class UITextField, UIActivityIndicatorView, NSString, UITextInputPasswordRules;

@interface _TVSearchBar : UIView <UIKeyInput> {

	UITextField* _textField;
	id<_TVSearchBarDelegate> _delegate;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) NSString * text; 
@property (nonatomic,readonly) UITextField * textField;                                    //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<_TVSearchBarDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL hasText; 
+(id)_listItemSelectedOverlayFillColor;
+(id)_listItemTextColor;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)_submit:(id)arg1 ;
-(void)_insertSpace:(id)arg1 ;
-(void)setDelegate:(id<_TVSearchBarDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(id<_TVSearchBarDelegate>)delegate;
-(UITextField *)textField;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)canBecomeFirstResponder;
-(void)deleteBackward;
-(id)keyCommands;
-(void)insertText:(id)arg1 ;
-(BOOL)hasText;
@end

