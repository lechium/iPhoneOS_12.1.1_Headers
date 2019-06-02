//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError, NSObject<BFFBackupDeviceControllerDelegate>, NSString;

@interface BFFBackupDeviceController : NSObject
{
    _Bool _backingUp;	// 8 = 0x8
    _Bool _backupFinished;	// 9 = 0x9
    _Bool _backupStateUnknown;	// 10 = 0xa
    NSObject<BFFBackupDeviceControllerDelegate> *_delegate;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    double _percentComplete;	// 32 = 0x20
    double _timeRemaining;	// 40 = 0x28
    NSDate *_completionDate;	// 48 = 0x30
    NSString *_backingUpDeviceName;	// 56 = 0x38
    NSString *_backingUpDeviceUUID;	// 64 = 0x40
}

@property(copy) NSString *backingUpDeviceUUID; // @synthesize backingUpDeviceUUID=_backingUpDeviceUUID;
@property(copy) NSString *backingUpDeviceName; // @synthesize backingUpDeviceName=_backingUpDeviceName;
@property _Bool backupStateUnknown; // @synthesize backupStateUnknown=_backupStateUnknown;
@property(retain) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain) NSError *error; // @synthesize error=_error;
@property _Bool backupFinished; // @synthesize backupFinished=_backupFinished;
@property(getter=isBackingUp) _Bool backingUp; // @synthesize backingUp=_backingUp;
@property __weak NSObject<BFFBackupDeviceControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000c8388
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000c7ff8
- (void)receivedBackupAction:(id)arg1;	// IMP=0x00000001000c7abc
- (void)reset;	// IMP=0x00000001000c79f4
- (void)retryBackup;	// IMP=0x00000001000c7910
- (void)startBackupDevice:(id)arg1 UUID:(id)arg2;	// IMP=0x00000001000c75d0
- (void)dealloc;	// IMP=0x00000001000c7528
- (id)init;	// IMP=0x00000001000c7470

@end
