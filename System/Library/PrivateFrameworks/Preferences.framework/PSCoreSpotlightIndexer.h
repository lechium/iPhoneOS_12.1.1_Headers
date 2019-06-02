/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CSSearchableIndex, NSObject, CSTopHitSearchQuery, NSMutableArray, NSDate;

@interface PSCoreSpotlightIndexer : NSObject {

	CSSearchableIndex* _prefsSearchableIndex;
	NSObject*<OS_dispatch_queue> _spotlightIndexQueue;
	CSTopHitSearchQuery* _searchQuery;
	NSMutableArray* _indexFromControllerLog;

}

@property (nonatomic,retain) CSSearchableIndex * prefsSearchableIndex;                      //@synthesize prefsSearchableIndex=_prefsSearchableIndex - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> spotlightIndexQueue;              //@synthesize spotlightIndexQueue=_spotlightIndexQueue - In the implementation block
@property (nonatomic,retain) CSTopHitSearchQuery * searchQuery;                             //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,retain) NSMutableArray * indexFromControllerLog;                       //@synthesize indexFromControllerLog=_indexFromControllerLog - In the implementation block
@property (nonatomic,readonly) BOOL needsIndex; 
@property (nonatomic,readonly) NSDate * lastIndexDate; 
+(id)searchIndexIdentifier;
+(char*)spotlightIndexQueueIdentifier;
+(id)sharedInstance;
-(CSTopHitSearchQuery *)searchQuery;
-(id)blacklistedControllers;
-(NSDate *)lastIndexDate;
-(id)lastIndexBuild;
-(id)lastIndexLanguage;
-(void)setNeedsIndex:(BOOL)arg1 ;
-(void)setPrefsSearchableIndex:(CSSearchableIndex *)arg1 ;
-(void)setSpotlightIndexQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSearchQuery:(CSTopHitSearchQuery *)arg1 ;
-(id)searchableItemClassIdentifier;
-(BOOL)needsIndex;
-(void)setLastIndexDate:(NSDate *)arg1 ;
-(void)setLastIndexBuild:(id)arg1 ;
-(void)setLastIndexLanguage:(id)arg1 ;
-(void)setIndexFromControllerLog:(NSMutableArray *)arg1 ;
-(id)_indexSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6 completion:(/*^block*/id)arg7 ;
-(NSMutableArray *)indexFromControllerLog;
-(void)_indexSearchableItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteIndexWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_indexSpecifierForURL:(id)arg1 specifiers:(id)arg2 bundle:(id)arg3 withURLPrefix:(id)arg4 waitForCompletion:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)_deleteSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 completion:(/*^block*/id)arg6 ;
-(CSSearchableIndex *)prefsSearchableIndex;
-(id)_bundleForSpecifier:(id)arg1 parentBundle:(id)arg2 ;
-(id)_indexItemsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2 ;
-(id)_specifiersForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3 ;
-(id)_urlForSpecifier:(id)arg1 identifier:(id)arg2 category:(id)arg3 childCategory:(id*)arg4 prefix:(id)arg5 path:(id*)arg6 baseURL:(id)arg7 shouldLinkToRow:(BOOL)arg8 ;
-(id)_descriptionForSpecifierName:(id)arg1 withParentSpecifierNames:(id)arg2 ;
-(id)_indexItemForSpecifier:(id)arg1 category:(id)arg2 keywords:(id)arg3 url:(id)arg4 description:(id)arg5 ;
-(id)_urlsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2 ;
-(id)_keyValueDictionaryForURL:(id)arg1 ;
-(id)_childSpecifiersForSpecifier:(id)arg1 bundle:(id)arg2 childBundleToUpdate:(id*)arg3 ;
-(void)_reIndexRootSpecifier:(id)arg1 childSpecifiers:(id)arg2 parentSpecifierNames:(id)arg3 bundle:(id)arg4 childBundle:(id)arg5 category:(id)arg6 baseURL:(id)arg7 withURLPrefix:(id)arg8 waitForCompletion:(BOOL)arg9 completion:(/*^block*/id)arg10 ;
-(void)_reIndexNonRootSpecifier:(id)arg1 parentSpecifiers:(id)arg2 bundle:(id)arg3 category:(id)arg4 baseURL:(id)arg5 withURLPrefix:(id)arg6 waitForCompletion:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(id)descriptionForCSSearchableItem:(id)arg1 ;
-(id)searchableItemAttributeSetClassIdenfitier;
-(id)_rankingHintScoreForURL:(id)arg1 ;
-(id)_specifiersPlistPathForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3 ;
-(BOOL)controllerIsBlacklisted:(id)arg1 ;
-(void)setNeedsIndex;
-(void)topHitSearchForString:(id)arg1 keyboardLanguage:(id)arg2 foundItemsHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)reindexSpecifiersIfNeeded:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(BOOL)arg4 setHasIndexed:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)indexSpecifiersWithURLs:(id)arg1 topLevelSpecifiers:(id)arg2 bundle:(id)arg3 withURLPrefix:(id)arg4 waitForCompletion:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)indexSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)deleteSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)descriptionForCSSearchableItems:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)spotlightIndexQueue;
@end

