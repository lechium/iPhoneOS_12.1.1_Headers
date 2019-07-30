//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDisplayLayoutObserver.h"

@class FBSDisplayLayoutMonitor, NSObject<OS_dispatch_queue>, NSString, SBBackBoardServicesInterface;

@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SBBackBoardServicesInterface *_queue_bksInterface;	// 16 = 0x10
    FBSDisplayLayoutMonitor *_queue_displayLayoutMonitor;	// 24 = 0x18
    struct NSMutableSet *_queue_hitTestRegions;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010029ad94
- (void).cxx_destruct;	// IMP=0x000000010029cdec
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;	// IMP=0x000000010029c920
- (void)_queue_handleHitTestRegionUpdate:(struct NSMutableSet *)arg1 forDisplay:(id)arg2;	// IMP=0x000000010029c844
- (void)_queue_handleDisplayLayoutUpdateWithSceneRects:(struct NSMutableSet *)arg1 forDisplay:(id)arg2;	// IMP=0x000000010029c7b0
- (struct NSMutableSet *)_calculateHitTestRegionsFromSceneRects:(struct NSMutableSet *)arg1;	// IMP=0x000000010029bff0
- (struct NSMutableSet *)_calculateTouchRegionsFromSceneRects:(struct NSMutableSet *)arg1;	// IMP=0x000000010029b5d0
- (id)displayLayoutMonitor;	// IMP=0x000000010029b468
- (void)setDisplayLayoutMonitor:(id)arg1;	// IMP=0x000000010029b30c
- (double)touchRegionBuffer;	// IMP=0x000000010029b268
- (void)dealloc;	// IMP=0x000000010029b030
- (id)_initWithBKSInterface:(id)arg1 displayLayoutMonitor:(id)arg2;	// IMP=0x000000010029aef4
- (id)init;	// IMP=0x000000010029ae58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
