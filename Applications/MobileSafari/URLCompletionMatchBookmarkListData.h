//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSURLCompletionMatchData.h"

@class NSMutableArray, NSString, WBSHistoryItem;

@interface URLCompletionMatchBookmarkListData : NSObject <WBSURLCompletionMatchData>
{
    NSMutableArray *_bookmarks;	// 8 = 0x8
    WBSHistoryItem *_historyItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010007ced8
- (id)_historyItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000010007ce08
- (float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000010007cdd8
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000010007cd0c
- (_Bool)matchesAutocompleteTrigger:(id)arg1;	// IMP=0x000000010007cb80
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010007c950
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010007c804
- (id)matchDataByMergingWithMatchData:(id)arg1;	// IMP=0x000000010007c730
@property(readonly, nonatomic) _Bool lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) _Bool containsBookmark;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;	// IMP=0x000000010007c640
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;	// IMP=0x000000010007c518
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;	// IMP=0x000000010007c48c
- (id)pageTitleAtIndex:(unsigned long long)arg1;	// IMP=0x000000010007c3cc
@property(readonly, nonatomic) NSString *originalURLString;
- (id)_historyItemUserVisibleURLString;	// IMP=0x000000010007c324
- (id)_bookmarkUserVisibleURLString;	// IMP=0x000000010007c24c
- (id)bookmark;	// IMP=0x000000010007c230
- (id)initWithBookmark:(id)arg1 andBookmark:(id)arg2;	// IMP=0x000000010007c154
- (id)initWithBookmark:(id)arg1 historyItem:(id)arg2;	// IMP=0x000000010007c064

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long visitCount;

@end

