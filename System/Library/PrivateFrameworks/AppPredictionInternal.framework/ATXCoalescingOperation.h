/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, _PASLock;

@interface ATXCoalescingOperation : NSObject {

	NSString* _name;
	double _delay;
	NSString* _transactionName;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _operation;
	_PASLock* _lock;

}
-(id)initWithName:(id)arg1 coalescingDelay:(double)arg2 transactionName:(id)arg3 queue:(id)arg4 operation:(/*^block*/id)arg5 ;
-(void)invokeAfterSoftMaximumDelay:(double)arg1 completion:(/*^block*/id)arg2 ;
@end
