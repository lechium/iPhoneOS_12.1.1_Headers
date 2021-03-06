//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class BBDataProviderConnection, BBDataProviderProxy, NSString;

@interface SBTestDataProvider2 : NSObject <BBRemoteDataProvider>
{
    BBDataProviderConnection *_connection;	// 8 = 0x8
    BBDataProviderProxy *_proxy;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100490600
- (void).cxx_destruct;	// IMP=0x00000001004912f4
- (void)noteSectionInfoDidChange:(id)arg1;	// IMP=0x00000001004911e0
- (float)attachmentAspectRatioForRecordID:(id)arg1;	// IMP=0x00000001004910e8
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;	// IMP=0x0000000100490ff0
- (void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100490ea8
- (void)dataProviderDidLoad;	// IMP=0x0000000100490db4
- (id)sectionParameters;	// IMP=0x0000000100490dac
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;	// IMP=0x0000000100490c74
- (id)sortDescriptors;	// IMP=0x0000000100490c6c
- (id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;	// IMP=0x0000000100490a24
- (id)sectionDisplayName;	// IMP=0x00000001004909f8
- (id)defaultSectionInfo;	// IMP=0x00000001004909f0
- (id)sectionIdentifier;	// IMP=0x00000001004909c4
- (void)publish;	// IMP=0x000000010049080c
- (id)init;	// IMP=0x0000000100490680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

