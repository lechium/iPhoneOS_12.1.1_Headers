//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBDisplayLayoutContext.h"

@class BSAnimationSettings, FBSDisplay, NSMutableDictionary, NSSet, NSString, SBLayoutState, SBWorkspaceTransitionRequest;

@interface SBWorkspaceTransitionContext : NSObject <SBDisplayLayoutContext, BSDescriptionProviding>
{
    NSMutableDictionary *_entities;	// 8 = 0x8
    NSMutableDictionary *_previousEntities;	// 16 = 0x10
    _Bool _finalized;	// 24 = 0x18
    SBLayoutState *_layoutState;	// 32 = 0x20
    SBLayoutState *_previousLayoutState;	// 40 = 0x28
    _Bool _animationDisabled;	// 48 = 0x30
    BSAnimationSettings *_animationSettings;	// 56 = 0x38
    SBWorkspaceTransitionRequest *_request;	// 64 = 0x40
    id <SBWorkspaceTransitionLayoutDelegate> _layoutDelegate;	// 72 = 0x48
}

+ (id)context;	// IMP=0x000000010025fe34
@property(readonly, nonatomic, getter=_isFinalized) _Bool _finalized; // @synthesize _finalized;
@property(nonatomic) __weak id <SBWorkspaceTransitionLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(nonatomic) _Bool animationDisabled; // @synthesize animationDisabled=_animationDisabled;
@property(nonatomic) __weak SBWorkspaceTransitionRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;	// IMP=0x0000000100260e34
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100260ac4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100260a70
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100260a04
- (id)succinctDescription;	// IMP=0x00000001002609b0
@property(readonly, nonatomic) FBSDisplay *display;
- (id)_display;	// IMP=0x000000010026090c
- (void)finalize;	// IMP=0x00000001002607ac
- (id)previousEntityForIdentifier:(id)arg1;	// IMP=0x00000001002605a4
- (id)previousEntityForKey:(id)arg1;	// IMP=0x000000010026058c
- (void)setPreviousEntity:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100260410
@property(readonly, copy, nonatomic) NSSet *previousEntities;
@property(readonly, nonatomic) SBLayoutState *previousLayoutState; // @synthesize previousLayoutState=_previousLayoutState;
@property(readonly, nonatomic) SBLayoutState *layoutState; // @synthesize layoutState=_layoutState;
- (id)entityForIdentifier:(id)arg1;	// IMP=0x00000001002600f0
- (id)entityForKey:(id)arg1;	// IMP=0x00000001002600d8
- (void)setEntity:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010025ff94
@property(readonly, copy, nonatomic) NSSet *entities;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000010025fe5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

