/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MFWeakReferenceHolder, NSObject;

@interface _MFContentProtectionObserverWrapper : NSObject {

	MFWeakReferenceHolder* _observerReference;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<MFContentProtectionObserver> observer; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
-(id)initWithObserver:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(id<MFContentProtectionObserver>)observer;
-(NSObject*<OS_dispatch_queue>)queue;
@end

