/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheShareGroup, HMDBackingStoreCacheGroup, NSData, CKRecord, NSUUID;

@interface HMDBackingStoreCacheFetchRecordResult : HMFObject {

	HMDBackingStoreCacheShareGroup* _share;
	HMDBackingStoreCacheGroup* _group;
	NSData* _data;
	CKRecord* _record;
	unsigned long long _encoding;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CKRecord * record;                                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) unsigned long long encoding;                         //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
-(CKRecord *)record;
-(unsigned long long)encoding;
-(id)initWithGroup:(id)arg1 share:(id)arg2 record:(id)arg3 data:(id)arg4 encoding:(unsigned long long)arg5 uuid:(id)arg6 ;
-(id)description;
-(NSUUID *)uuid;
-(HMDBackingStoreCacheGroup *)group;
-(NSData *)data;
-(HMDBackingStoreCacheShareGroup *)share;
@end
