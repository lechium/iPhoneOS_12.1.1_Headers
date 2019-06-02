/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class PKPassView, PKPaymentSetupMoreInfoItem, PKPaymentPass, UIImageView, PKTableHeaderView;

@interface PKPaymentSetupMoreInfoView : UIScrollView {

	PKPassView* _passView;
	CGSize _boundSize;
	PKPaymentSetupMoreInfoItem* _moreInfoItem;
	PKPaymentPass* _pass;
	long long _context;
	UIImageView* _customImageView;
	PKTableHeaderView* _headerView;

}

@property (nonatomic,readonly) PKPaymentSetupMoreInfoItem * moreInfoItem;              //@synthesize moreInfoItem=_moreInfoItem - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) long long context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIImageView * customImageView;                          //@synthesize customImageView=_customImageView - In the implementation block
@property (nonatomic,readonly) PKTableHeaderView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
-(UIImageView *)customImageView;
-(PKPaymentPass *)pass;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)initWithMoreInfoItem:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 ;
-(PKPaymentSetupMoreInfoItem *)moreInfoItem;
-(void)layoutSubviews;
-(long long)context;
-(PKTableHeaderView *)headerView;
@end
