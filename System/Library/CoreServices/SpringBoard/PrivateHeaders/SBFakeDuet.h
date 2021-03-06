//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SBFakeDuet : NSObject
{
    NSArray *_triggers;	// 8 = 0x8
    NSArray *_appsToLaunch;	// 16 = 0x10
    CDUnknownBlockType _recommendationHandler;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010058ce10
@property(copy, nonatomic) CDUnknownBlockType recommendationHandler; // @synthesize recommendationHandler=_recommendationHandler;
@property(retain, nonatomic) NSArray *appsToLaunch; // @synthesize appsToLaunch=_appsToLaunch;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
- (void).cxx_destruct;	// IMP=0x000000010058dd60
- (void)_frontDisplayChanged:(id)arg1;	// IMP=0x000000010058dc70
- (void)_switcherRevealed:(id)arg1;	// IMP=0x000000010058dc5c
- (void)_wake:(id)arg1;	// IMP=0x000000010058dc48
- (void)_handleTrigger:(id)arg1;	// IMP=0x000000010058d828
- (void)_refreshAppsToLaunch;	// IMP=0x000000010058d728
- (void)_refreshTriggers;	// IMP=0x000000010058d68c
- (void)setAppLaunchRecommendationHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010058d680
- (void)okToLaunch:(id)arg1 forReasons:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010058d060
- (id)init;	// IMP=0x000000010058ced4

@end

