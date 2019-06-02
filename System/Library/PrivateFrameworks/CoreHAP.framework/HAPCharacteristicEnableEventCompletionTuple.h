/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HAPCharacteristicEnableEventCompletionTuple : HMFObject {

	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (nonatomic,copy) id handler;                                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(id)enableEventCompletionTupleWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end
