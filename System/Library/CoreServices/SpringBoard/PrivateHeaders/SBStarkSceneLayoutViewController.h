//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSceneLayoutViewController.h"

@interface SBStarkSceneLayoutViewController : SBSceneLayoutViewController
{
    id <SBStarkSessionConfiguring> _configuration;	// 16 = 0x10
}

+ (Class)_layoutStateClass;	// IMP=0x0000000100531618
- (void).cxx_destruct;	// IMP=0x0000000100531bc8
- (struct CGRect)_referenceFrameForApplicationIdentifier:(id)arg1 inLayoutState:(id)arg2;	// IMP=0x0000000100531a88
- (struct CGRect)referenceFrameForIdentifier:(id)arg1 inLayoutState:(id)arg2;	// IMP=0x0000000100531a04
- (struct CGRect)referenceBoundsForIdentifier:(id)arg1 inLayoutState:(id)arg2;	// IMP=0x0000000100531998
- (struct CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2;	// IMP=0x00000001005318c8
- (struct CGRect)referenceBoundsForEntity:(id)arg1 inLayoutState:(id)arg2;	// IMP=0x000000010053185c
- (void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3;	// IMP=0x0000000100531788
- (id)initWithDisplay:(id)arg1 configuration:(id)arg2;	// IMP=0x000000010053162c

@end
