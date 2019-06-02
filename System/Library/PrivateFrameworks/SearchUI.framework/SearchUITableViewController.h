/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIKeyboardableTableViewController.h>
#import <SearchUI/SearchUITableViewTesting.h>
#import <SearchUI/SearchUIFeedbackDelegateInternal.h>

@protocol SFFeedbackListener, SearchUIResultViewDelegate, UIViewControllerPreviewing;
@class SearchUITableModel, SearchUIPeekDelegate, TLKTableViewScrollTester, SearchUITableView, NSString;

@interface SearchUITableViewController : SearchUIKeyboardableTableViewController <SearchUITableViewTesting, SearchUIFeedbackDelegateInternal> {

	BOOL _shouldUseInsetRoundedSections;
	/*^block*/id tableViewWillUpdateHandler;
	/*^block*/id tableViewDidUpdateHandler;
	/*^block*/id cellWillDisplayHandler;
	id<SFFeedbackListener> _feedbackListener;
	id<SearchUIResultViewDelegate> _resultViewDelegate;
	SearchUITableModel* _tableModel;
	SearchUIPeekDelegate* _peekDelegate;
	id<UIViewControllerPreviewing> _previewingContext;
	long long _preferredPunchoutIndex;
	TLKTableViewScrollTester* _scrollTester;

}

@property (retain) SearchUITableView * tableView; 
@property (retain) SearchUIPeekDelegate * peekDelegate;                                   //@synthesize peekDelegate=_peekDelegate - In the implementation block
@property (retain) id<UIViewControllerPreviewing> previewingContext;                      //@synthesize previewingContext=_previewingContext - In the implementation block
@property (retain) SearchUITableModel * tableModel;                                       //@synthesize tableModel=_tableModel - In the implementation block
@property (assign) long long preferredPunchoutIndex;                                      //@synthesize preferredPunchoutIndex=_preferredPunchoutIndex - In the implementation block
@property (retain) TLKTableViewScrollTester * scrollTester;                               //@synthesize scrollTester=_scrollTester - In the implementation block
@property (assign,nonatomic) unsigned long long style; 
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener;              //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (__weak) id<SearchUIResultViewDelegate> resultViewDelegate;                     //@synthesize resultViewDelegate=_resultViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections;                          //@synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id cellWillDisplayHandler; 
@property (nonatomic,copy) id tableViewWillUpdateHandler; 
@property (nonatomic,copy) id tableViewDidUpdateHandler; 
+(double)layoutMarginWidthForOrientation:(long long)arg1 ;
+(void)applySeparatorStyleToCell:(id)arg1 forCurrentRowModel:(id)arg2 nextRowModel:(id)arg3 ;
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateViewControllerTitle:(id)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1 ;
-(void)resignTextField;
-(void)updateWithTableModel:(id)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(double)offScreenContentScrollDistance;
-(id)resultForIndexPath:(id)arg1 ;
-(id)viewControllerForIndexPath:(id)arg1 isPeek:(BOOL)arg2 ;
-(id)fallbackPeekViewControllerForIndexPath:(id)arg1 ;
-(id)cardSectionForIndexPath:(id)arg1 ;
-(NSRange)enumerateSelectableCellsForIndexPath:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)handleSelectionAtIndexPath:(id)arg1 wasPop:(BOOL)arg2 ;
-(void)setPreferredPunchoutIndex:(long long)arg1 ;
-(void)updateLayoutMarginsForOrientation:(long long)arg1 ;
-(BOOL)updateMustAccountForLayout;
-(id)tableViewWillUpdateHandler;
-(void)setTableModel:(SearchUITableModel *)arg1 ;
-(id)tableViewDidUpdateHandler;
-(void)setPeekDelegate:(SearchUIPeekDelegate *)arg1 ;
-(SearchUIPeekDelegate *)peekDelegate;
-(id)nextCardForIndexPath:(id)arg1 ;
-(id<SearchUIResultViewDelegate>)resultViewDelegate;
-(void)setResultViewDelegate:(id<SearchUIResultViewDelegate>)arg1 ;
-(id)punchoutsForIndexPath:(id)arg1 ;
-(void)requestAuthIfNecessaryAndPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(long long)preferredPunchoutIndex;
-(id)punchoutPickerTitleForIndexPath:(id)arg1 ;
-(id)punchoutPickerDismissText:(id)arg1 ;
-(void)showViewController:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 reuseIfPossible:(BOOL)arg2 ;
-(id)cellWillDisplayHandler;
-(void)updateTableForNewCellHeightAnimated:(BOOL)arg1 ;
-(void)updateContentScrolledOffScreenStatus;
-(void)deselectRowsForIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)roundNecessaryCornersForTableCellSelectedBackground:(id)arg1 ;
-(void)performScrollTestWithHandlerForFirstScrollCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setScrollTester:(TLKTableViewScrollTester *)arg1 ;
-(TLKTableViewScrollTester *)scrollTester;
-(BOOL)forwardFeedbackForSelector:(SEL)arg1 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2 ;
-(void)performScrollTestWithCompletion:(/*^block*/id)arg1 ;
-(id)currentTableModel;
-(void)tapAtIndexPath:(id)arg1 ;
-(void)setCellWillDisplayHandler:(id)arg1 ;
-(void)setTableViewWillUpdateHandler:(id)arg1 ;
-(void)setTableViewDidUpdateHandler:(id)arg1 ;
-(id)preferredViewControllerForIndexPath:(id)arg1 isPreview:(BOOL)arg2 ;
-(SearchUITableModel *)tableModel;
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)presentViewController:(id)arg1 ;
-(void)setPreviewingContext:(id<UIViewControllerPreviewing>)arg1 ;
-(id<UIViewControllerPreviewing>)previewingContext;
@end
