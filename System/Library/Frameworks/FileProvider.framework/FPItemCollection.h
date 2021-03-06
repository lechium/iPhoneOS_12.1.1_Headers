/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPXEnumeratorObserver.h>
#import <libobjc.A.dylib/FPReachabilityObserver.h>

@protocol OS_dispatch_queue, FPXEnumerator, FPItemCollectionDelegate;
@class FPItemID, NSFileProviderEnumerationProperties, _FPItemList, NSObject, NSMutableDictionary, NSMutableSet, NSArray, FPItemManager, NSString, NSData, NSPredicate, FPPacer;

@interface FPItemCollection : NSObject <FPXEnumeratorObserver, FPReachabilityObserver> {

	unsigned long long _observationID;
	FPItemID* _itemID;
	NSFileProviderEnumerationProperties* _enumerationProperties;
	_FPItemList* _currentItems;
	NSObject*<OS_dispatch_queue> _workingQueue;
	NSObject*<OS_dispatch_queue> _itemAccessQueue;
	NSMutableDictionary* _updatedItemsByIdentifiers;
	NSMutableSet* _deletedItemsIdentifiers;
	NSArray* _updateSortDescriptors;
	FPItemManager* _itemManager;
	id<FPXEnumerator> _enumerator;
	NSArray* _fileTypes;
	NSString* _providerIdentifier;
	BOOL _isRecursiveFolderEnumeration;
	BOOL _started;
	BOOL _restartAfterForeground;
	BOOL _shouldResort;
	BOOL _regathering;
	BOOL _enumeratingExtensionResults;
	BOOL _shouldUpdate;
	BOOL _shouldRetryOnceAfterCrash;
	unsigned long long _numGatheredItems;
	NSData* _nextPageToken;
	NSData* _changeToken;
	/*^block*/id _extensionKeepAliveBlock;
	NSPredicate* _itemFilteringPredicate;
	BOOL _gathering;
	BOOL _immutable;
	BOOL _hasMoreUpdates;
	BOOL _observing;
	id<FPItemCollectionDelegate> _delegate;
	NSArray* _sortDescriptors;
	NSString* _identifier;
	NSString* _domainIdentifier;
	NSObject*<OS_dispatch_queue> _updateQueue;
	FPPacer* _updatePacer;

}

@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL observing;                                            //@synthesize observing=_observing - In the implementation block
@property (assign,getter=isGathering,nonatomic) BOOL gathering;                         //@synthesize gathering=_gathering - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (nonatomic,copy,readonly) NSString * domainIdentifier;                        //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> updateQueue;                //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,readonly) FPPacer * updatePacer;                                   //@synthesize updatePacer=_updatePacer - In the implementation block
@property (nonatomic,retain) NSPredicate * itemFilteringPredicate; 
@property (assign,nonatomic,__weak) id<FPItemCollectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isImmutable,nonatomic,readonly) BOOL immutable;                       //@synthesize immutable=_immutable - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreUpdates;                                     //@synthesize hasMoreUpdates=_hasMoreUpdates - In the implementation block
@property (nonatomic,readonly) NSArray * sortDescriptors;                               //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workingQueue;                 //@synthesize workingQueue=_workingQueue - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)item:(id)arg1 isValidForObservedItemID:(id)arg2 ;
+(void)addActiveCollection:(id)arg1 ;
+(BOOL)isEnumerationSuspended;
+(void)removeActiveCollection:(id)arg1 ;
+(id)activeCollections;
+(BOOL)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2 ;
+(void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2 ;
+(id)collectionWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 sortDescriptors:(id)arg4 ;
+(void)consumeUpdates:(id)arg1 deletes:(id)arg2 ;
+(void)suspendVendorEnumeration;
+(void)resumeVendorEnumeration;
+(void)initialize;
+(void)applicationWillEnterForeground:(id)arg1 ;
+(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)isGathering;
-(void)enumerationResultsDidChange;
-(void)didUpdateItem:(id)arg1 ;
-(void)_flushPendingUpdates;
-(id)initWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 sortDescriptors:(id)arg4 fileTypes:(id)arg5 itemManager:(id)arg6 ;
-(void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 ;
-(void)_didEncounterError:(id)arg1 forObservationID:(unsigned long long)arg2 ;
-(BOOL)__isObservingID:(unsigned long long)arg1 ;
-(void)_gatherInitialItems;
-(void)startObservingWithEnumerationProperties:(id)arg1 ;
-(void)_didEncounterError:(id)arg1 ;
-(void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 ;
-(void)_gatherMoreItemsAfterPage:(id)arg1 section:(unsigned long long)arg2 ;
-(id)_initialPageFromSortDescriptors:(id)arg1 ;
-(void)_updateItemsWithUpdatesCount:(unsigned long long)arg1 section:(unsigned long long)arg2 ;
-(BOOL)hasMoreUpdates;
-(void)_restartObservation;
-(BOOL)isRegatheringAfterSignal;
-(void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 forceFlush:(BOOL)arg3 ;
-(void)_updateObservedItem:(id)arg1 ;
-(id)indexPathFromIndex:(long long)arg1 ;
-(id)_itemsMutableCopy;
-(unsigned long long)_indexOfItemID:(id)arg1 ;
-(void)_recomputeHierarchyOfItemList:(id)arg1 ;
-(id)indexPathsFromIndexSet:(id)arg1 ;
-(void)_assignHierarchyPathToChildrenOf:(id)arg1 withPath:(id)arg2 hierarchy:(id)arg3 ;
-(void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2 ;
-(void)setItemFilteringPredicate:(NSPredicate *)arg1 ;
-(BOOL)hasMoreItems;
-(void)setWorkingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)reorderItemsWithSortDescriptors:(id)arg1 ;
-(id)_t_items;
-(BOOL)_isObservingID:(unsigned long long)arg1 ;
-(void)replaceContentsWithVendorItems:(id)arg1 ;
-(NSPredicate *)itemFilteringPredicate;
-(void)setIsItemMatchingQueryBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)isItemMatchingQueryBlock;
-(void)setGathering:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)workingQueue;
-(FPPacer *)updatePacer;
-(NSObject*<OS_dispatch_queue>)updateQueue;
-(BOOL)observing;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)setObserving:(BOOL)arg1 ;
-(BOOL)isImmutable;
-(long long)_numberOfItems;
-(unsigned long long)_indexOfItem:(id)arg1 ;
-(NSString *)domainIdentifier;
-(void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(BOOL)arg2 ;
-(void)startObserving;
-(void)stopObserving;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)setDelegate:(id<FPItemCollectionDelegate>)arg1 ;
-(id<FPItemCollectionDelegate>)delegate;
-(NSArray *)items;
-(long long)numberOfItems;
-(void)_updateItems;
-(NSString *)providerIdentifier;
-(NSArray *)sortDescriptors;
@end

