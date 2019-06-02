/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol PKEnterCurrencyAmountViewDelegate;
@class UIView, UITextField, NSString, UIColor, UIFont, NSNumber, UILabel, PKNumberPadInputView, NSNumberFormatter, NSDecimalNumberHandler, NSDecimalNumber;

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate> {

	UIView* _internalInputAccessoryView;
	BOOL _showsDecimalPointButton;
	BOOL _enabled;
	BOOL _showDecimalPointButton;
	UITextField* _amountTextField;
	NSString* _currency;
	UIColor* _textColor;
	UIFont* _amountFont;
	NSNumber* _kerning;
	id<PKEnterCurrencyAmountViewDelegate> _delegate;
	UILabel* _amountLabel;
	PKNumberPadInputView* _numberPad;
	NSNumberFormatter* _amountFormatter;
	NSDecimalNumberHandler* _roundingBehavior;
	NSNumberFormatter* _currencySymbolAmountFormatter;
	NSString* _amountString;

}

@property (nonatomic,retain) UILabel * amountLabel;                                              //@synthesize amountLabel=_amountLabel - In the implementation block
@property (nonatomic,retain) PKNumberPadInputView * numberPad;                                   //@synthesize numberPad=_numberPad - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * amountFormatter;                                //@synthesize amountFormatter=_amountFormatter - In the implementation block
@property (nonatomic,retain) NSDecimalNumberHandler * roundingBehavior;                          //@synthesize roundingBehavior=_roundingBehavior - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * currencySymbolAmountFormatter;                  //@synthesize currencySymbolAmountFormatter=_currencySymbolAmountFormatter - In the implementation block
@property (nonatomic,retain) NSString * amountString;                                            //@synthesize amountString=_amountString - In the implementation block
@property (assign,nonatomic) BOOL showDecimalPointButton;                                        //@synthesize showDecimalPointButton=_showDecimalPointButton - In the implementation block
@property (assign,nonatomic) BOOL showsDecimalPointButton;                                       //@synthesize showsDecimalPointButton=_showsDecimalPointButton - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UITextField * amountTextField;                                    //@synthesize amountTextField=_amountTextField - In the implementation block
@property (nonatomic,retain) NSString * currency;                                                //@synthesize currency=_currency - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * currentAmount; 
@property (nonatomic,copy) UIColor * textColor;                                                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) UIFont * amountFont;                                                  //@synthesize amountFont=_amountFont - In the implementation block
@property (nonatomic,copy) NSNumber * kerning;                                                   //@synthesize kerning=_kerning - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView; 
@property (assign,nonatomic,__weak) id<PKEnterCurrencyAmountViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_createSubviews;
-(void)_updateContent;
-(UITextField *)amountTextField;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(NSDecimalNumber *)currentAmount;
-(void)setCurrentAmount:(NSDecimalNumber *)arg1 ;
-(id)initWithCurrency:(id)arg1 amount:(id)arg2 ;
-(void)setShowsDecimalPointButton:(BOOL)arg1 ;
-(void)setAmountFont:(UIFont *)arg1 ;
-(BOOL)showsDecimalPointButton;
-(void)_createAmountFormatter;
-(id)_formatAmount:(id)arg1 minimumFractionDigits:(unsigned long long)arg2 ;
-(id)_decimalNumberFromString:(id)arg1 ;
-(unsigned long long)_numberOfDecimalPlacesInString:(id)arg1 decimalSeperator:(id)arg2 ;
-(id)_formatAmountForDisplay:(id)arg1 alwaysShowDecimalSeparator:(BOOL)arg2 minimumFractionDigits:(unsigned long long)arg3 useGroupingSeparator:(BOOL)arg4 ;
-(UIFont *)amountFont;
-(UILabel *)amountLabel;
-(void)setAmountLabel:(UILabel *)arg1 ;
-(PKNumberPadInputView *)numberPad;
-(void)setNumberPad:(PKNumberPadInputView *)arg1 ;
-(NSNumberFormatter *)amountFormatter;
-(void)setAmountFormatter:(NSNumberFormatter *)arg1 ;
-(NSDecimalNumberHandler *)roundingBehavior;
-(void)setRoundingBehavior:(NSDecimalNumberHandler *)arg1 ;
-(NSNumberFormatter *)currencySymbolAmountFormatter;
-(void)setCurrencySymbolAmountFormatter:(NSNumberFormatter *)arg1 ;
-(NSString *)amountString;
-(void)setAmountString:(NSString *)arg1 ;
-(BOOL)showDecimalPointButton;
-(void)setShowDecimalPointButton:(BOOL)arg1 ;
-(void)setDelegate:(id<PKEnterCurrencyAmountViewDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id<PKEnterCurrencyAmountViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(UIView *)inputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)viewForLastBaselineLayout;
-(BOOL)enabled;
-(void)dismissKeyboard;
-(NSNumber *)kerning;
-(void)setKerning:(NSNumber *)arg1 ;
-(void)showKeyboard;
-(id)viewForFirstBaselineLayout;
@end
