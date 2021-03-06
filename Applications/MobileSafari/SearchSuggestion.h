//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CompletionItem.h"

@class NSString, SFSearchResult, WBSCompletionQuery, WBSQuerySuggestion;

@interface SearchSuggestion : NSObject <CompletionItem>
{
    _Bool _recentSearch;	// 8 = 0x8
    _Bool _searchEngineSuggestion;	// 9 = 0x9
    SFSearchResult *_sfSearchResultValue;	// 16 = 0x10
    WBSCompletionQuery *_userQuery;	// 24 = 0x18
    _Bool _goesToURL;	// 32 = 0x20
    NSString *_string;	// 40 = 0x28
}

@property(nonatomic) _Bool goesToURL; // @synthesize goesToURL=_goesToURL;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;	// IMP=0x00000001000afb2c
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
- (id)reflectedStringForUserTypedString:(id)arg1;	// IMP=0x00000001000af824
@property(readonly, nonatomic) _Bool restoresSearchState;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;	// IMP=0x00000001000af744
- (double)completionTableViewCellCustomHeightForCompletionList:(id)arg1;	// IMP=0x00000001000af730
- (id)completionTableViewCellForCompletionList:(id)arg1;	// IMP=0x00000001000af6b8
- (id)completionTableViewCellReuseIdentifier;	// IMP=0x00000001000af68c
- (void)acceptCompletionWithActionHandler:(id)arg1;	// IMP=0x00000001000af650
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;	// IMP=0x00000001000af5c0
@property(readonly, copy) NSString *description;
- (id)initWithSearchEngineSuggestion:(id)arg1 userQuery:(id)arg2;	// IMP=0x00000001000af46c
- (id)initWithRecentSearchString:(id)arg1 userQuery:(id)arg2;	// IMP=0x00000001000af3e0
- (id)initWithUserTypedQuery:(id)arg1;	// IMP=0x00000001000af35c
- (id)_initWithString:(id)arg1 userQuery:(id)arg2;	// IMP=0x00000001000af270

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool usesDefaultHeaderView;

@end

