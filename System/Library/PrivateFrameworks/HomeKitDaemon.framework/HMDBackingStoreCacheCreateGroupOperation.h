/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheCreateGroupOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _record;
	/*^block*/id _creationBlock;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) id creationBlock;                                  //@synthesize creationBlock=_creationBlock - In the implementation block
-(HMDBackingStoreCacheGroup *)record;
-(void)setRecord:(HMDBackingStoreCacheGroup *)arg1 ;
-(id)mainReturningError;
-(id)initWithZone:(id)arg1 owner:(id)arg2 rootRecord:(id)arg3 subscriptionName:(id)arg4 subscription:(id)arg5 creationBlock:(/*^block*/id)arg6 ;
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
@end

