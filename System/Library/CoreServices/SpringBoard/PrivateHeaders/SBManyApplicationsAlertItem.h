//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSArray, NSURL;

@interface SBManyApplicationsAlertItem : SBAlertItem
{
    NSURL *_url;	// 8 = 0x8
    NSArray *_applications;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;	// IMP=0x00000001004a3f38
- (_Bool)allowMenuButtonDismissal;	// IMP=0x00000001004a3f00
- (_Bool)dismissOnLock;	// IMP=0x00000001004a3ef8
- (_Bool)shouldShowInLockScreen;	// IMP=0x00000001004a3ef0
- (void)deactivateForButton;	// IMP=0x00000001004a3e54
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000001004a37c8
- (id)initWithURL:(id)arg1 applications:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001004a3550
- (id)init;	// IMP=0x00000001004a3538

@end

