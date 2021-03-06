//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BYExpressSetupDataSource.h"

@class BYBackupMetadata, NSString, RestorableBackupItem;

@interface BYExpressSetupBackupSource : NSObject <BYExpressSetupDataSource>
{
    RestorableBackupItem *_backupItem;	// 8 = 0x8
    BYBackupMetadata *_backupMetadata;	// 16 = 0x10
}

@property(retain, nonatomic) BYBackupMetadata *backupMetadata; // @synthesize backupMetadata=_backupMetadata;
- (void).cxx_destruct;	// IMP=0x000000010009baf8
- (id)siriOptIn;	// IMP=0x000000010009ba58
- (id)deviceAnalyticsOptIn;	// IMP=0x000000010009b9dc
- (id)appAnalyticsOptIn;	// IMP=0x000000010009b960
- (_Bool)locationServicesOptIn;	// IMP=0x000000010009b948
- (id)findMyPhoneOptIn;	// IMP=0x000000010009b8cc
- (id)appleID;	// IMP=0x000000010009b844
- (id)firstName;	// IMP=0x000000010009b7bc
- (id)sourceDeviceClass;	// IMP=0x000000010009b75c
- (id)sourceDeviceName;	// IMP=0x000000010009b6fc
- (_Bool)dataAvailable;	// IMP=0x000000010009b6f4
- (id)initWithBackupItem:(id)arg1;	// IMP=0x000000010009b674

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

