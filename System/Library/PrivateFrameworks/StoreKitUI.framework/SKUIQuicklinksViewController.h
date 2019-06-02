/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SKUIQuicklinksViewControllerDelegate;
@class UICollectionView, SKUIColorScheme, NSArray, SKUIQuicklinksView, NSString;

@interface SKUIQuicklinksViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	SKUIColorScheme* _colorScheme;
	id<SKUIQuicklinksViewControllerDelegate> _delegate;
	NSArray* _links;
	SKUIQuicklinksView* _quicklinksView;

}

@property (assign,nonatomic,__weak) id<SKUIQuicklinksViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * indexPathsForVisibleItems; 
@property (nonatomic,copy) NSArray * links;                                                         //@synthesize links=_links - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_numberOfRows;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setLinks:(NSArray *)arg1 ;
-(CGRect)frameForLinkAtIndex:(long long)arg1 ;
-(NSArray *)links;
-(void)dealloc;
-(void)setDelegate:(id<SKUIQuicklinksViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<SKUIQuicklinksViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)indexPathsForVisibleItems;
@end

