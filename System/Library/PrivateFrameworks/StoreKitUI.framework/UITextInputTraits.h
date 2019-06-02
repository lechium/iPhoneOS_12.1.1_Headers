/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UITextInputPasswordRules;


@protocol UITextInputTraits <NSObject>
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
@optional
-(void)setSecureTextEntry:(BOOL)arg1;
-(void)setAutocorrectionType:(long long)arg1;
-(void)setAutocapitalizationType:(long long)arg1;
-(void)setSmartQuotesType:(long long)arg1;
-(void)setSmartDashesType:(long long)arg1;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
-(void)setReturnKeyType:(long long)arg1;
-(void)setKeyboardType:(long long)arg1;
-(void)setSpellCheckingType:(long long)arg1;
-(void)setKeyboardAppearance:(long long)arg1;
-(void)setTextContentType:(id)arg1;
-(void)setSmartInsertDeleteType:(long long)arg1;
-(long long)keyboardType;
-(long long)spellCheckingType;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(long long)keyboardAppearance;
-(long long)returnKeyType;
-(BOOL)enablesReturnKeyAutomatically;
-(BOOL)isSecureTextEntry;
-(NSString *)textContentType;
-(long long)smartInsertDeleteType;
-(long long)smartQuotesType;
-(long long)smartDashesType;
-(UITextInputPasswordRules *)passwordRules;
-(void)setPasswordRules:(id)arg1;

@end

