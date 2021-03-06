/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKMessageAcknowledgmentPickerBarItemViewDelegate;
@class CKAcknowledgmentGlyphView, UIButton, CKMessageAcknowledgmentDraftDescriptor;

@interface CKMessageAcknowledgmentPickerBarItemView : UIView {

	BOOL _selected;
	long long _messageAcknowledgmentType;
	id<CKMessageAcknowledgmentPickerBarItemViewDelegate> _delegate;
	CKAcknowledgmentGlyphView* _acknowledgmentGlyphView;
	UIButton* _itemButton;
	CKMessageAcknowledgmentDraftDescriptor* _draft;

}

@property (nonatomic,retain) UIButton * itemButton;                                                             //@synthesize itemButton=_itemButton - In the implementation block
@property (nonatomic,readonly) BOOL displaySelected; 
@property (assign,nonatomic,__weak) id<CKMessageAcknowledgmentPickerBarItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                                   //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) CKAcknowledgmentGlyphView * acknowledgmentGlyphView;                             //@synthesize acknowledgmentGlyphView=_acknowledgmentGlyphView - In the implementation block
@property (nonatomic,readonly) CKMessageAcknowledgmentDraftDescriptor * draft;                                  //@synthesize draft=_draft - In the implementation block
@property (nonatomic,readonly) long long messageAcknowledgmentType;                                             //@synthesize messageAcknowledgmentType=_messageAcknowledgmentType - In the implementation block
-(long long)messageAcknowledgmentType;
-(void)itemButtonTapped:(id)arg1 ;
-(void)setItemButton:(UIButton *)arg1 ;
-(UIButton *)itemButton;
-(void)configureWithMessageAcknowledgmentDescriptor:(id)arg1 initiallySelected:(BOOL)arg2 ;
-(BOOL)displaySelected;
-(CKAcknowledgmentGlyphView *)acknowledgmentGlyphView;
-(CKMessageAcknowledgmentDraftDescriptor *)draft;
-(void)setDelegate:(id<CKMessageAcknowledgmentPickerBarItemViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<CKMessageAcknowledgmentPickerBarItemViewDelegate>)delegate;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
@end

