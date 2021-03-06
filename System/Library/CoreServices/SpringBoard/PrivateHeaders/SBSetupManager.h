//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBSetupManager : NSObject
{
    _Bool _inSetupMode;	// 8 = 0x8
    _Bool _fromOTASoftwareUpdate;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x00000001001f6d74
@property(nonatomic) _Bool fromOTASoftwareUpdate; // @synthesize fromOTASoftwareUpdate=_fromOTASoftwareUpdate;
- (_Bool)_setInSetupMode:(_Bool)arg1;	// IMP=0x00000001001f7284
- (void)postLaunchCompleteNotificationForSetup;	// IMP=0x00000001001f725c
- (void)showSetupLogoForSetupLaunch;	// IMP=0x00000001001f7208
- (_Bool)setupIsRunningForUpdateInstall;	// IMP=0x00000001001f718c
- (_Bool)setupHasFinishedRestoringFromBackup;	// IMP=0x00000001001f70d8
- (_Bool)updateInSetupMode;	// IMP=0x00000001001f6eb8
@property(readonly, nonatomic, getter=isInSetupMode) _Bool inSetupMode;
- (id)init;	// IMP=0x00000001001f6e38

@end

