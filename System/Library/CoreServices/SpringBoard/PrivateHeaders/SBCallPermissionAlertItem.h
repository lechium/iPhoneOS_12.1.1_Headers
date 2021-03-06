//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSURL;

@interface SBCallPermissionAlertItem : SBAlertItem
{
    NSURL *_url;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;	// IMP=0x00000001001eb334
- (id)cancelActionTitle;	// IMP=0x00000001001eb2b0
- (id)defaultActionTitle;	// IMP=0x00000001001eb23c
- (id)alertTitle;	// IMP=0x00000001001eb224
- (_Bool)allowMenuButtonDismissal;	// IMP=0x00000001001eb21c
- (_Bool)dismissOnLock;	// IMP=0x00000001001eb214
- (_Bool)shouldShowInLockScreen;	// IMP=0x00000001001eb20c
- (_Bool)forcesModalAlertAppearance;	// IMP=0x00000001001eb204
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000001001eaf3c
- (id)initWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001eae70

@end

