//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBAlertItemsSettings : SBUISettings
{
    _Bool _disableBBHandlers;	// 8 = 0x8
    long long _testItemToken;	// 16 = 0x10
}

+ (id)newTestItemForToken:(long long)arg1;	// IMP=0x0000000100593c54
+ (id)settingsControllerModule;	// IMP=0x0000000100593868
@property(nonatomic) long long testItemToken; // @synthesize testItemToken=_testItemToken;
@property(nonatomic) _Bool disableBBHandlers; // @synthesize disableBBHandlers=_disableBBHandlers;
- (void)setDefaultValues;	// IMP=0x000000010059382c

@end
