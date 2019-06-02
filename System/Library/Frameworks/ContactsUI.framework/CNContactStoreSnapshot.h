/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <ContactsUI/ContactsUI-Structs.h>
@class NSMapTable, NSObject, NSArray, CNContactMatchSummarizer, NSMutableAttributedString, CNContactStoreDataSource, CNContactStoreFilter, CNManagedConfiguration, NSMutableDictionary, CNContactDataSourceLIFOScheduler, NSPointerArray, NSMutableArray;

@interface CNContactStoreSnapshot : NSObject {

	unsigned long long _contactsCount;
	NSMapTable* _contactsCache;
	NSObject*<OS_dispatch_semaphore> _cacheAccessSemaphore;
	NSRange _currentlyLoadingBackgroundRange;
	NSArray* _sections;
	NSArray* _indexSections;
	CNContactMatchSummarizer* _summarizer;
	NSMutableAttributedString* _emptyExcerptInstanceMarker;
	unsigned long long _lastRequestedIndex;
	CNContactStoreDataSource* _dataSource;
	CNContactStoreFilter* _filter;
	CNManagedConfiguration* _managedConfiguration;
	NSMutableDictionary* _contactMatchInfos;
	CNContactDataSourceLIFOScheduler* _summarizationQueue;
	NSPointerArray* _summarizationFutures;
	NSMapTable* _identifiersToIndexPath;
	NSMutableArray* _batchContactIdentifiers;

}

@property (assign,nonatomic,__weak) CNContactStoreDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) CNContactStoreFilter * filter;                                        //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) CNManagedConfiguration * managedConfiguration;                        //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSMutableDictionary * contactMatchInfos;                            //@synthesize contactMatchInfos=_contactMatchInfos - In the implementation block
@property (nonatomic,readonly) CNContactDataSourceLIFOScheduler * summarizationQueue;              //@synthesize summarizationQueue=_summarizationQueue - In the implementation block
@property (nonatomic,readonly) NSPointerArray * summarizationFutures;                              //@synthesize summarizationFutures=_summarizationFutures - In the implementation block
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (nonatomic,readonly) NSMapTable * identifiersToIndexPath;                                //@synthesize identifiersToIndexPath=_identifiersToIndexPath - In the implementation block
@property (nonatomic,readonly) NSMutableArray * batchContactIdentifiers;                           //@synthesize batchContactIdentifiers=_batchContactIdentifiers - In the implementation block
-(NSMutableDictionary *)contactMatchInfos;
-(NSArray *)indexSections;
-(id)_keysToFetch;
-(void)_loadAllContacts;
-(void)_loadContactsInRange:(NSRange)arg1 inBackground:(BOOL)arg2 ;
-(void)_generateExcerptsInRange:(NSRange)arg1 ;
-(NSPointerArray *)summarizationFutures;
-(unsigned long long)countOf_contacts;
-(id)objectIn_contactsAtIndex:(unsigned long long)arg1 ;
-(void)prepareEnoughContacts;
-(void)prepareAllContacts;
-(CNContactDataSourceLIFOScheduler *)summarizationQueue;
-(NSMapTable *)identifiersToIndexPath;
-(NSMutableArray *)batchContactIdentifiers;
-(NSArray *)contacts;
-(CNManagedConfiguration *)managedConfiguration;
-(void)setManagedConfiguration:(CNManagedConfiguration *)arg1 ;
-(id)init;
-(void)dealloc;
-(CNContactStoreFilter *)filter;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(CNContactStoreDataSource *)dataSource;
-(void)setDataSource:(CNContactStoreDataSource *)arg1 ;
-(NSArray *)sections;
@end

