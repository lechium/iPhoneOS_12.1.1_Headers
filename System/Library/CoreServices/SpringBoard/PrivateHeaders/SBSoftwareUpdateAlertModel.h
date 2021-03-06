//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, SBSoftwareUpdateStatePersistence, SUDownload;

@interface SBSoftwareUpdateAlertModel : NSObject
{
    id <SBSoftwareUpdateAlertModelDelegate> _delegate;	// 8 = 0x8
    SBSoftwareUpdateStatePersistence *_persistence;	// 16 = 0x10
    SUDownload *_updateToInstall;	// 24 = 0x18
}

@property(nonatomic) __weak id <SBSoftwareUpdateAlertModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001001e81f8
- (void)_setRemindMeLaterCount:(long long)arg1;	// IMP=0x00000001001e8084
- (void)_setUpdateToInstall:(id)arg1;	// IMP=0x00000001001e8028
- (void)_setDownloadWasQueuedRemotely:(_Bool)arg1;	// IMP=0x00000001001e7ec4
- (void)_setInstallAlertRepopStrategy:(unsigned long long)arg1 withFireDate:(id)arg2;	// IMP=0x00000001001e7ccc
- (void)_setInstallAlertFlow:(unsigned long long)arg1 forReason:(id)arg2;	// IMP=0x00000001001e7b14
- (unsigned long long)_initialInstallAlertFlowFromDownload;	// IMP=0x00000001001e7988
- (void)_initializeModelWithDownload:(id)arg1 autoInstallOperation:(id)arg2;	// IMP=0x00000001001e7804
- (void)setInstallAlertRepopStrategy:(unsigned long long)arg1 withFireDate:(id)arg2;	// IMP=0x00000001001e77f8
- (void)willInstallWithType:(unsigned long long)arg1;	// IMP=0x00000001001e77b8
- (void)didDownloadUpdate:(id)arg1;	// IMP=0x00000001001e7768
- (void)setDownloadWasQueuedRemotely:(_Bool)arg1;	// IMP=0x00000001001e775c
- (void)autoInstallOperationWasCancelledOrExpired;	// IMP=0x00000001001e7608
- (void)userSelectedRemindMeLater;	// IMP=0x00000001001e74bc
- (void)reset;	// IMP=0x00000001001e7438
@property(readonly, nonatomic) long long remindMeLaterCount;
@property(readonly, nonatomic) unsigned long long nextAlertRepopStrategy;
@property(readonly, nonatomic) NSDate *nextAlertDate;
@property(readonly, nonatomic) unsigned long long alertFlow;
- (id)initWithDownload:(id)arg1 autoInstallOperation:(id)arg2;	// IMP=0x00000001001e7220
- (id)init;	// IMP=0x00000001001e720c

@end

