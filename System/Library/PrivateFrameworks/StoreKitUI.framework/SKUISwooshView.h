/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UICollectionView, UIButton, SKUILinkButton, UIColor, UILabel, UIControl, NSString;

@interface SKUISwooshView : UIView {

	UIView* _borderView;
	UICollectionView* _collectionView;
	UIEdgeInsets _collectionViewInsets;
	UIButton* _seeAllButton;
	BOOL _showsChevronForTitle;
	SKUILinkButton* _titleButton;
	UIColor* _titleColor;
	UILabel* _titleLabel;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets collectionViewInsets;              //@synthesize collectionViewInsets=_collectionViewInsets - In the implementation block
@property (nonatomic,readonly) UIControl * seeAllControl; 
@property (nonatomic,copy) NSString * seeAllTitle; 
@property (nonatomic,readonly) UIControl * chevronTitleControl; 
@property (assign,nonatomic) BOOL showsChevronForTitle;                      //@synthesize showsChevronForTitle=_showsChevronForTitle - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIColor * titleColor;                             //@synthesize titleColor=_titleColor - In the implementation block
-(void)setColoringWithColorScheme:(id)arg1 ;
-(UIEdgeInsets)collectionViewInsets;
-(void)setCollectionViewInsets:(UIEdgeInsets)arg1 ;
-(NSString *)seeAllTitle;
-(UIControl *)chevronTitleControl;
-(UIControl *)seeAllControl;
-(void)setShowsChevronForTitle:(BOOL)arg1 ;
-(void)setSeeAllTitle:(NSString *)arg1 ;
-(id)_seeAllArrowImage;
-(void)setSeeAllColor:(id)arg1 forControlState:(unsigned long long)arg2 ;
-(BOOL)showsChevronForTitle;
-(id)seeAllColorForControlState:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UICollectionView *)collectionView;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
@end

