/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTObjectCacheDelegate <NSObject>
@required
-(void)objectCache:(id)arg1 keysWithBlock:(/*^block*/id)arg2;
-(void)objectCache:(id)arg1 objectForKey:(id)arg2 withBlock:(/*^block*/id)arg3;
-(void)objectCache:(id)arg1 storeObject:(id)arg2 withKey:(id)arg3 withBlock:(/*^block*/id)arg4;
-(void)objectCache:(id)arg1 removeObjectForKey:(id)arg2 withBlock:(/*^block*/id)arg3;

@end

