/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>
#import <libobjc.A.dylib/TCSContactsObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NPSManager, CNCoalescingTimer, NSTimer, IDSBatchIDQueryController, NSMutableDictionary, CNContactStore, TCSContacts, NSUserDefaults, NSArray, NSString;

@interface TCSSuggestions : NSObject <IDSBatchIDQueryControllerDelegate, TCSContactsObserver> {

	int _firstUnlockToken;
	int _npsInitialSyncToken;
	NSObject*<OS_dispatch_queue> _generationQueue;
	NSObject*<OS_dispatch_queue> _coreRecentsQueue;
	NSHashTable* _observers;
	NPSManager* _npsManager;
	CNCoalescingTimer* _suggestionsSaveTimer;
	NSTimer* _suggestionGenerationTimer;
	IDSBatchIDQueryController* _queryController;
	NSMutableDictionary* _suggestedDestinationToStatus;
	BOOL _generationTimerEnabled;
	BOOL _shouldObserveSuggestionsDefaultChanges;
	CNContactStore* _contactStore;
	TCSContacts* _contacts;
	NSUserDefaults* _defaults;
	NSMutableDictionary* _suggestions;
	NSArray* _suggestedDestinations;

}

@property (nonatomic,retain) CNContactStore * contactStore;                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) TCSContacts * contacts;                                   //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;                                //@synthesize defaults=_defaults - In the implementation block
@property (assign,nonatomic) BOOL shouldObserveSuggestionsDefaultChanges;              //@synthesize shouldObserveSuggestionsDefaultChanges=_shouldObserveSuggestionsDefaultChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * suggestions;                        //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSArray * suggestedDestinations;                          //@synthesize suggestedDestinations=_suggestedDestinations - In the implementation block
@property (assign,nonatomic) BOOL generationTimerEnabled;                              //@synthesize generationTimerEnabled=_generationTimerEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_descriptorForRequiredKeys;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)setContacts:(TCSContacts *)arg1 ;
-(NSMutableDictionary *)suggestions;
-(CNContactStore *)contactStore;
-(void)idStatusUpdatedForDestinations:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(TCSContacts *)contacts;
-(NSUserDefaults *)defaults;
-(void)_deviceDidPair:(id)arg1 ;
-(void)_saveSuggestions;
-(void)setShouldObserveSuggestionsDefaultChanges:(BOOL)arg1 ;
-(void)generateNewSuggestionsIfNecessary;
-(BOOL)_shouldGenerateNewSuggestions;
-(void)_generateNewSuggestions;
-(id)_performHousekeepingOnSuggestions:(id)arg1 ;
-(void)_stopGenerationTimer;
-(void)_addSuggestedDestination:(id)arg1 withTimestamp:(id)arg2 ;
-(void)_notifyObserversSuggestionsChanged;
-(void)_startGenerationTimerWithFireDate:(id)arg1 ;
-(id)_destinationsFromFavorites;
-(id)_destinationsFromCallHistory;
-(id)_destinationsFromCoreRecents;
-(void)_updateGenerationTimestamps;
-(void)_performIDQueryForSuggestions:(id)arg1 ;
-(void)_syncSuggestions;
-(void)destinationsDidChange:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 contacts:(id)arg2 ;
-(NSArray *)suggestedDestinations;
-(void)setGenerationTimerEnabled:(BOOL)arg1 ;
-(void)_deleteSuggestions;
-(BOOL)generationTimerEnabled;
-(BOOL)shouldObserveSuggestionsDefaultChanges;
-(void)setSuggestedDestinations:(NSArray *)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addObserver:(id)arg1 ;
-(void)_invalidate;
-(void)setSuggestions:(NSMutableDictionary *)arg1 ;
@end

