//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SetupChoiceController.h"

@class BFFLinkLabelFooterView, BuddyCloudConfigAboutConfigurationContainerController, BuddyCloudConfigController, NSError, SetupChoice, UIButton, UINavigationController;

@interface BuddyCloudConfigDisclosureViewController : SetupChoiceController
{
    _Bool _isMandatory;	// 8 = 0x8
    BuddyCloudConfigController *_configController;	// 16 = 0x10
    NSError *_lastRetrievalError;	// 24 = 0x18
    BFFLinkLabelFooterView *_footer;	// 32 = 0x20
    SetupChoice *_acceptChoice;	// 40 = 0x28
    SetupChoice *_skipChoice;	// 48 = 0x30
    UINavigationController *_aboutController;	// 56 = 0x38
    BuddyCloudConfigAboutConfigurationContainerController *_aboutConfigurationContainerController;	// 64 = 0x40
    UIButton *_leaveRemoteManagementButton;	// 72 = 0x48
    UIButton *_aboutRemoteManagementButton;	// 80 = 0x50
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000d43dc
@property(retain, nonatomic) UIButton *aboutRemoteManagementButton; // @synthesize aboutRemoteManagementButton=_aboutRemoteManagementButton;
@property(retain, nonatomic) UIButton *leaveRemoteManagementButton; // @synthesize leaveRemoteManagementButton=_leaveRemoteManagementButton;
@property(retain, nonatomic) BuddyCloudConfigAboutConfigurationContainerController *aboutConfigurationContainerController; // @synthesize aboutConfigurationContainerController=_aboutConfigurationContainerController;
@property(retain, nonatomic) UINavigationController *aboutController; // @synthesize aboutController=_aboutController;
@property(nonatomic) _Bool isMandatory; // @synthesize isMandatory=_isMandatory;
@property(retain, nonatomic) SetupChoice *skipChoice; // @synthesize skipChoice=_skipChoice;
@property(retain, nonatomic) SetupChoice *acceptChoice; // @synthesize acceptChoice=_acceptChoice;
@property(retain, nonatomic) BFFLinkLabelFooterView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) NSError *lastRetrievalError; // @synthesize lastRetrievalError=_lastRetrievalError;
@property(nonatomic) __weak BuddyCloudConfigController *configController; // @synthesize configController=_configController;
- (void).cxx_destruct;	// IMP=0x00000001000d7fe8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000d7e00
- (void)showAboutConfiguration;	// IMP=0x00000001000d7d88
- (void)controllerDone;	// IMP=0x00000001000d7b2c
- (void)_retrieveEnterpriseConfiguration;	// IMP=0x00000001000d719c
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000d6df0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000d6ce0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000d6c8c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000d6be8
- (id)_remoteManagementText;	// IMP=0x00000001000d68a8
- (void)_resetWithMode:(int)arg1;	// IMP=0x00000001000d6850
- (void)_leaveRemoteManagementAndErase;	// IMP=0x00000001000d63fc
- (void)_showEraseDeviceAlert;	// IMP=0x00000001000d6158
- (void)showLeaveRemoteManagementAlert;	// IMP=0x00000001000d5eb4
- (void)_presentEraseAlertWithTitle:(id)arg1 message:(id)arg2 eraseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d5c60
- (void)_initializeViews;	// IMP=0x00000001000d5a60
- (void)_setupForCloudConfigurationState;	// IMP=0x00000001000d458c
- (id)init;	// IMP=0x00000001000d43e4

@end
