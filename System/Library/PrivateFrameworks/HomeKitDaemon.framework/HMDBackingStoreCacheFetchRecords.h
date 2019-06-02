/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup, NSArray;

@interface HMDBackingStoreCacheFetchRecords : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	HMDBackingStoreCacheShareGroup* _share;
	/*^block*/id _fetchResult;
	NSArray* _recordNames;
	NSArray* _uuids;
	NSArray* _parentUuids;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,copy) id fetchResult;                                        //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,retain) NSArray * recordNames;                               //@synthesize recordNames=_recordNames - In the implementation block
@property (nonatomic,retain) NSArray * uuids;                                     //@synthesize uuids=_uuids - In the implementation block
@property (nonatomic,retain) NSArray * parentUuids;                               //@synthesize parentUuids=_parentUuids - In the implementation block
-(id)fetchResult;
-(NSArray *)uuids;
-(void)setFetchResult:(id)arg1 ;
-(id)mainReturningError;
-(NSArray *)recordNames;
-(void)setRecordNames:(NSArray *)arg1 ;
-(NSArray *)parentUuids;
-(id)initWithShareGroup:(id)arg1 uuids:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithShareGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithShareGroup:(id)arg1 records:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 records:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(void)setUuids:(NSArray *)arg1 ;
-(void)setParentUuids:(NSArray *)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(HMDBackingStoreCacheShareGroup *)share;
-(void)setShare:(HMDBackingStoreCacheShareGroup *)arg1 ;
@end

