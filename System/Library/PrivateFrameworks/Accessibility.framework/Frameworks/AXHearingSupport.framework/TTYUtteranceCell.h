/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol TTYUtteranceCellDelegate;
@class UITextView, CALayer, TTYUtterance, NSString;

@interface TTYUtteranceCell : UITableViewCell <UITextViewDelegate> {

	UITextView* _textView;
	CALayer* _bubbleLayer;
	BOOL _editingUtterance;
	TTYUtterance* _utterance;
	id<TTYUtteranceCellDelegate> _delegate;

}

@property (nonatomic,retain) TTYUtterance * utterance;                                     //@synthesize utterance=_utterance - In the implementation block
@property (assign,getter=isEditingUtterance,nonatomic) BOOL editingUtterance;              //@synthesize editingUtterance=_editingUtterance - In the implementation block
@property (assign,nonatomic,__weak) id<TTYUtteranceCellDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForUtterance:(id)arg1 andWidth:(double)arg2 ;
-(void)setUtterance:(TTYUtterance *)arg1 ;
-(TTYUtterance *)utterance;
-(BOOL)_accessibilityRealtimeCompleted;
-(BOOL)_accessibilityRealtimeHasUnread;
-(void)_accessibilityHandleATFocused:(BOOL)arg1 assistiveTech:(id)arg2 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)updateUtterance:(id)arg1 ;
-(void)_accessibilitySetIsUnread:(BOOL)arg1 ;
-(void)adjustTextViewSize;
-(BOOL)_accessibilityIsUnread;
-(void)setSendProgressIndex:(unsigned long long)arg1 ;
-(BOOL)isEditingUtterance;
-(void)setEditingUtterance:(BOOL)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)setDelegate:(id<TTYUtteranceCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<TTYUtteranceCellDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSRange)selectedTextRange;
-(void)updateLayout;
-(void)textViewDidChange:(id)arg1 ;
@end

