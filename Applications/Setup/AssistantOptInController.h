//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BFFFlowItem.h"
#import "VTUIEnrollTrainingViewControllerDelegate.h"

@class NSString, VTUIEnrollTrainingViewController;

@interface AssistantOptInController : NSObject <VTUIEnrollTrainingViewControllerDelegate, BFFFlowItem>
{
    VTUIEnrollTrainingViewController *_enrollmentController;	// 8 = 0x8
    _Bool _didOfferVoiceTrigger;	// 16 = 0x10
    id <BFFFlowItemDelegate> _delegate;	// 24 = 0x18
}

+ (void)_enableAssistantLocation;	// IMP=0x000000010005a448
+ (void)setAssistantEnabled:(_Bool)arg1;	// IMP=0x000000010005a39c
+ (void)skippedByCloudConfig;	// IMP=0x0000000100059f88
+ (id)cloudConfigSkipKey;	// IMP=0x0000000100059f78
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010005ab48
- (void)showLearnMore;	// IMP=0x000000010005aa8c
- (void)skipSetup;	// IMP=0x000000010005a818
- (void)continueSetup;	// IMP=0x000000010005a4ac
- (void)_removeSiriPanesFromNavHierarchy;	// IMP=0x000000010005a230
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x000000010005a228
- (id)viewController;	// IMP=0x000000010005a1bc
- (void)controllerWasPopped;	// IMP=0x000000010005a168
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a06c
- (id)init;	// IMP=0x000000010005a014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

