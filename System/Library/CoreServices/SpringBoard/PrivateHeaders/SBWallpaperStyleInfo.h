//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSString, SBWallpaperEffectView;

@interface SBWallpaperStyleInfo : NSObject <BSDescriptionProviding>
{
    CDStruct_e838e30c _priorityInfo[14];	// 8 = 0x8
    SBWallpaperEffectView *_wallpaperEffectView;	// 456 = 0x1c8
    CDStruct_059c2b36 _styleTransitionState;	// 464 = 0x1d0
}

@property(nonatomic) CDStruct_059c2b36 styleTransitionState; // @synthesize styleTransitionState=_styleTransitionState;
@property(retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
- (void).cxx_destruct;	// IMP=0x0000000100252f50
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100252eac
- (id)succinctDescription;	// IMP=0x0000000100252e58
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100252a34
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001002529e0
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long highestValidPriority;
- (void)enumerateValidPrioritiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100252860
- (void)removePriorityInfoForPriority:(long long)arg1;	// IMP=0x00000001002527fc
- (void)setPriorityInfo:(CDStruct_e838e30c)arg1 forPriority:(long long)arg2;	// IMP=0x000000010025278c
- (CDStruct_e838e30c)priorityInfoForPriority:(long long)arg1;	// IMP=0x000000010025271c
- (id)init;	// IMP=0x00000001002526d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

