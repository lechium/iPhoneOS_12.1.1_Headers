/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIFont, NSString, UIColor;

@interface _UINavigationBarModernPromptView : UIView {

	UILabel* _promptLabel;
	UIFont* _font;
	NSString* _prompt;
	UIColor* _textColor;

}

@property (nonatomic,copy) NSString * prompt;                //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)defaultFontDescriptor;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(UIColor *)textColor;
-(void)_updateFontFromPreviousTraitCollection:(id)arg1 ;
-(void)_updatePromptLabel;
-(double)_promptHeight;
@end

