//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSURLCompletionMatchData.h"

@class NSString, WBSHistoryItem;

@interface URLCompletionMatchHistoryItemData : NSObject <WBSURLCompletionMatchData>
{
    WBSHistoryItem *_historyItem;	// 8 = 0x8
}

@property(readonly, nonatomic) WBSHistoryItem *historyItem; // @synthesize historyItem=_historyItem;
- (void).cxx_destruct;	// IMP=0x000000010011c408
- (id)_historyItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000010011c33c
- (float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000010011c314
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000010011c248
- (_Bool)matchesAutocompleteTrigger:(id)arg1;	// IMP=0x000000010011c0c4
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010011bee0
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010011be50
- (id)matchDataByMergingWithMatchData:(id)arg1;	// IMP=0x000000010011bd78
@property(readonly, nonatomic) _Bool lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) _Bool containsBookmark;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;	// IMP=0x000000010011bd28
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;	// IMP=0x000000010011bc54
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;	// IMP=0x000000010011bc48
- (id)pageTitleAtIndex:(unsigned long long)arg1;	// IMP=0x000000010011bc30
@property(readonly, nonatomic) NSString *originalURLString;
- (id)_userVisibleURLString;	// IMP=0x000000010011bc00
- (id)initWithHistoryItem:(id)arg1;	// IMP=0x000000010011bb64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long visitCount;

@end

