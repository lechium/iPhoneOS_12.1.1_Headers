//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNContactNavigationController.h"

#import "CNContactNavigationControllerDelegate.h"
#import "PhoneTabViewController.h"

@class CNContact, NSString;

@interface PHContactsViewController : CNContactNavigationController <CNContactNavigationControllerDelegate, PhoneTabViewController>
{
    _Bool _checkedForFacebookContacts;	// 8 = 0x8
    id <PHContactsControllerDelegate> _contactsControllerDelegate;	// 16 = 0x10
}

+ (id)defaultPNGName;	// IMP=0x0000000100049de4
+ (id)tabBarIconName;	// IMP=0x0000000100007158
+ (CDStruct_5ec447a9)badge;	// IMP=0x00000001000071cc
+ (long long)tabBarSystemItem;	// IMP=0x0000000100007150
+ (int)tabViewType;	// IMP=0x0000000100049d24
@property(nonatomic) _Bool checkedForFacebookContacts; // @synthesize checkedForFacebookContacts=_checkedForFacebookContacts;
@property(nonatomic) __weak id <PHContactsControllerDelegate> contactsControllerDelegate; // @synthesize contactsControllerDelegate=_contactsControllerDelegate;
- (void).cxx_destruct;	// IMP=0x000000010004a76c
- (void)handleURL:(id)arg1;	// IMP=0x000000010004a378
- (void)_restoreState;	// IMP=0x000000010004a2d8
@property(retain, nonatomic) CNContact *savedPerson;
@property(readonly, nonatomic) _Bool shouldSaveAndRestoreState;
- (_Bool)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;	// IMP=0x000000010004a040
- (_Bool)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;	// IMP=0x000000010004a038
- (_Bool)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;	// IMP=0x0000000100049f1c
- (void)contactNavigationControllerDidCancel:(id)arg1;	// IMP=0x0000000100049e14
- (void)prepareForSnapshot;	// IMP=0x0000000100049e10
- (_Bool)shouldSnapshot;	// IMP=0x0000000100049d98
- (_Bool)tabBarControllerShouldSelectViewController:(id)arg1;	// IMP=0x0000000100049d2c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100049ca4
- (void)viewDidLoad;	// IMP=0x0000000100049c0c
- (id)initWithDataSource:(id)arg1 allowsLargeTitles:(_Bool)arg2;	// IMP=0x0000000100049b5c
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000100049b4c
- (id)initWithContactStore:(id)arg1;	// IMP=0x0000000100049ac0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

