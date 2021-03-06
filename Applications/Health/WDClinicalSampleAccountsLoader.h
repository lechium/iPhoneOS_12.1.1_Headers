//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WDProfile;

@interface WDClinicalSampleAccountsLoader : NSObject
{
    WDProfile *_profile;	// 8 = 0x8
    NSArray *_accountDataBatches;	// 16 = 0x10
    NSArray *_cachedAccounts;	// 24 = 0x18
}

+ (id)knownAccountFiles;	// IMP=0x00000001000c951c
+ (id)appleProviderBrand;	// IMP=0x00000001000c94dc
@property(copy, nonatomic) NSArray *cachedAccounts; // @synthesize cachedAccounts=_cachedAccounts;
@property(copy, nonatomic) NSArray *accountDataBatches; // @synthesize accountDataBatches=_accountDataBatches;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;	// IMP=0x00000001000c95d4
- (id)_parseAccounts;	// IMP=0x00000001000c9178
- (id)sampleAccountsAsSearchResults;	// IMP=0x00000001000c8c88
- (id)_gatewayForAccount:(id)arg1;	// IMP=0x00000001000c8a94
- (id)_providerForAccount:(id)arg1;	// IMP=0x00000001000c86e4
- (id)providerForSearchResultWithExternalID:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c8408
- (_Bool)_triggerIngestOfDataBatch:(id)arg1 accountIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000c80b8
- (id)_createTemporaryFileForDataBatch:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c7ed4
- (void)_createAccountAndTriggerIngestForDataBatch:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c7840
- (id)_sampleAccountForGatewayWithExternalID:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c7550
- (void)loadFirstSampleAccountDataBatchForGatewayWithExternalID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c73dc
- (id)initWithProfile:(id)arg1;	// IMP=0x00000001000c735c

@end

