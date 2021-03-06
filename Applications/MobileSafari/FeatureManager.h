//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBUFeatureManager.h"

@interface FeatureManager : WBUFeatureManager
{
    _Bool _addToHomeScreenAvailable;	// 8 = 0x8
    _Bool _webFeedSubscriptionsAvailable;	// 9 = 0x9
}

+ (id)sharedFeatureManager;	// IMP=0x000000010015fbe4
@property(readonly, nonatomic, getter=isWebFeedSubscriptionsAvailable) _Bool webFeedSubscriptionsAvailable; // @synthesize webFeedSubscriptionsAvailable=_webFeedSubscriptionsAvailable;
@property(readonly, nonatomic, getter=isAddToHomeScreenAvailable) _Bool addToHomeScreenAvailable; // @synthesize addToHomeScreenAvailable=_addToHomeScreenAvailable;
- (void)_updateAccessLevel;	// IMP=0x000000010015fcd8
- (id)init;	// IMP=0x000000010015fc64

@end

