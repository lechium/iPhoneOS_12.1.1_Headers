//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSError;

@interface SBSoftwareUpdateDownloadFailedAlertItem : SBBaseSoftwareUpdateAlertItem
{
    NSError *_error;	// 8 = 0x8
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;	// IMP=0x0000000100330ab8
- (_Bool)allowInSetup;	// IMP=0x0000000100330a68
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000001003301fc

@end
