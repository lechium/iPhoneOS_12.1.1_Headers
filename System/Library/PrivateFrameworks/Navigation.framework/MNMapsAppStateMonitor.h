/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableSet, BKSApplicationStateMonitor;

@interface MNMapsAppStateMonitor : NSObject {

	NSLock* _observerLock;
	NSMutableSet* _observers;
	BKSApplicationStateMonitor* _appStateMonitor;
	unsigned _state;

}

@property (nonatomic,readonly) unsigned state;              //@synthesize state=_state - In the implementation block
-(void)startObserving;
-(void)stopObserving;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(unsigned)state;
-(void)addObserver:(id)arg1 ;
@end

