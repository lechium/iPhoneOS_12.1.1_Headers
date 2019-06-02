//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUItemTableViewController.h"

#import "HSSetupServiceHeaderViewDelegate.h"
#import "HSSetupStep.h"

@class HMAccessory, HSSetupServiceHeaderView, NAFuture, NSString;

@interface HSSetupIdentifiableAccessoryViewController : HUItemTableViewController <HSSetupServiceHeaderViewDelegate, HSSetupStep>
{
    HMAccessory *_accessory;	// 8 = 0x8
    HSSetupServiceHeaderView *_headerView;	// 16 = 0x10
    CDStruct_3999e4e2 _configurationProgress;	// 24 = 0x18
}

@property(retain, nonatomic) HSSetupServiceHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) CDStruct_3999e4e2 configurationProgress; // @synthesize configurationProgress=_configurationProgress;
- (void).cxx_destruct;	// IMP=0x0000000100038e4c
- (void)_headerViewWasTapped:(id)arg1;	// IMP=0x0000000100038dc0
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x0000000100038b34
- (void)didTapToTestInServiceHeaderView:(id)arg1;	// IMP=0x0000000100038994
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;	// IMP=0x00000001000386bc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100038644
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100038550
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100038480
- (void)viewDidLoad;	// IMP=0x000000010003819c
- (id)initWithItemManager:(id)arg1 configurationProgress:(CDStruct_3999e4e2)arg2 accessory:(id)arg3;	// IMP=0x00000001000380e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly, nonatomic) long long setupState; // @dynamic setupState;
@property(readonly) Class superclass;

@end
