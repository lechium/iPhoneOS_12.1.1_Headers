//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFMobileKeyBag;

@interface SBDataRecoveryController : NSObject
{
    SBFMobileKeyBag *_mobileKeyBag;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001005b6fbc
- (void)performDataRecovery;	// IMP=0x00000001005b6fb0
@property(readonly, nonatomic) _Bool dataRecoveryRequired;
- (id)initWithMobileKeyBag:(id)arg1;	// IMP=0x00000001005b6e84
- (id)init;	// IMP=0x00000001005b6e24

@end

