//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIBannerSource.h"
#import "SBUIBannerTargetManagerObserver.h"

@class NSMutableArray, NSString;

@interface SBStarkBannerSource : NSObject <SBUIBannerSource, SBUIBannerTargetManagerObserver>
{
    id <SBStarkSessionConfiguring> _configuration;	// 8 = 0x8
    void *_allowedTargetIdentifier;	// 16 = 0x10
    id <SBUIBannerTarget> _target;	// 24 = 0x18
    NSMutableArray *_enqueuedItems;	// 32 = 0x20
}

@property(readonly, nonatomic) id <SBStarkSessionConfiguring> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;	// IMP=0x00000001005a73c4
- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;	// IMP=0x00000001005a735c
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;	// IMP=0x00000001005a72a8
- (id)newBannerViewForContext:(id)arg1;	// IMP=0x00000001005a7154
- (id)dequeueNextBannerItemForTarget:(id)arg1;	// IMP=0x00000001005a70d4
- (id)peekNextBannerItemForTarget:(id)arg1;	// IMP=0x00000001005a7078
- (unsigned long long)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001005a6e3c
- (void)removeEnqueuedItemsAtIndexes:(id)arg1;	// IMP=0x00000001005a6e24
- (void)dismissCurrentItemFromTarget;	// IMP=0x00000001005a6e04
- (void)enqueueItem:(id)arg1;	// IMP=0x00000001005a6d80
- (id)indexesOfEnqueuedItemsMatchingContext:(id)arg1;	// IMP=0x00000001005a6cac
- (id)currentItemFromTarget;	// IMP=0x00000001005a6b74
- (void)dealloc;	// IMP=0x00000001005a6af8
- (id)init;	// IMP=0x00000001005a6ae4
- (id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void *)arg2;	// IMP=0x00000001005a688c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

