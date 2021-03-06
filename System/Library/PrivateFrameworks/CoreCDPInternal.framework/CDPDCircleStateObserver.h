/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDXPCEventListener.h>

@protocol OS_dispatch_queue, CDPDCircleProxy;
@class NSObject, NSMutableArray, NSString;

@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener> {

	int _circleChangeToken;
	BOOL _isObserving;
	NSObject*<OS_dispatch_queue> _eventQueue;
	id<CDPDCircleProxy> _circleProxy;
	NSMutableArray* _circleObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeCircleStateWithChangeHandler:(/*^block*/id)arg1 ;
-(void)eventReceived:(const char*)arg1 eventValue:(unsigned long long)arg2 ;
-(void)observeChangeToState:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopObservingCircleStatusChange;
-(void)registerListener:(id)arg1 ;
-(const char*)_notificationName;
-(id)initWithProxy:(id)arg1 ;
-(void)dealloc;
@end

