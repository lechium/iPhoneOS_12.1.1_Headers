/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, NSParagraphStyle, UITextView, CAGradientLayer;

@interface SFDialogTextView : UIView {

	NSString* _title;
	NSString* _message;
	UIFont* _titleFont;
	UIFont* _messageFont;
	UIFont* _messageFontWithTitle;
	NSParagraphStyle* _titleParagraphStyle;
	UITextView* _textView;
	double _preferredMaxLayoutWidth;
	CAGradientLayer* _topGradient;
	CAGradientLayer* _bottomGradient;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)_updateFontStyling;
-(void)_updateText;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMessage:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)flashScrollIndicators;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
@end

