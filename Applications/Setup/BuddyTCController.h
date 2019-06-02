//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BFFFlowItem.h"
#import "BuddyTCSubControllerDelegate.h"
#import "RUIObjectModelDelegate.h"

@class BuddyWarrantyTCController, BuddyiOSTCController, NSString, RUIObjectModel;

@interface BuddyTCController : NSObject <BuddyTCSubControllerDelegate, BFFFlowItem, RUIObjectModelDelegate>
{
    RUIObjectModel *_objectModel;	// 8 = 0x8
    BuddyiOSTCController *_iOSTermsController;	// 16 = 0x10
    BuddyWarrantyTCController *_warrantyTermsController;	// 24 = 0x18
    id <BFFFlowItemDelegate> _delegate;	// 32 = 0x20
}

+ (void)skippedByCloudConfig;	// IMP=0x00000001000b8650
+ (id)cloudConfigSkipKey;	// IMP=0x00000001000b8640
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000b85b8
+ (void)didAgreeToServerTerms;	// IMP=0x00000001000b8534
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000b9900
- (void)buddyTCSubController:(id)arg1 didFinishWithAgree:(_Bool)arg2;	// IMP=0x00000001000b9280
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;	// IMP=0x00000001000b90a4
- (void)objectModelPressedBack:(id)arg1;	// IMP=0x00000001000b90a0
- (id)parentViewControllerForObjectModel:(id)arg1;	// IMP=0x00000001000b9098
- (void)loader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000b9094
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;	// IMP=0x00000001000b8f44
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x00000001000b8f3c
- (id)viewController;	// IMP=0x00000001000b8ed0
- (id)multiTermsController;	// IMP=0x00000001000b8e18
- (id)warrantyTermsController;	// IMP=0x00000001000b8da4
- (id)iOSTermsController;	// IMP=0x00000001000b8d30
- (id)init;	// IMP=0x00000001000b8778

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
