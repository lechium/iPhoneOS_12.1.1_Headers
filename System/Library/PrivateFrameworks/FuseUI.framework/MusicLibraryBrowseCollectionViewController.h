/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MusicCollectionViewDelegate.h>
#import <libobjc.A.dylib/MusicEntityVerticalSectionHeaderViewDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicIndexBarDataSource.h>
#import <libobjc.A.dylib/MusicIndexBarScrollDelegate.h>
#import <libobjc.A.dylib/MusicLibraryViewConfigurationConsuming.h>
#import <libobjc.A.dylib/MusicSplitInitialStateProviding.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol UIViewControllerPreviewing, MusicLibraryBrowseCollectionViewControllerDelegate;
@class MusicAsynchronousPropertyLoadingController, MusicCollectionView, MusicLibraryBrowseCollectionViewConfiguration, MusicEntityCollectionViewDescriptor, SKUIDynamicPageSectionIndexMapper, MusicEntityValueContext, MusicLibraryBrowseCollectionViewLayoutMetrics, MPAVController, NSMutableArray, MusicSectionEntityValueContext, NSMapTable, NSString, MusicClientContext, UICollectionView, UICollectionViewFlowLayout, SKUIClientContext;

@interface MusicLibraryBrowseCollectionViewController : UIViewController <MusicCollectionViewDelegate, MusicEntityVerticalSectionHeaderViewDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, MusicClientContextConsuming, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryViewConfigurationConsuming, MusicSplitInitialStateProviding, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	MusicAsynchronousPropertyLoadingController* _asynchronousPropertyLoadingController;
	MusicCollectionView* _collectionView;
	MusicLibraryBrowseCollectionViewConfiguration* _collectionViewConfiguration;
	MusicEntityCollectionViewDescriptor* _entityViewDescriptor;
	SKUIDynamicPageSectionIndexMapper* _indexMapper;
	MusicEntityValueContext* _itemEntityValueContext;
	long long _lastSelectionBehavior;
	MusicLibraryBrowseCollectionViewLayoutMetrics* _layoutMetrics;
	MPAVController* _player;
	id<UIViewControllerPreviewing> _viewControllerPreviewing;
	NSMutableArray* _reusableCoalescingEntityValueProviders;
	MusicSectionEntityValueContext* _sectionEntityValueContext;
	CGSize _sizeForLayoutMetrics;
	NSMapTable* _viewToDownloadInformationObserverToken;
	Class _cellClass;
	NSString* _cellReuseIdentifier;
	MusicClientContext* _clientContext;
	id<MusicLibraryBrowseCollectionViewControllerDelegate> _delegate;

}

@property (getter=_cellClass,nonatomic,readonly) Class _cellClass;                                                    //@synthesize cellClass=_cellClass - In the implementation block
@property (getter=_cellReuseIdentifier,nonatomic,copy,readonly) NSString * _cellReuseIdentifier;                      //@synthesize cellReuseIdentifier=_cellReuseIdentifier - In the implementation block
@property (nonatomic,readonly) MusicLibraryBrowseCollectionViewConfiguration * libraryViewConfiguration;              //@synthesize collectionViewConfiguration=_collectionViewConfiguration - In the implementation block
@property (nonatomic,readonly) MusicEntityCollectionViewDescriptor * entityViewDescriptor; 
@property (nonatomic,readonly) UICollectionView * collectionView;                                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UICollectionViewFlowLayout * collectionViewFlowLayout; 
@property (assign,nonatomic,__weak) id<MusicLibraryBrowseCollectionViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(UICollectionViewFlowLayout *)collectionViewFlowLayout;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_invalidateLayoutMetrics;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(unsigned long long)numberOfIndexBarEntries;
-(void)collectionView:(id)arg1 didSelectAddButtonForCell:(id)arg2 ;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)music_viewInheritedLayoutInsetsDidChange;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(BOOL)getContentOffset:(CGPoint*)arg1 forIndexBarEntryAtIndex:(unsigned long long)arg2 ;
-(MusicLibraryBrowseCollectionViewConfiguration *)libraryViewConfiguration;
-(id)loadEntityViewDescriptor;
-(MusicEntityCollectionViewDescriptor *)entityViewDescriptor;
-(void)sectionHeaderViewDidSelectButton:(id)arg1 ;
-(id)_entityValueContextAtIndexPath:(id)arg1 ;
-(void)handleEntityProviderDidInvalidate;
-(UIEdgeInsets)_collectionViewLayoutMarginsForLayoutMetricsContentInsets:(UIEdgeInsets)arg1 ;
-(Class)_cellClass;
-(void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2 ;
-(id)_itemEntityValueContext;
-(void)collectionViewTintColorDidChange:(id)arg1 ;
-(unsigned long long)maximumItemsPerRow;
-(id)_sectionEntityValueContextForIndex:(unsigned long long)arg1 ;
-(void)handleContentSizeCategoryDidChange;
-(void)showInitialStateForSplitViewController;
-(id)_layoutMetrics;
-(void)_updateCollectionViewFlowLayoutMetricsAndNotifyDelegate:(BOOL)arg1 ;
-(UIEdgeInsets)_collectionViewLayoutMargins;
-(void)_handleEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_updateFlatteningToSingleSectionPolicyAllowingCollectionViewReload:(BOOL)arg1 ;
-(void)_recycleCoalescingEntityValueProvider:(id)arg1 ;
-(void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_dequeueCoalescingEntityValueProvider;
-(void)_updateEntityDisabledStateForCell:(id)arg1 withEntityValueContext:(id)arg2 ;
-(double)_secondaryReferenceMetricForQueryingLayoutInterpolators;
-(void)_updateEntityDisabledStateForVisibleCells;
-(void)_handleEntityPlayabilityControllerDidChangeNotification:(id)arg1 ;
-(NSString *)_cellReuseIdentifier;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MusicLibraryBrowseCollectionViewControllerDelegate>)arg1 ;
-(id<MusicLibraryBrowseCollectionViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
@end

