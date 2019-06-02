/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class HMDHome, NSObject;

@interface HMDHomeObjectChangeHandler : HMFObject {

	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,__weak,readonly) HMDHome * home;                               //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHome *)home;
-(void)handleObjectAdd:(id)arg1 message:(id)arg2 ;
-(id)initWithHome:(id)arg1 ;
-(void)handleObjectRemove:(id)arg1 message:(id)arg2 ;
-(void)handleObjectUpdate:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
@end

