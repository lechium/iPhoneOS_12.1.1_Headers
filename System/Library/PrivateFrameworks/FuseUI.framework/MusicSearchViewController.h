/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIScrollingSegmentedController.h>
#import <libobjc.A.dylib/MusicJSNativeViewControllerFactory.h>
#import <libobjc.A.dylib/MusicJSSearchNativeViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicLibrarySearchResultsViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicSearchBarDelegate.h>
#import <libobjc.A.dylib/MusicSearchHintsViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicSearchRecentsViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingSegmentedControllerDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol MusicSearchViewControllerMediaPickerDelegate;
@class MusicLibrarySearchResultsViewController, _UINavigationControllerPalette, MusicSearchBar, MusicSearchHintsViewController, UIViewController, NSString, NSArray, MusicClientContext, UISearchBar, SKUIClientContext;

@interface MusicSearchViewController : SKUIScrollingSegmentedController <MusicJSNativeViewControllerFactory, MusicJSSearchNativeViewControllerDelegate, MusicLibrarySearchResultsViewControllerDelegate, MusicSearchBarDelegate, MusicSearchHintsViewControllerDelegate, MusicSearchRecentsViewControllerDelegate, SKUIScrollingSegmentedControllerDelegate, MusicClientContextConsuming, UIViewControllerTransitioningDelegate> {

	BOOL _allowsAllContentInStoreSearch;
	BOOL _allowsRadioContentInStoreSearch;
	BOOL _didInsertStoreSearchResultsDocument;
	BOOL _didMakeSearchBarFirstResponder;
	MusicLibrarySearchResultsViewController* _librarySearchResultsViewController;
	_UINavigationControllerPalette* _palette;
	MusicSearchBar* _searchBar;
	MusicSearchHintsViewController* _searchHintsViewController;
	UIViewController* _storeSearchResultsViewController;
	NSString* _partialSearchString;
	BOOL _storeSearchViewNeedsChangeUponAppearance;
	BOOL _storeSearchViewNeedsSubmitUponAppearance;
	NSArray* _titleViewPaletteConstraints;
	BOOL _mediaPickerAllowsLocalSearchOnly;
	BOOL _mediaPickerAllowsMultipleSelection;
	BOOL _mediaPickerPicksSingleCollection;
	BOOL _mediaPickerIncludePlaylists;
	BOOL _mediaPickerOmitsGeniusPlaylists;
	BOOL _shouldUseMediaPickerViewConfiguration;
	BOOL _storeSearchViewIsVisible;
	MusicClientContext* _clientContext;
	id<MusicSearchViewControllerMediaPickerDelegate> _mediaPickerDelegate;
	unsigned long long _searchOptions;

}

@property (nonatomic,readonly) double searchNavigationBarPaletteHeight; 
@property (assign,nonatomic) BOOL storeSearchViewIsVisible;                                                            //@synthesize storeSearchViewIsVisible=_storeSearchViewIsVisible - In the implementation block
@property (assign,nonatomic,__weak) id<MusicSearchViewControllerMediaPickerDelegate> mediaPickerDelegate;              //@synthesize mediaPickerDelegate=_mediaPickerDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long searchOptions;                                                         //@synthesize searchOptions=_searchOptions - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (nonatomic,copy) NSString * searchTerm; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(id)mediaPickerSearchViewControllerWithSearchBar:(id)arg1 allowLocalSearchOnly:(BOOL)arg2 allowMultipleSelection:(BOOL)arg3 picksSingleCollection:(BOOL)arg4 includePlaylists:(BOOL)arg5 omitGeniusPlaylists:(BOOL)arg6 presentingViewController:(id)arg7 ;
+(id)defaultSearchBarWithTraitCollection:(id)arg1 ;
+(id)_defaultSearchNavigationControllerWithSearchViewController:(id)arg1 ;
+(id)_defaultSearchViewControllerForPresentingViewController:(id)arg1 ;
+(id)searchViewControllerForPresentingViewController:(id)arg1 withSearchBar:(id)arg2 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2 ;
-(void)scrollingSegmentedController:(id)arg1 didEndDisplayingViewControllerAtIndex:(unsigned long long)arg2 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)librarySearchResultsViewController:(id)arg1 didSelectResultWithTitle:(id)arg2 ;
-(void)searchBarDidLayoutSubviews:(id)arg1 ;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)setMediaPickerDelegate:(id<MusicSearchViewControllerMediaPickerDelegate>)arg1 ;
-(void)_configureNavigationBar;
-(id<MusicSearchViewControllerMediaPickerDelegate>)mediaPickerDelegate;
-(void)_handleCanShowSubscriptionContentDidChangeNotification:(id)arg1 ;
-(void)_handleCanShowRadioDidChangeNotification:(id)arg1 ;
-(BOOL)_allowsLocalSearchOnly;
-(id)_storeSearchSegmentTitle;
-(id)_extraInfoForStoreSearchEvent;
-(void)_detachPalette;
-(void)_recordSearchRecent:(id)arg1 ;
-(void)_dispatchSearchTextChangeWithTerm:(id)arg1 usingSubmitEventType:(BOOL)arg2 ;
-(void)setStoreSearchViewIsVisible:(BOOL)arg1 ;
-(void)_handleCancelButtonPressed;
-(id)initForMediaPickerUseAllowLocalSearchOnly:(BOOL)arg1 allowMultipleSelection:(BOOL)arg2 pickSingleCollection:(BOOL)arg3 includePlaylists:(BOOL)arg4 omitGeniusPlaylists:(BOOL)arg5 ;
-(void)_updateForStoreContentAvailabilityChange;
-(void)_applyConstraints;
-(void)_attachPaletteIfNecessary;
-(void)jsSearchNativeViewController:(id)arg1 setStoreSearchResultsDocument:(id)arg2 options:(id)arg3 ;
-(void)jsSearchNativeViewController:(id)arg1 setSearchTerm:(id)arg2 ;
-(void)jsSearchNativeViewController:(id)arg1 selectMediaPickerItem:(id)arg2 ;
-(void)searchHintsViewController:(id)arg1 didSelectSearchHintWithText:(id)arg2 URL:(id)arg3 index:(long long)arg4 ;
-(void)searchRecentsViewController:(id)arg1 didSelectSearchTerm:(id)arg2 ;
-(double)searchNavigationBarPaletteHeight;
-(BOOL)storeSearchViewIsVisible;
-(unsigned long long)searchOptions;
-(void)setSearchOptions:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarBookmarkButtonClicked:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(UISearchBar *)searchBar;
-(void)_removeConstraints;
@end

