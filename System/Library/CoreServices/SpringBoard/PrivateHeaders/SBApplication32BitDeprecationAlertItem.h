//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem
{
    SBApplication *_associatedDisplay;	// 8 = 0x8
    CDUnknownBlockType _manualDismissalHandler;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType manualDismissalHandler; // @synthesize manualDismissalHandler=_manualDismissalHandler;
@property(nonatomic) __weak SBApplication *associatedDisplay; // @synthesize associatedDisplay=_associatedDisplay;
- (void).cxx_destruct;	// IMP=0x00000001003a9394
- (id)_actions;	// IMP=0x00000001003a91b4
- (id)_message;	// IMP=0x00000001003a9140
- (id)_title;	// IMP=0x00000001003a9010
- (void)_displayDeactivated:(id)arg1;	// IMP=0x00000001003a8fd8
- (void)_setAssociatedDisplay:(id)arg1;	// IMP=0x00000001003a8eb8
- (_Bool)dismissOnLock;	// IMP=0x00000001003a8eb0
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000001003a8cf8
- (id)initWithApplication:(id)arg1 dismissalHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001003a8c40

@end
