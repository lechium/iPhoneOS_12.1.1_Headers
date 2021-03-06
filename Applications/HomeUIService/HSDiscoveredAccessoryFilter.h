//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSEntitlementContext, NSSet;

@interface HSDiscoveredAccessoryFilter : NSObject
{
    NSSet *_filteredBrowsingCategories;	// 8 = 0x8
    HSEntitlementContext *_entitlementContext;	// 16 = 0x10
    NSSet *_blacklistedAccessoryCategories;	// 24 = 0x18
    NSSet *_whitelistedAccessoryCategories;	// 32 = 0x20
}

@property(copy, nonatomic) NSSet *whitelistedAccessoryCategories; // @synthesize whitelistedAccessoryCategories=_whitelistedAccessoryCategories;
@property(copy, nonatomic) NSSet *blacklistedAccessoryCategories; // @synthesize blacklistedAccessoryCategories=_blacklistedAccessoryCategories;
@property(readonly, nonatomic) HSEntitlementContext *entitlementContext; // @synthesize entitlementContext=_entitlementContext;
@property(copy, nonatomic) NSSet *filteredBrowsingCategories; // @synthesize filteredBrowsingCategories=_filteredBrowsingCategories;
- (void).cxx_destruct;	// IMP=0x0000000100020644
- (void)_computeBlacklistedAccessoryCategories;	// IMP=0x00000001000203d8
- (void)_computeWhitelistedAccessoryCategories;	// IMP=0x00000001000202a4
- (_Bool)shouldShowAccessory:(id)arg1;	// IMP=0x000000010002002c
- (id)initWithEntitlementContext:(id)arg1;	// IMP=0x000000010001fe54

@end

