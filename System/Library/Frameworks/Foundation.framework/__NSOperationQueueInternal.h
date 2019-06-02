/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Foundation/Foundation-Structs.h>
@class NSOperation, NSPointerArray, NSObject, NSString;

@interface __NSOperationQueueInternal : NSObject {

	os_unfair_lock_s __queueLock;
	NSOperation* __firstOperation;
	NSOperation* __lastOperation;
	NSOperation* __pendingFirstOperation;
	NSOperation* __pendingLastOperation;
	NSOperation* __firstPriOperation[5];
	NSOperation* __lastPriOperation[5];
	AQ __operationCount;
	NSPointerArray* __activeThreads;
	long long __maxNumOps;
	int __actualMaxNumOps;
	int __numExecOps;
	unsigned char __mainQ;
	AB __suspended;
	AB __overcommit;
	AC __propertyQoS;
	NSObject*<OS_dispatch_queue> __dispatch_queue;
	NSObject*<OS_dispatch_queue> __backingQueue;
	NSString* __name;
	char __nameBuffer[320];
	AC __operationsObserverCount;
	AC __operationCountObserverCount;
	AC __suspendedObserverCount;

}
-(id)init;
-(void)dealloc;
@end
