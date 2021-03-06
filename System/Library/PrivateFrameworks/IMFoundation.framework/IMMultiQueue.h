/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IMMultiQueue : NSObject {

	NSMutableDictionary* _queueMap;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2 ;
-(void)_addBlock:(/*^block*/id)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(void)addBlock:(/*^block*/id)arg1 forKey:(id)arg2 description:(id)arg3 ;
-(void)addBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
@end

