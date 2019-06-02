/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentPreferenceCell.h>

@class UIButton, NSString;

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell {

	UIButton* _button;
	/*^block*/id _handler;
	NSString* _buttonTitle;

}

@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;              //@synthesize buttonTitle=_buttonTitle - In the implementation block
-(id)pk_childrenForAppearance;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
@end

