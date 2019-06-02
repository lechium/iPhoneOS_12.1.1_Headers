/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <RemoteUI/RemoteUITableFooter.h>

@protocol RUITableFooterDelegate;
@class RUILinkLabel, NSURL, UILabel, UIButton, NSString;

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter> {

	RUILinkLabel* _linkLabel;
	BOOL _usesCustomTextAlignment;
	id<RUITableFooterDelegate> _delegate;
	NSURL* _linkURL;
	/*^block*/id _linkAction;

}

@property (assign,nonatomic,__weak) id<RUITableFooterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * linkURL;                                         //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,copy) id linkAction;                                             //@synthesize linkAction=_linkAction - In the implementation block
@property (nonatomic,readonly) RUILinkLabel * linkLabel;                              //@synthesize linkLabel=_linkLabel - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UIButton * linkButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLinkAction:(id)arg1 ;
-(RUILinkLabel *)linkLabel;
-(void)_linkPressed;
-(id)linkAction;
-(UIButton *)linkButton;
-(NSURL *)linkURL;
-(double)footerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setLinkURL:(NSURL *)arg1 ;
-(void)setDelegate:(id<RUITableFooterDelegate>)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<RUITableFooterDelegate>)delegate;
-(void)setTextColor:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(UILabel *)textLabel;
@end

