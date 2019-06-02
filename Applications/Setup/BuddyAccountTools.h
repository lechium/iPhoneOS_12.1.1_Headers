//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface BuddyAccountTools : NSObject
{
    _Bool _redownloadRightsLoaded;	// 8 = 0x8
    _Bool _hasRedownloadRights;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_accountOperationsQueue;	// 16 = 0x10
    NSMutableArray *_accountsBeingRemoved;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_userInformationQueue;	// 32 = 0x20
    NSDictionary *_userInformation;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_configurationInfoQueue;	// 48 = 0x30
    NSDictionary *_configurationInfo;	// 56 = 0x38
    ACAccountStore *_accountStore;	// 64 = 0x40
}

+ (id)sharedBuddyAccountTools;	// IMP=0x00000001000bda50
- (void).cxx_destruct;	// IMP=0x00000001000c0824
- (id)iCloudAnalyticsOptInError:(id *)arg1;	// IMP=0x00000001000c05e4
- (void)getConfigurationInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c036c
- (id)configurationInfoError:(id *)arg1;	// IMP=0x00000001000bfbc8
- (void)getPrimaryAccountIsChildAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bf980
- (_Bool)primaryAccountIsChildAccountError:(id *)arg1;	// IMP=0x00000001000bf018
- (void)addAccountHeadersToRequest:(id)arg1;	// IMP=0x00000001000bee18
- (_Bool)storeAccountSupportsMusicAndBooksRedownload;	// IMP=0x00000001000be9ec
- (void)_resetStoreAccountRedownloadRights:(id)arg1;	// IMP=0x00000001000be93c
- (id)accounts;	// IMP=0x00000001000be708
- (id)primaryAccount;	// IMP=0x00000001000be538
- (void)removePrimaryAccountCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000be350
- (void)removeAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bdcdc
- (id)accountOperationsQueue;	// IMP=0x00000001000bdc8c
- (void)dealloc;	// IMP=0x00000001000bdc04
- (id)init;	// IMP=0x00000001000bdaa8

@end

