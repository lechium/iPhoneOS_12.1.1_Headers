//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMultiplexingViewController.h"

@class SBDashBoardViewControllerBase;

@interface SBDashBoardIsolatingViewController : SBMultiplexingViewController
{
    SBDashBoardViewControllerBase *_isolatedViewController;	// 8 = 0x8
}

@property(readonly, nonatomic) SBDashBoardViewControllerBase *isolatedViewController; // @synthesize isolatedViewController=_isolatedViewController;
- (void).cxx_destruct;	// IMP=0x00000001002ce0b0
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001002cde8c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001002cde38
- (id)succinctDescriptionBuilder;	// IMP=0x00000001002cde1c
- (id)succinctDescription;	// IMP=0x00000001002cddc8
- (id)description;	// IMP=0x00000001002cddb8
- (void)presentationControllerDidEndDismissing:(id)arg1;	// IMP=0x00000001002cdb54
- (void)presentationControllerWillBeginDismissing:(id)arg1;	// IMP=0x00000001002cda34
- (void)presentationControllerDidEndPresenting:(id)arg1;	// IMP=0x00000001002cd914
- (void)presentationControllerWillBeginPresenting:(id)arg1;	// IMP=0x00000001002cd2dc
- (_Bool)wantsToShareTouches;	// IMP=0x00000001002cd2d4
- (id)createViewControllerForIsolation;	// IMP=0x00000001002cd2c4
- (void)viewDidLoad;	// IMP=0x00000001002cd1cc
- (void)dealloc;	// IMP=0x00000001002cd0a0
- (id)initWithPresenter:(id)arg1 isolatedViewController:(id)arg2;	// IMP=0x00000001002cce58

@end

