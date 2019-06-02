//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VMViewController.h"

#import "VMPlayerViewController.h"

@class NSString, VMPlayerController, VMPlayerControlsView;

@interface VMPlayerViewController : VMViewController <VMPlayerViewController>
{
    VMPlayerController *_playerController;	// 8 = 0x8
    VMPlayerControlsView *_playerControlsView;	// 16 = 0x10
}

@property(retain, nonatomic) VMPlayerControlsView *playerControlsView; // @synthesize playerControlsView=_playerControlsView;
@property(retain, nonatomic) VMPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;	// IMP=0x00000001000cb5ec
- (void)playerControllerDidReset:(id)arg1;	// IMP=0x00000001000cb5b4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000cb4a4
- (void)viewDidLoad;	// IMP=0x00000001000cb2e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

