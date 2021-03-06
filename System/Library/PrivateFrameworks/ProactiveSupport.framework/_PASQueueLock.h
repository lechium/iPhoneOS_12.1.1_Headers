/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _PASQueueLock : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _guardedData;

}
-(id)guardedDataAssertingLockContext;
-(void)runWithLockAcquired:(/*^block*/id)arg1 ;
-(void)runAsyncWithLockAcquired:(/*^block*/id)arg1 ;
-(id)initWithGuardedData:(id)arg1 serialQueue:(id)arg2 ;
-(id)unsafeGuardedData;
@end

