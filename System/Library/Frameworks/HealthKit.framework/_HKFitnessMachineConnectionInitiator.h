/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKFitnessMachineConnectionInitiatorClientInterface.h>

@protocol _HKFitnessMachineConnectionInitiatorDelegate;
@class NSUUID, HKHealthStore, NSString;

@interface _HKFitnessMachineConnectionInitiator : NSObject <HKFitnessMachineConnectionInitiatorClientInterface> {

	NSUUID* _UUID;
	id<_HKFitnessMachineConnectionInitiatorDelegate> _delegate;
	HKHealthStore* _healthStore;

}

@property (assign,nonatomic,__weak) HKHealthStore * healthStore;                                            //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                                               //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic,__weak) id<_HKFitnessMachineConnectionInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithHealthStore:(id)arg1 ;
-(void)_connectionInterruptedWithError:(id)arg1 ;
-(void)peformServerOperation:(/*^block*/id)arg1 ;
-(void)clientRemote_updatedConnectionState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)clientRemote_updatedFitnessMachine:(id)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)clientRemote_updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)clientRemote_workoutAppReady;
-(void)clientRemote_encounteredError:(id)arg1 ;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 ;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 ;
-(void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)_simulateAccept;
-(void)_simulateDisconnect;
-(void)registerClient;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(NSUUID *)UUID;
-(void)setDelegate:(id<_HKFitnessMachineConnectionInitiatorDelegate>)arg1 ;
-(id<_HKFitnessMachineConnectionInitiatorDelegate>)delegate;
@end

