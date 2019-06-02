/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface SUAutoUpdatePasscodePolicy : NSObject {

	NSHashTable* _queue_observers;
	NSObject*<OS_dispatch_queue> _observerCalloutQueue;
	NSObject*<OS_dispatch_queue> _queue;
	int _stateChangedNotifyToken;
	unsigned long long _queue_currentPolicyType;

}

@property (nonatomic,readonly) unsigned long long currentPolicyType; 
+(id)sharedInstance;
-(void)setCurrentPolicyType:(unsigned long long)arg1 ;
-(unsigned long long)currentPolicyType;
-(BOOL)_isValidPasscodePolicyType:(unsigned long long)arg1 ;
-(id)stringForCurrentPolicy;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)_init;
@end

