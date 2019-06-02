//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSArray, NSNumber, NSString, NSTimer, PSEditableTableCell, UITextField;

@interface CBAlternateNetworkViewController : PSListController
{
    _Bool _otherNetworkViewActive;	// 192 = 0xc0
    _Bool _joining;	// 193 = 0xc1
    NSArray *_hiddenNetworkWithNoPasswordGroup;	// 200 = 0xc8
    NSArray *_hiddenNetworkWithPasswordGroup;	// 208 = 0xd0
    NSArray *_currentSecurityGroup;	// 216 = 0xd8
    NSString *_networkName;	// 224 = 0xe0
    NSNumber *_networkSecurityType;	// 232 = 0xe8
    NSString *_networkPassword;	// 240 = 0xf0
    UITextField *_currentlyActiveTextField;	// 248 = 0xf8
    PSEditableTableCell *_networkNameCell;	// 256 = 0x100
    PSEditableTableCell *_passwordCell;	// 264 = 0x108
    long long _indexToSelect;	// 272 = 0x110
    unsigned long long _retryJoinAttemptCount;	// 280 = 0x118
    NSTimer *_joinTimer;	// 288 = 0x120
}

@property(retain, nonatomic) NSTimer *joinTimer; // @synthesize joinTimer=_joinTimer;
@property(nonatomic) unsigned long long retryJoinAttemptCount; // @synthesize retryJoinAttemptCount=_retryJoinAttemptCount;
@property(nonatomic) _Bool joining; // @synthesize joining=_joining;
@property(nonatomic) long long indexToSelect; // @synthesize indexToSelect=_indexToSelect;
@property(retain, nonatomic) PSEditableTableCell *passwordCell; // @synthesize passwordCell=_passwordCell;
@property(retain, nonatomic) PSEditableTableCell *networkNameCell; // @synthesize networkNameCell=_networkNameCell;
@property(retain, nonatomic) UITextField *currentlyActiveTextField; // @synthesize currentlyActiveTextField=_currentlyActiveTextField;
@property(retain, nonatomic) NSString *networkPassword; // @synthesize networkPassword=_networkPassword;
@property(retain, nonatomic) NSNumber *networkSecurityType; // @synthesize networkSecurityType=_networkSecurityType;
@property(retain, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(retain, nonatomic) NSArray *currentSecurityGroup; // @synthesize currentSecurityGroup=_currentSecurityGroup;
@property(retain, nonatomic) NSArray *hiddenNetworkWithPasswordGroup; // @synthesize hiddenNetworkWithPasswordGroup=_hiddenNetworkWithPasswordGroup;
@property(retain, nonatomic) NSArray *hiddenNetworkWithNoPasswordGroup; // @synthesize hiddenNetworkWithNoPasswordGroup=_hiddenNetworkWithNoPasswordGroup;
@property(nonatomic) _Bool otherNetworkViewActive; // @synthesize otherNetworkViewActive=_otherNetworkViewActive;
- (void).cxx_destruct;	// IMP=0x0000000100029a38
- (_Bool)_passwordIsValid;	// IMP=0x0000000100029654
- (_Bool)_networkNameIsValid;	// IMP=0x000000010002954c
- (_Bool)_canAttemptJoin;	// IMP=0x00000001000293f4
- (void)_checkoutAndPostAssociationCompletedNotificationWithError:(int)arg1;	// IMP=0x0000000100029278
- (void)_presentFailedAssociationAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x00000001000290c4
- (void)_updateReturnKey;	// IMP=0x0000000100028d24
- (void)_enableUI:(_Bool)arg1;	// IMP=0x0000000100028b48
- (void)_setReturnKeyEnabled:(_Bool)arg1;	// IMP=0x0000000100028a50
- (void)_enableRightBarButtonItem:(_Bool)arg1;	// IMP=0x000000010002891c
- (void)_enableLeftBarButtonItem:(_Bool)arg1;	// IMP=0x00000001000287e8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000284c8
- (id)password;	// IMP=0x0000000100028474
- (void)setPassword:(id)arg1;	// IMP=0x0000000100028468
- (id)securityType;	// IMP=0x00000001000283f8
- (void)setSecurityType:(id)arg1;	// IMP=0x0000000100028294
- (id)name;	// IMP=0x0000000100028240
- (void)setName:(id)arg1;	// IMP=0x0000000100028234
- (id)_passwordSpecifier;	// IMP=0x000000010002812c
- (id)_securitySpecifier;	// IMP=0x0000000100027d70
- (id)_groupSeparatorSpecifier;	// IMP=0x0000000100027d28
- (id)_networkNameSpecifier;	// IMP=0x0000000100027ba4
- (id)specifiers;	// IMP=0x00000001000278d0
- (void)returnPressedAtEnd;	// IMP=0x00000001000278cc
- (void)textFieldDidChange:(id)arg1;	// IMP=0x0000000100027898
- (void)_joinTapped;	// IMP=0x0000000100027338
- (void)joinTapped:(id)arg1;	// IMP=0x000000010002728c
- (void)cancelTapped:(id)arg1;	// IMP=0x00000001000271f0
- (void)_networkJoinRetryTimerFired:(id)arg1;	// IMP=0x0000000100026d6c
- (void)_handleAssociationEvent:(id)arg1;	// IMP=0x00000001000264d8
- (void)_returnKeyTapped:(id)arg1;	// IMP=0x0000000100025fcc
- (void)_keyboardWillPresent:(id)arg1;	// IMP=0x0000000100025f30
- (void)_cleanUp;	// IMP=0x0000000100025ccc
- (void)dealloc;	// IMP=0x0000000100025c14
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100025b54
- (void)_deregisterNotifications;	// IMP=0x00000001000259c0
- (void)_registerForNotifications;	// IMP=0x0000000100025800
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000253c0
- (void)_setupNavBar;	// IMP=0x0000000100024fbc
- (void)viewDidLoad;	// IMP=0x0000000100024ebc
- (id)initWithNetworkInfo:(id)arg1;	// IMP=0x0000000100024db0

@end
