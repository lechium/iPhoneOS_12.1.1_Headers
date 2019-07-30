//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceEntity.h"

#import "SBProcessSettings.h"

@class NSSet, NSString, SBApplication, SBProcessSettings;

@interface SBWorkspaceApplication : SBWorkspaceEntity <SBProcessSettings>
{
    SBApplication *_application;	// 40 = 0x28
    NSSet *_actions;	// 48 = 0x30
    SBProcessSettings *_processSettings;	// 56 = 0x38
}

+ (id)entityForApplication:(id)arg1 actions:(id)arg2;	// IMP=0x00000001004f24b4
+ (id)entityForApplication:(id)arg1;	// IMP=0x00000001004f24a4
+ (CDUnknownBlockType)entityGenerator;	// IMP=0x00000001004f2374
@property(readonly, nonatomic) SBProcessSettings *processSettings; // @synthesize processSettings=_processSettings;
@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) SBApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;	// IMP=0x00000001004f2ef0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001004f2de4
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001004f2bc8
- (Class)viewControllerClass;	// IMP=0x00000001004f2bb4
- (id)workspaceApplication;	// IMP=0x00000001004f2bb0
- (_Bool)isApplicationEntity;	// IMP=0x00000001004f2ba8
- (long long)_mainDisplayPreferredInterfaceOrientation;	// IMP=0x00000001004f2b48
- (void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1;	// IMP=0x00000001004f2ad8
- (CDUnknownBlockType)_generator;	// IMP=0x00000001004f2ac4
- (_Bool)_supportsDynamicResizing;	// IMP=0x00000001004f2a78
- (_Bool)_supportsPresentationAtAnySize;	// IMP=0x00000001004f2a2c
- (_Bool)_supportsLayoutRole:(long long)arg1;	// IMP=0x00000001004f29bc
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)representedDisplay;	// IMP=0x00000001004f2998
- (void)clearProcessSettings;	// IMP=0x00000001004f2980
- (void)applyProcessSettings:(id)arg1;	// IMP=0x00000001004f28f4
- (id)copyProcessSettings;	// IMP=0x00000001004f28dc
- (id)objectForProcessSetting:(long long)arg1;	// IMP=0x00000001004f28c4
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;	// IMP=0x00000001004f2830
- (_Bool)boolForProcessSetting:(long long)arg1;	// IMP=0x00000001004f2818
- (long long)flagForProcessSetting:(long long)arg1;	// IMP=0x00000001004f27f4
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;	// IMP=0x00000001004f2768
- (id)initWithApplication:(id)arg1 actions:(id)arg2;	// IMP=0x00000001004f2550
- (id)initWithApplication:(id)arg1;	// IMP=0x00000001004f2540

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

