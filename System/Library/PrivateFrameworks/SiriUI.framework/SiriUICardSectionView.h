/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CRKCardSectionView.h>

@protocol CRKComposableView, SiriUIReusableView;
@class NSString, UIView;

@interface SiriUICardSectionView : UIView <CRKCardSectionView> {

	UIView*<CRKComposableView> _composedSuperview;
	NSString* _cardSectionViewIdentifier;
	UIView*<SiriUIReusableView> _headerView;
	UIView* _contentView;
	UIView*<SiriUIReusableView> _footerView;
	double _headerViewHeight;
	double _footerViewHeight;
	CGSize _contentSize;

}

@property (nonatomic,retain) UIView*<SiriUIReusableView> headerView;                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView*<SiriUIReusableView> footerView;                           //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) double headerViewHeight;                                          //@synthesize headerViewHeight=_headerViewHeight - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                               //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) double footerViewHeight;                                          //@synthesize footerViewHeight=_footerViewHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * cardSectionViewIdentifier;                               //@synthesize cardSectionViewIdentifier=_cardSectionViewIdentifier - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CRKComposableView> composedSuperview;              //@synthesize composedSuperview=_composedSuperview - In the implementation block
+(CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(CGSize)arg2 ;
-(void)setFooterViewHeight:(double)arg1 ;
-(UIView*<CRKComposableView>)composedSuperview;
-(void)removeFromComposedSuperview;
-(NSString *)cardSectionViewIdentifier;
-(void)setCardSectionViewIdentifier:(NSString *)arg1 ;
-(void)setComposedSuperview:(UIView*<CRKComposableView>)arg1 ;
-(double)footerViewHeight;
-(id)accessibilityIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(UIView*<SiriUIReusableView>)headerView;
-(void)setHeaderView:(UIView*<SiriUIReusableView>)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setHeaderViewHeight:(double)arg1 ;
-(double)headerViewHeight;
-(UIView*<SiriUIReusableView>)footerView;
-(void)setFooterView:(UIView*<SiriUIReusableView>)arg1 ;
@end
