//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CompletionProviderDelegate.h"
#import "FindOnPageCompletionProviderDataSource.h"
#import "SearchSuggestionProviderDelegate.h"

@class BrowserController, CompletionListGroup, CompletionProvider, FindOnPageCompletionProvider, NSArray, NSDate, NSMutableDictionary, NSString, NSTimer, QuickWebsiteSearchCompletionProvider, ReadingListCompletionProvider, SearchQueryRestorationCompletionItem, SearchSuggestionProvider, URLCompletionProvider, UniversalSearchCompletionProvider, UniversalSearchSession, WBSCompletionQuery;

@interface CompletionList : NSObject <CompletionProviderDelegate, FindOnPageCompletionProviderDataSource, SearchSuggestionProviderDelegate>
{
    WBSCompletionQuery *_query;	// 8 = 0x8
    unsigned long long _inputTypeOfStringToComplete;	// 16 = 0x10
    NSArray *_groups;	// 24 = 0x18
    SearchQueryRestorationCompletionItem *_queryRestorationCompletionItem;	// 32 = 0x20
    NSMutableDictionary *_rankingFeedbackForHiddenOrDuplicateResults;	// 40 = 0x28
    NSDate *_nextAllowedUpdateTime;	// 48 = 0x30
    NSDate *_showPartialCompletionsTime;	// 56 = 0x38
    NSTimer *_updateTimer;	// 64 = 0x40
    CompletionListGroup *_findOnPageGroup;	// 72 = 0x48
    NSString *_stringMatchedByTopHit;	// 80 = 0x50
    NSString *_matchingStringInTopHit;	// 88 = 0x58
    id <CompletionItem> _topHit;	// 96 = 0x60
    _Bool _tryParsecRewritesIfNoTopHit;	// 104 = 0x68
    WBSCompletionQuery *_rewrittenQuery;	// 112 = 0x70
    _Bool _shouldIncludeSearchSuggestions;	// 120 = 0x78
    _Bool _networkIsReachable;	// 121 = 0x79
    BrowserController *_browserController;	// 128 = 0x80
    UniversalSearchSession *_parsecSearchSession;	// 136 = 0x88
    id <CompletionListDelegate> _delegate;	// 144 = 0x90
    unsigned long long _maximumCompletionsPerGroup;	// 152 = 0x98
    URLCompletionProvider *_URLCompletionProvider;	// 160 = 0xa0
    SearchSuggestionProvider *_suggestionProvider;	// 168 = 0xa8
    ReadingListCompletionProvider *_readingListProvider;	// 176 = 0xb0
    FindOnPageCompletionProvider *_findOnPageProvider;	// 184 = 0xb8
    QuickWebsiteSearchCompletionProvider *_quickWebsiteSearchProvider;	// 192 = 0xc0
    CompletionProvider *_firstRemoteCompletionProviderToRespondToQuery;	// 200 = 0xc8
    UniversalSearchCompletionProvider *_universalSearchProvider;	// 208 = 0xd0
    NSDate *_otherRenderTimeoutStartTime;	// 216 = 0xd8
    NSDate *_searchRenderTimeoutStartTime;	// 224 = 0xe0
    NSDate *_minRenderTimeoutStartTime;	// 232 = 0xe8
}

+ (id)completionBookmarkProvider;	// IMP=0x000000010013bcb4
@property(retain, nonatomic) NSDate *minRenderTimeoutStartTime; // @synthesize minRenderTimeoutStartTime=_minRenderTimeoutStartTime;
@property(retain, nonatomic) NSDate *searchRenderTimeoutStartTime; // @synthesize searchRenderTimeoutStartTime=_searchRenderTimeoutStartTime;
@property(retain, nonatomic) NSDate *otherRenderTimeoutStartTime; // @synthesize otherRenderTimeoutStartTime=_otherRenderTimeoutStartTime;
@property(retain, nonatomic) UniversalSearchCompletionProvider *universalSearchProvider; // @synthesize universalSearchProvider=_universalSearchProvider;
@property(retain, nonatomic) CompletionProvider *firstRemoteCompletionProviderToRespondToQuery; // @synthesize firstRemoteCompletionProviderToRespondToQuery=_firstRemoteCompletionProviderToRespondToQuery;
@property(retain, nonatomic) QuickWebsiteSearchCompletionProvider *quickWebsiteSearchProvider; // @synthesize quickWebsiteSearchProvider=_quickWebsiteSearchProvider;
@property(retain, nonatomic) FindOnPageCompletionProvider *findOnPageProvider; // @synthesize findOnPageProvider=_findOnPageProvider;
@property(retain, nonatomic) ReadingListCompletionProvider *readingListProvider; // @synthesize readingListProvider=_readingListProvider;
@property(retain, nonatomic) SearchSuggestionProvider *suggestionProvider; // @synthesize suggestionProvider=_suggestionProvider;
@property(retain, nonatomic) URLCompletionProvider *URLCompletionProvider; // @synthesize URLCompletionProvider=_URLCompletionProvider;
@property(nonatomic) _Bool networkIsReachable; // @synthesize networkIsReachable=_networkIsReachable;
@property(nonatomic) unsigned long long maximumCompletionsPerGroup; // @synthesize maximumCompletionsPerGroup=_maximumCompletionsPerGroup;
@property(retain, nonatomic) WBSCompletionQuery *query; // @synthesize query=_query;
@property(nonatomic) _Bool shouldIncludeSearchSuggestions; // @synthesize shouldIncludeSearchSuggestions=_shouldIncludeSearchSuggestions;
@property(nonatomic) __weak id <CompletionListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UniversalSearchSession *parsecSearchSession; // @synthesize parsecSearchSession=_parsecSearchSession;
@property(readonly, nonatomic) __weak BrowserController *browserController; // @synthesize browserController=_browserController;
- (void).cxx_destruct;	// IMP=0x000000010013d740
- (id)tabDocumentForFindOnPageCompletionProvider:(id)arg1;	// IMP=0x000000010013d4bc
- (void)searchSuggestionProviderDidStopConnection:(id)arg1;	// IMP=0x000000010013d480
- (void)searchSuggestionProviderDidStartConnection:(id)arg1;	// IMP=0x000000010013d444
- (id)_findOnPageGroupForQuery:(id)arg1;	// IMP=0x000000010013d358
@property(readonly, nonatomic) unsigned long long findOnPageGroupIndex;
- (void)clearCachedSearches;	// IMP=0x000000010013d30c
- (void)clearCachedSearchQuery;	// IMP=0x000000010013d2f4
- (void)didResumeSearch;	// IMP=0x000000010013d288
- (void)restoreCachedCompletions;	// IMP=0x000000010013d17c
- (void)cacheCurrentCompletionsAfterAcceptanceOfCompletionItem:(id)arg1;	// IMP=0x000000010013cef0
- (void)stopCompleting;	// IMP=0x000000010013ce0c
@property(readonly, nonatomic) _Bool hasCompletions;
- (void)configureHeaderView:(id)arg1 forGroupAtIndex:(unsigned long long)arg2;	// IMP=0x000000010013cb30
- (id)headerViewForGroupAtIndex:(unsigned long long)arg1;	// IMP=0x000000010013cad0
- (id)headerViewReuseIdentifierForGroupAtIndex:(unsigned long long)arg1;	// IMP=0x000000010013ca70
- (id)completionsForGroupAtIndex:(unsigned long long)arg1;	// IMP=0x000000010013ca10
- (id)titleForGroupAtIndex:(unsigned long long)arg1;	// IMP=0x000000010013c9b0
- (id)defaultSectionTitleForGroupAtIndex:(unsigned long long)arg1;	// IMP=0x000000010013c950
- (unsigned long long)numberOfGroups;	// IMP=0x000000010013c938
- (void)completionProviderDidFail:(id)arg1;	// IMP=0x000000010013c92c
- (void)completionProvider:(id)arg1 didFinishCompletingString:(id)arg2;	// IMP=0x000000010013c59c
- (_Bool)isTopHitReadyForString:(id)arg1;	// IMP=0x000000010013c578
- (id)topHitForString:(id)arg1;	// IMP=0x000000010013c534
- (_Bool)_topHitMatchesString:(id)arg1;	// IMP=0x000000010013c49c
- (void)_updateProviders;	// IMP=0x000000010013bd34
- (void)_setNeedsUpdate;	// IMP=0x000000010013bc28
- (void)_scheduleUpdateOnOrBeforeDate:(id)arg1 withCurrentDate:(id)arg2;	// IMP=0x000000010013ba9c
- (_Bool)_searchRenderTimeoutHasElapsed;	// IMP=0x000000010013b99c
- (void)_updateTimerFired:(id)arg1;	// IMP=0x000000010013b990
- (void)_update;	// IMP=0x000000010013b42c
- (void)_invalidateUpdateTimer;	// IMP=0x000000010013b3f0
- (_Bool)_urlString:(id)arg1 isProbablyContainedIn:(id)arg2;	// IMP=0x000000010013b1ec
- (void)_searchForURLTopHits:(id)arg1 intoTopHits:(id)arg2 andAddresses:(id)arg3;	// IMP=0x000000010013afe8
- (id)_addTopHits:(id)arg1 intoGroups:(id)arg2;	// IMP=0x000000010013aec0
- (void)_addResult:(id)arg1 intoGroup:(id)arg2 unlessHiddenBy:(id)arg3 topHit:(id)arg4;	// IMP=0x000000010013aaa8
- (void)_addResults:(id)arg1 intoGroups:(id)arg2;	// IMP=0x000000010013a730
- (_Bool)_shouldShowAccessoryContainingCompletionForResults:(id)arg1;	// IMP=0x000000010013a728
- (_Bool)_shouldShowGroupedCompletionForResults:(id)arg1;	// IMP=0x000000010013a720
- (id)_groupsForQuery:(id)arg1 allowPartialCompletions:(_Bool)arg2 findOnPageGroup:(id *)arg3 topHit:(id *)arg4 topHitReady:(_Bool *)arg5;	// IMP=0x00000001001392f4
@property(readonly, nonatomic) _Bool hasParsecResults;
- (_Bool)_shouldFetchSearchSuggestions;	// IMP=0x0000000100139070
- (void)_removeCompletionsWithAddressInSet:(id)arg1 fromArray:(id)arg2 andTruncateTo:(unsigned long long)arg3;	// IMP=0x0000000100138f30
- (id)_groupsOnUnreachableNetworkForQuery:(id)arg1;	// IMP=0x0000000100138e44
- (void)_removeSearchURLsFromCompletions:(id)arg1;	// IMP=0x0000000100138cb4
- (id)_groupWithTitle:(id)arg1 completions:(id)arg2;	// IMP=0x0000000100138c44
- (id)_groupWithTitle:(id)arg1 completions:(id)arg2 maximumCompletions:(unsigned long long)arg3;	// IMP=0x0000000100138bb0
- (id)_titleForFindOnPageHeaderWithMatchCount:(unsigned long long)arg1;	// IMP=0x0000000100138848
- (id)_completionsByMergingRecentSearches:(id)arg1 withSuggestions:(id)arg2 andLiteralSearch:(id)arg3;	// IMP=0x0000000100137f0c
- (id)_recentSearchesForQuery:(id)arg1;	// IMP=0x0000000100137d00
- (void)dealloc;	// IMP=0x0000000100137cb4
- (id)initWithParsecSearchSession:(id)arg1 browserController:(id)arg2;	// IMP=0x0000000100137bd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

