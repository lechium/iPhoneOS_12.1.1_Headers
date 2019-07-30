//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBLayoutElementDescriptor.h"
#import "SBWorkspaceEntityGenerating.h"

@class NSString;

@interface SBLayoutElement : NSObject <SBLayoutElementDescriptor, SBWorkspaceEntityGenerating>
{
    NSString *_identifier;	// 8 = 0x8
    long long _role;	// 16 = 0x10
    CDUnknownBlockType _entityGenerator;	// 24 = 0x18
    unsigned long long _supportedLayoutRoles;	// 32 = 0x20
    unsigned long long _layoutAttributes;	// 40 = 0x28
    Class _viewControllerClass;	// 48 = 0x30
}

+ (id)elementWithDescriptor:(id)arg1 role:(long long)arg2;	// IMP=0x0000000100338e48
@property(readonly, nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
@property(readonly, nonatomic) unsigned long long layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(readonly, nonatomic) unsigned long long supportedLayoutRoles; // @synthesize supportedLayoutRoles=_supportedLayoutRoles;
@property(copy, nonatomic) CDUnknownBlockType entityGenerator; // @synthesize entityGenerator=_entityGenerator;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;	// IMP=0x00000001003398d0
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010033962c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001003395d8
- (id)succinctDescriptionBuilder;	// IMP=0x000000010033951c
- (id)succinctDescription;	// IMP=0x00000001003394c8
- (id)workspaceEntity;	// IMP=0x0000000100339424
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;	// IMP=0x0000000100339408
- (_Bool)supportsLayoutRole:(long long)arg1;	// IMP=0x00000001003393f4
@property(readonly, nonatomic) long long layoutRole;
- (_Bool)hasSameIdentityAsElement:(id)arg1;	// IMP=0x0000000100339348
@property(readonly, copy, nonatomic) NSString *layoutIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001003391c8
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 supportedRoles:(unsigned long long)arg3 attributes:(unsigned long long)arg4 viewControllerClass:(Class)arg5 entityGenerator:(CDUnknownBlockType)arg6;	// IMP=0x0000000100338f64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
