/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheGroup, NSString, CKShare, NSArray;

@interface HMDBackingStoreCacheShareGroup : HMFObject {

	long long _shareID;
	HMDBackingStoreCacheGroup* _group;
	NSString* _rootRecordName;
	NSString* _targetOwner;
	CKShare* _share;
	NSArray* _users;

}

@property (assign) long long shareID;                                       //@synthesize shareID=_shareID - In the implementation block
@property (__weak,readonly) HMDBackingStoreCacheGroup * group;              //@synthesize group=_group - In the implementation block
@property (readonly) NSString * rootRecordName;                             //@synthesize rootRecordName=_rootRecordName - In the implementation block
@property (readonly) NSString * targetOwner;                                //@synthesize targetOwner=_targetOwner - In the implementation block
@property (readonly) CKShare * share;                                       //@synthesize share=_share - In the implementation block
@property (readonly) NSArray * users;                                       //@synthesize users=_users - In the implementation block
-(NSArray *)users;
-(void)fetchMigratedObjects:(/*^block*/id)arg1 ;
-(id)dumpDebug;
-(long long)shareID;
-(NSString *)rootRecordName;
-(NSString *)targetOwner;
-(void)_fetchObjects:(BOOL)arg1 migration:(BOOL)arg2 result:(/*^block*/id)arg3 ;
-(id)initWithShareID:(long long)arg1 group:(id)arg2 rootRecord:(id)arg3 targetOwner:(id)arg4 share:(id)arg5 users:(id)arg6 ;
-(void)fetchAllObjects:(/*^block*/id)arg1 ;
-(void)markAsMigrated:(/*^block*/id)arg1 ;
-(void)setShareID:(long long)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(CKShare *)share;
@end
