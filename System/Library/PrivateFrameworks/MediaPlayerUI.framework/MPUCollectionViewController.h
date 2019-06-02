/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MPUFoundation/MPUDataSourceViewController.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, NSString;

@interface MPUCollectionViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver, UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)invalidationContextClass;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)_updateVisibleCellsForDownloads:(id)arg1 updateAllCells:(BOOL)arg2 ;
-(id)reuseIdentifierForCellAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4 ;
-(id)_createCollectionView;
-(id)_createCollectionViewLayout;
-(BOOL)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 editingStyleForItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)reloadData;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)contentScrollView;
@end

