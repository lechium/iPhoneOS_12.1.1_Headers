//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DDRemoteActionViewService.h"
#import "EKEventEditViewDelegate.h"

@class DDAction, EKEvent, EKEventEditViewController, NSString;

@interface DDEventEditViewController : UIViewController <EKEventEditViewDelegate, DDRemoteActionViewService>
{
    id <DDRemoteActionPresenter> _proxy;	// 8 = 0x8
    DDAction *_action;	// 16 = 0x10
    EKEventEditViewController *_eventEditViewController;	// 24 = 0x18
    _Bool _shouldTrackEventCreation;	// 32 = 0x20
    unsigned long long _prefillMode;	// 40 = 0x28
    EKEvent *_proposedEvent;	// 48 = 0x30
    NSString *_eventTypeClassification;	// 56 = 0x38
}

+ (id)_exportedInterface;	// IMP=0x00000001000164e8
+ (id)_remoteViewControllerInterface;	// IMP=0x000000010001649c
@property(retain) DDAction *action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x0000000100018590
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100018194
- (void)adaptForPresentationInPopover:(_Bool)arg1;	// IMP=0x000000010001817c
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x0000000100017bac
- (void)prepareForAction:(id)arg1;	// IMP=0x0000000100016534

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

