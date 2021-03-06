/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIButton, UILabel;

@interface CKStickerDetailNavigationBar : UIVisualEffectView {

	UIButton* _closeButton;
	UILabel* _titleLabel;
	UIEdgeInsets _parentLayoutMargins;

}

@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                        //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets parentLayoutMargins;              //@synthesize parentLayoutMargins=_parentLayoutMargins - In the implementation block
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIEdgeInsets)parentLayoutMargins;
-(UIButton *)closeButton;
-(void)setParentLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(id)initWithEffect:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

