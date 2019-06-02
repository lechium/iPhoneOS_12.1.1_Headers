//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "PHTableViewDataSourcePrefetching.h"
#import "PHTableViewDelegate.h"

@class NSCache, NSOperationQueue, NSString, UIView<PHContentUnavailable>;

@interface PHTableViewController : UITableViewController <PHTableViewDataSourcePrefetching, PHTableViewDelegate>
{
    _Bool _contentUnavailable;	// 8 = 0x8
    _Bool _editingRow;	// 9 = 0x9
    _Bool _needsReloadData;	// 10 = 0xa
    _Bool _reloadingData;	// 11 = 0xb
    NSOperationQueue *_dataSourcePrefetchingOperationQueue;	// 16 = 0x10
    UIView<PHContentUnavailable> *_contentUnavailableView;	// 24 = 0x18
    NSString *_contentUnavailableViewTitle;	// 32 = 0x20
    NSCache *_rowHeightCache;	// 40 = 0x28
    long long _whitePointAdaptivityStyle;	// 48 = 0x30
}

@property(nonatomic) long long whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;
@property(retain, nonatomic) NSCache *rowHeightCache; // @synthesize rowHeightCache=_rowHeightCache;
@property(nonatomic, getter=isReloadingData) _Bool reloadingData; // @synthesize reloadingData=_reloadingData;
@property(nonatomic) _Bool needsReloadData; // @synthesize needsReloadData=_needsReloadData;
@property(nonatomic, getter=isEditingRow) _Bool editingRow; // @synthesize editingRow=_editingRow;
@property(copy, nonatomic) NSString *contentUnavailableViewTitle; // @synthesize contentUnavailableViewTitle=_contentUnavailableViewTitle;
@property(retain, nonatomic) UIView<PHContentUnavailable> *contentUnavailableView; // @synthesize contentUnavailableView=_contentUnavailableView;
@property(nonatomic) _Bool contentUnavailable; // @synthesize contentUnavailable=_contentUnavailable;
- (void).cxx_destruct;	// IMP=0x00000001000309c4
- (void)handleUIContentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00000001000307d0
- (void)handleUIApplicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000001000307cc
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000001000307c8
- (void)handleUIApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x00000001000307c4
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100030708
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100030698
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100030590
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000100030580
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000100030570
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000304e8
- (void)tableView:(id)arg1 performReloadRowsAtIndexPaths:(id)arg2 withRowAnimation:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000302dc
- (_Bool)tableViewCanPerformReloadData:(id)arg1;	// IMP=0x00000001000301ec
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;	// IMP=0x00000001000301e8
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;	// IMP=0x000000010002ff04
- (void)makeUIForDefaultPNG;	// IMP=0x000000010002fdc8
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x000000010002fc3c
- (void)reloadDataIfNeeded;	// IMP=0x000000010002fb78
- (void)setContentUnavailable:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010002f870
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010002f7ac
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010002f6f8
- (void)viewDidLoad;	// IMP=0x000000010002f5d8
- (void)didReceiveMemoryWarning;	// IMP=0x000000010002f4e0
@property(readonly, nonatomic, getter=isForceTouchAvailable) _Bool forceTouchAvailable;
@property(readonly, nonatomic) NSOperationQueue *dataSourcePrefetchingOperationQueue; // @synthesize dataSourcePrefetchingOperationQueue=_dataSourcePrefetchingOperationQueue;
- (void)dealloc;	// IMP=0x000000010002f374
- (void)commonInit;	// IMP=0x000000010002f0b8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002f060
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010002efdc
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010002ef84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
