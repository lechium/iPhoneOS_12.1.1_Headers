//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, UIViewController, _WDActivityNode;

@interface WDUserActivityManager : NSObject
{
    UIViewController *_rootViewController;	// 8 = 0x8
    _WDActivityNode *_topNode;	// 16 = 0x10
    _WDActivityNode *_currentNode;	// 24 = 0x18
    NSMutableDictionary *_indexedActivities;	// 32 = 0x20
    _Bool _recordActivities;	// 40 = 0x28
    NSMutableArray *_policies;	// 48 = 0x30
}

@property(readonly, nonatomic) NSMutableArray *policies; // @synthesize policies=_policies;
@property(nonatomic) _Bool recordActivities; // @synthesize recordActivities=_recordActivities;
- (void).cxx_destruct;	// IMP=0x00000001000e0958
- (_Bool)_restoreActivityFromPolicies:(id)arg1;	// IMP=0x00000001000e0760
- (void)addPolicy:(id)arg1;	// IMP=0x00000001000e06e8
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000001000e0590
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000001000e04c8
- (void)_setCurrentNodeToResponder:(id)arg1;	// IMP=0x00000001000e0428
- (void)_restoreFromActivityChain:(id)arg1;	// IMP=0x00000001000e0134
- (void)_userActivityWithTitle:(id)arg1 keywords:(id)arg2 activityType:(id)arg3;	// IMP=0x00000001000dffe4
- (id)_userActivityWithType:(id)arg1;	// IMP=0x00000001000dfde0
- (void)_resetActivities;	// IMP=0x00000001000dfd58
- (void)restoreFromUserActivity:(id)arg1;	// IMP=0x00000001000dfb94
- (id)_castleRockSpotlightBreadcrumbs:(id)arg1;	// IMP=0x00000001000df7d4
- (id)_handoffActivityBreadcrumbsForOnboarding:(id)arg1;	// IMP=0x00000001000df670
- (id)_handoffActivityBreadcrumbsForSampleType:(id)arg1;	// IMP=0x00000001000df460
- (void)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3;	// IMP=0x00000001000df178
- (void)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2 title:(id)arg3 keywords:(id)arg4;	// IMP=0x00000001000def4c
- (void)setRootViewController:(id)arg1;	// IMP=0x00000001000ded74
- (id)init;	// IMP=0x00000001000dec6c

@end

