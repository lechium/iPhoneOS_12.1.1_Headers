//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHealthRecordsStore, HKHealthStore;

@interface WDClinicalSourcesDataProvider : NSObject
{
    HKHealthRecordsStore *_healthRecordsStore;	// 8 = 0x8
}

+ (CDUnknownBlockType)_objectCompletionOnMainQueue:(CDUnknownBlockType)arg1 cancellationToken:(id)arg2;	// IMP=0x00000001000fda0c
@property(readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
- (void).cxx_destruct;	// IMP=0x00000001000fde3c
@property(readonly, nonatomic) HKHealthStore *healthStore;
- (id)_orderAccountsForDisplay:(id)arg1;	// IMP=0x00000001000fdc84
- (id)_createLoginSafariViewControllerForURL:(id)arg1;	// IMP=0x00000001000fd82c
- (id)appSourcesRequestingAuthorizationForClinicalTypes;	// IMP=0x00000001000fd4e4
- (id)appSourceRequestingAuthorizationForClinicalTypeWithBundleIdentifier:(id)arg1;	// IMP=0x00000001000fd338
- (void)beginReloginSessionForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fcebc
- (void)beginInitialLoginSessionForGateway:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fca58
- (id)gatewaysWithExistingAccountsFromGateways:(id)arg1;	// IMP=0x00000001000fc9e8
- (id)nameAndFormattedBirthDateForAccountOwner:(id)arg1 useMultipleLines:(_Bool)arg2;	// IMP=0x00000001000fc734
- (id)nameAndFormattedBirthDateForAccountOwner:(id)arg1;	// IMP=0x00000001000fc724
- (id)fetchAccountOwnerForSource:(id)arg1;	// IMP=0x00000001000fc548
- (void)fetchAccountOwnerForSource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc274
- (id)fetchAccountForSource:(id)arg1;	// IMP=0x00000001000fc0a4
- (void)fetchAccountForSource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fbd5c
- (id)_logoForFallback:(id)arg1 size:(double)arg2;	// IMP=0x00000001000fbc78
- (id)_fetchLogoForBrand:(id)arg1 fallback:(id)arg2 size:(double)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000fb724
- (id)fetchLogoForBrand:(id)arg1 fallback:(id)arg2 size:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000fb690
- (void)fetchCachedLogoForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fb5b8
- (void)fetchLogoForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fb4e0
- (id)accountsForDisplayForGateways:(id)arg1;	// IMP=0x00000001000fb480
- (id)_accountsForGateways:(id)arg1;	// IMP=0x00000001000fb114
- (id)fetchAccessedAccountsForDisplayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000faf5c
- (id)accountsForDisplay;	// IMP=0x00000001000fad74
- (_Bool)anyRegisteredAccounts;	// IMP=0x00000001000fad24
- (void)_fetchAccountsForDisplayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000faaa8
- (id)init;	// IMP=0x00000001000faa10
- (id)initWithHealthRecordsStore:(id)arg1;	// IMP=0x00000001000fa990

@end

