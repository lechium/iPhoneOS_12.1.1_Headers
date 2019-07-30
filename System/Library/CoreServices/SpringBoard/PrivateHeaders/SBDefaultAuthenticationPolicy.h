//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFAuthenticationPolicy.h"

@class NSString, SecureBackup;

@interface SBDefaultAuthenticationPolicy : NSObject <SBFAuthenticationPolicy>
{
    SecureBackup *_secureBackupHelper;	// 8 = 0x8
}

@property(retain, nonatomic, getter=_secureBackupHelper, setter=_setSecureBackupHelper:) SecureBackup *secureBackupHelper; // @synthesize secureBackupHelper=_secureBackupHelper;
- (void).cxx_destruct;	// IMP=0x0000000100199e1c
- (void)clearPasscodeCache;	// IMP=0x0000000100199d7c
- (void)cachePasscode:(id)arg1;	// IMP=0x0000000100199c38
- (void)wipeDeviceWithReason:(id)arg1;	// IMP=0x0000000100199b6c
- (_Bool)usesSecureMode;	// IMP=0x0000000100199b64
- (_Bool)shouldClearBlockStateOnSync;	// IMP=0x0000000100199b5c
- (_Bool)allowAuthenticationRevocation;	// IMP=0x0000000100199b14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

