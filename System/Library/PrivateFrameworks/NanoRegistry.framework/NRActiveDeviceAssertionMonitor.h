/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface NRActiveDeviceAssertionMonitor : NSObject {

	int _assertionToken;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSHashTable * observers;                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) int assertionToken;                                  //@synthesize assertionToken=_assertionToken - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveAssertion; 
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)startObservingToken;
-(void)stopObservingToken;
-(void)notifyObserversWithTokenValue:(int)arg1 ;
-(BOOL)hasActiveAssertion;
-(int)assertionToken;
-(void)setAssertionToken:(int)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(id)_init;
@end

