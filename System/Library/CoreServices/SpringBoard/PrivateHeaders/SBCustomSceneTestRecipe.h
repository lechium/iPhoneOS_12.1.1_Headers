//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"

@class FBScene, NSString;

@interface SBCustomSceneTestRecipe : NSObject <SBTestRecipe>
{
    FBScene *_scene;	// 8 = 0x8
}

+ (id)title;	// IMP=0x00000001002ec24c
- (void).cxx_destruct;	// IMP=0x00000001002ec694
- (void)handleVolumeDecrease;	// IMP=0x00000001002ec5e8
- (void)handleVolumeIncrease;	// IMP=0x00000001002ec278

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

