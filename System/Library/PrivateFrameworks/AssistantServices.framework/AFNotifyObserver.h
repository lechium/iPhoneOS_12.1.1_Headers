/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, AFNotifyObserverDelegate;
@class NSObject, NSString;

@interface AFNotifyObserver : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _options;
	id<AFNotifyObserverDelegate> _delegate;
	int _registrationToken;
	struct {
		unsigned delegateRespondsToDidReceiveNotificationWithToken : 1;
		unsigned delegateRespondsToDidChangeStateFromTo : 1;
	}  _flags;
	unsigned long long _state;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithName:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 delegate:(id)arg4 ;
-(void)_handleNotificationWithToken:(int)arg1 ;
-(void)_updateStateWithToken:(int)arg1 ;
-(void)dealloc;
-(unsigned long long)state;
-(void)invalidate;
-(void)_invalidate;
@end

