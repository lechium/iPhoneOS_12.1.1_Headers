//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString, SBTestStarkAlert;

@interface SBStarkAlertRecipe : NSObject <SBTestRecipe>
{
    SBTestStarkAlert *_alert;	// 8 = 0x8
}

+ (id)title;	// IMP=0x00000001001a4970
- (void).cxx_destruct;	// IMP=0x00000001001a4aa4
- (void)handleVolumeDecrease;	// IMP=0x00000001001a4a58
- (void)handleVolumeIncrease;	// IMP=0x00000001001a499c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

