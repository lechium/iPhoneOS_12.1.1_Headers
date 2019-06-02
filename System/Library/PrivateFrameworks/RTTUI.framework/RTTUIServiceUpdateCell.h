/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIConversationCellDelegate;
@class UITextView;

@interface RTTUIServiceUpdateCell : UITableViewCell {

	UITextView* _textView;
	id<RTTUIConversationCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIConversationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightForWidth:(double)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)adjustTextViewSize;
-(id)serviceMessage;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)setDelegate:(id<RTTUIConversationCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<RTTUIConversationCellDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateLayout;
@end

