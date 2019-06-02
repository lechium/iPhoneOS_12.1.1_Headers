/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _PASLock;

@interface ATXBackgroundSaver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	_PASLock* _lock;

}
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)scheduleSave;
-(void)scheduleSaveImmediately;
-(void)_cancelSaveTimerWithLockWitness:(id)arg1 ;
-(void)_cancelSaveTimer;
-(id)init;
-(void)dealloc;
@end

