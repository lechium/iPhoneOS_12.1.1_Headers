//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CompletionList, NSDate, NSString;

@interface SearchStateItem : NSObject
{
    _Bool _didOriginateFromSearchSuggestion;	// 8 = 0x8
    NSDate *_cacheDate;	// 16 = 0x10
    CompletionList *_completionList;	// 24 = 0x18
    NSString *_destinationTLD;	// 32 = 0x20
    long long _parsecQueryID;	// 40 = 0x28
}

@property(nonatomic) long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
@property(nonatomic) _Bool didOriginateFromSearchSuggestion; // @synthesize didOriginateFromSearchSuggestion=_didOriginateFromSearchSuggestion;
@property(copy, nonatomic) NSString *destinationTLD; // @synthesize destinationTLD=_destinationTLD;
@property(retain, nonatomic) CompletionList *completionList; // @synthesize completionList=_completionList;
@property(retain, nonatomic) NSDate *cacheDate; // @synthesize cacheDate=_cacheDate;
- (void).cxx_destruct;	// IMP=0x00000001000cb74c

@end
