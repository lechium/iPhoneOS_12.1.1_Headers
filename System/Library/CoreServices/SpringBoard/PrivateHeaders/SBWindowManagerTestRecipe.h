//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBApplicationProcessObserver.h"
#import "SBTestRecipe.h"

@class FBApplicationUpdateScenesTransaction, NSString;

@interface SBWindowManagerTestRecipe : NSObject <FBApplicationProcessObserver, SBTestRecipe>
{
    FBApplicationUpdateScenesTransaction *_currentTransaction;	// 8 = 0x8
}

+ (id)title;	// IMP=0x00000001001a7154
@property(retain, nonatomic) FBApplicationUpdateScenesTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
- (void).cxx_destruct;	// IMP=0x00000001001a7600
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;	// IMP=0x00000001001a7424
- (void)handleVolumeDecrease;	// IMP=0x00000001001a738c
- (void)handleVolumeIncrease;	// IMP=0x00000001001a7180

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
