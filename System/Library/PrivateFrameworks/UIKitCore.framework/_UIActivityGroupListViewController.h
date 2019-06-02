/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewController.h>

@class NSArray, UILabel;

@interface _UIActivityGroupListViewController : UICollectionViewController {

	BOOL _darkStyleOnLegacyApp;
	BOOL _embedded;
	NSArray* _activityGroupViewControllers;
	NSArray* _visibleActivityGroupViewControllers;
	UILabel* _placeholderLabel;

}

@property (nonatomic,copy) NSArray * activityGroupViewControllers;                     //@synthesize activityGroupViewControllers=_activityGroupViewControllers - In the implementation block
@property (nonatomic,copy) NSArray * visibleActivityGroupViewControllers;              //@synthesize visibleActivityGroupViewControllers=_visibleActivityGroupViewControllers - In the implementation block
@property (assign,getter=isEmbedded,nonatomic) BOOL embedded;                          //@synthesize embedded=_embedded - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                               //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                                //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)viewSafeAreaInsetsDidChange;
-(UILabel *)placeholderLabel;
-(BOOL)darkStyleOnLegacyApp;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
-(BOOL)isEmbedded;
-(void)setEmbedded:(BOOL)arg1 ;
-(void)setActivityGroupViewControllers:(NSArray *)arg1 ;
-(id)initWithActivityGroupViewControllers:(id)arg1 embedded:(BOOL)arg2 ;
-(NSArray *)activityGroupViewControllers;
-(NSArray *)visibleActivityGroupViewControllers;
-(void)setVisibleActivityGroupViewControllers:(NSArray *)arg1 ;
-(BOOL)isAirDropViewController:(id)arg1 ;
-(id)_visibleGroupSeparators;
-(void)updateVisibleActivityGroupViewControllers;
-(double)displayHeight;
-(BOOL)shouldShowNoActionsPlaceholder;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(double)preferredContentHeightForViewController:(id)arg1 ;
-(double)_accessibilityDefaultContentHeightForViewController:(id)arg1 ;
-(void)hideGroups;
-(void)showGroups;
@end
