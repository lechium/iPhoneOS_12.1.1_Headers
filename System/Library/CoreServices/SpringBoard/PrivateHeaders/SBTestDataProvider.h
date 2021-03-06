//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class BBDataProviderConnection, BBDataProviderProxy, NSMutableArray, NSString;

@interface SBTestDataProvider : NSObject <BBRemoteDataProvider>
{
    BBDataProviderConnection *_connection;	// 8 = 0x8
    BBDataProviderProxy *_proxy;	// 16 = 0x10
    NSMutableArray *_bulletinRequests;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010011f5ac
- (void).cxx_destruct;	// IMP=0x0000000100121248
- (void)handleBulletinActionResponse:(id)arg1;	// IMP=0x0000000100121244
- (void)noteSectionInfoDidChange:(id)arg1;	// IMP=0x0000000100121130
- (float)attachmentAspectRatioForRecordID:(id)arg1;	// IMP=0x0000000100121038
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;	// IMP=0x0000000100120f40
- (void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100120df8
- (void)dataProviderDidLoad;	// IMP=0x0000000100120d04
- (id)sectionParameters;	// IMP=0x0000000100120ca0
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;	// IMP=0x0000000100120a04
- (id)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3;	// IMP=0x000000010012065c
- (id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1;	// IMP=0x0000000100120538
- (id)sortDescriptors;	// IMP=0x0000000100120530
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;	// IMP=0x00000001001204a8
- (id)displayNameForSubsectionID:(id)arg1;	// IMP=0x0000000100120420
- (id)sectionDisplayName;	// IMP=0x00000001001203f4
- (id)defaultSubsectionInfos;	// IMP=0x00000001001201f0
- (id)defaultSectionInfo;	// IMP=0x0000000100120160
- (id)sectionIdentifier;	// IMP=0x0000000100120134
- (id)_newBulletinRequest:(id)arg1;	// IMP=0x000000010011fdb0
- (id)_existingBulletinRequestForPublisherBulletinID:(id)arg1;	// IMP=0x000000010011fc18
- (void)publishBulletinsWithCount:(long long)arg1;	// IMP=0x000000010011fb34
- (id)_publisherBulletinIDWithIndex:(long long)arg1;	// IMP=0x000000010011faf4
- (void)update;	// IMP=0x000000010011fa88
- (void)publish;	// IMP=0x000000010011fa14
- (void)_publishBulletinWithID:(id)arg1;	// IMP=0x000000010011f7f8
- (id)init;	// IMP=0x000000010011f62c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

