/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>
#import <libobjc.A.dylib/SKUIPerspectiveView.h>

@class UICollectionView, NSString;

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView> {

	UICollectionView* _collectionView;
	UIEdgeInsets _contentInset;
	BOOL _rendersWithPerspective;
	BOOL _rendersWithParallax;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                      //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) BOOL rendersWithPerspective;                    //@synthesize rendersWithPerspective=_rendersWithPerspective - In the implementation block
@property (assign,nonatomic) BOOL rendersWithParallax;                       //@synthesize rendersWithParallax=_rendersWithParallax - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
-(BOOL)rendersWithParallax;
-(BOOL)rendersWithPerspective;
-(void)setRendersWithPerspective:(BOOL)arg1 ;
-(void)setRendersWithParallax:(BOOL)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

