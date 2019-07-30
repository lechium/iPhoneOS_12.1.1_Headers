//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"

@class FBWorkspaceEventQueueLock, NSString, NSTimer;

@interface SBBlockWorkspaceQueueTestRecipe : NSObject <SBTestRecipe>
{
    NSTimer *_blockTimer;	// 8 = 0x8
    FBWorkspaceEventQueueLock *_queueLock;	// 16 = 0x10
}

+ (id)title;	// IMP=0x0000000100384980
@property(retain, nonatomic) FBWorkspaceEventQueueLock *queueLock; // @synthesize queueLock=_queueLock;
@property(retain, nonatomic) NSTimer *blockTimer; // @synthesize blockTimer=_blockTimer;
- (void).cxx_destruct;	// IMP=0x0000000100384c34
- (void)handleVolumeDecrease;	// IMP=0x0000000100384b64
- (void)blockTimerDidFire:(id)arg1;	// IMP=0x0000000100384ac8
- (void)handleVolumeIncrease;	// IMP=0x00000001003849ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

