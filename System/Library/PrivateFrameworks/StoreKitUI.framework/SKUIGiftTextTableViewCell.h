/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UIView, UILabel, UITextView, NSString;

@interface SKUIGiftTextTableViewCell : UITableViewCell <UITextViewDelegate> {

	UIView* _bottomBorderView;
	UILabel* _label;
	long long _maximumCharacterCount;
	UILabel* _placeholderLabel;
	UITextView* _textView;
	UIView* _topBorderView;

}

@property (nonatomic,copy) NSString * label; 
@property (assign,nonatomic) long long maximumCharacterCount;              //@synthesize maximumCharacterCount=_maximumCharacterCount - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,retain) UITextView * textView;                        //@synthesize textView=_textView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newTextView;
-(void)setMaximumCharacterCount:(long long)arg1 ;
-(long long)maximumCharacterCount;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(UITextView *)textView;
@end

