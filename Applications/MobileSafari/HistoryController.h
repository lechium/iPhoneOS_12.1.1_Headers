//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _WKVisitedLinkStore;

@interface HistoryController : NSObject
{
    _WKVisitedLinkStore *_visitedLinkStore;	// 8 = 0x8
}

+ (id)sharedHistoryController;	// IMP=0x000000010008bcf8
- (void).cxx_destruct;	// IMP=0x000000010008be60
@property(readonly, nonatomic) _WKVisitedLinkStore *visitedLinkStore;
- (id)init;	// IMP=0x000000010008bd78

@end
