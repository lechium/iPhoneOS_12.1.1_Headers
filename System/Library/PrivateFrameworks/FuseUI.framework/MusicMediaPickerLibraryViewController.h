/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/MusicMediaPickerSearchDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@class NSArray, MPMediaPredicate, MusicClientContext, NSString, SKUIClientContext;

@interface MusicMediaPickerLibraryViewController : UITableViewController <MusicMediaPickerSearchDelegate, MusicClientContextConsuming> {

	NSArray* _allLibraryCategoriesConfigurations;
	NSArray* _usedLibraryCategoriesConfigurations;
	NSArray* _usedDataSources;
	MPMediaPredicate* _storeItemsMediaLibraryPredicate;
	BOOL _invokedForPlaylistEditing;
	BOOL _showsOnlyStoreItems;
	BOOL _picksSingleCollection;
	BOOL _omitsGeniusPlaylists;
	MusicClientContext* _clientContext;

}

@property (assign,getter=isInvokedForPlaylistEditing,nonatomic) BOOL invokedForPlaylistEditing;              //@synthesize invokedForPlaylistEditing=_invokedForPlaylistEditing - In the implementation block
@property (assign,nonatomic) BOOL showsOnlyStoreItems;                                                       //@synthesize showsOnlyStoreItems=_showsOnlyStoreItems - In the implementation block
@property (assign,nonatomic) BOOL picksSingleCollection;                                                     //@synthesize picksSingleCollection=_picksSingleCollection - In the implementation block
@property (assign,nonatomic) BOOL omitsGeniusPlaylists;                                                      //@synthesize omitsGeniusPlaylists=_omitsGeniusPlaylists - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)tableViewThatNeedsSearchBarHeader;
-(void)setShowsOnlyStoreItems:(BOOL)arg1 ;
-(void)setPicksSingleCollection:(BOOL)arg1 ;
-(BOOL)omitsGeniusPlaylists;
-(void)setOmitsGeniusPlaylists:(BOOL)arg1 ;
-(BOOL)showsOnlyStoreItems;
-(void)_dataSourceDidInvalidate:(id)arg1 ;
-(void)_loadCategoryConfigurations;
-(void)_filterAvailableCategoryConfigurations;
-(void)_reloadLibraryCategories;
-(BOOL)picksSingleCollection;
-(void)setInvokedForPlaylistEditing:(BOOL)arg1 ;
-(BOOL)isInvokedForPlaylistEditing;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

