/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDProcessStateObserver.h>

@protocol HDClientDataCollectionObservationStateMonitorDelegate;
@class NSLock, HDXPCClient, HDProfile, NSString;

@interface HDClientDataCollectionObservationStateMonitor : NSObject <HDProcessStateObserver> {

	NSLock* _lock;
	AB _invalidated;
	HDXPCClient* _client;
	HDProfile* _profile;
	id<HDClientDataCollectionObservationStateMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) HDXPCClient * client;                                                                 //@synthesize client=_client - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                                           //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<HDClientDataCollectionObservationStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDProfile *)profile;
-(HDXPCClient *)client;
-(void)processDidEnterBackground:(id)arg1 ;
-(void)processDidEnterForeground:(id)arg1 ;
-(id)initWithClient:(id)arg1 profile:(id)arg2 delegate:(id)arg3 ;
-(id)currentObserverState;
-(void)workoutManagerDidChangeState:(id)arg1 ;
-(void)_componentStateDidChange;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<HDClientDataCollectionObservationStateMonitorDelegate>)arg1 ;
-(id<HDClientDataCollectionObservationStateMonitorDelegate>)delegate;
-(void)invalidate;
@end
