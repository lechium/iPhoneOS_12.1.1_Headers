/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDFitnessMachineConnectionInitiatorProtocol.h>

@protocol HDFitnessMachinePairingManagerDelegate;
@class NSString;

@interface HDFitnessMachinePairingManager : NSObject <HDFitnessMachineConnectionInitiatorProtocol> {

	id<HDFitnessMachinePairingManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HDFitnessMachinePairingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(void)workoutAppIsReady;
-(void)handleBLEConnectionCompletedSuccessfully:(BOOL)arg1 ;
-(void)updatedFitnessMachine;
-(void)updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)updatedConnectionStateWithError:(id)arg1 ;
-(void)deliverError:(id)arg1 ;
-(void)registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3 ;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)simulateTapWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)simulateAccept;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)setDelegate:(id<HDFitnessMachinePairingManagerDelegate>)arg1 ;
-(id<HDFitnessMachinePairingManagerDelegate>)delegate;
-(void)reset;
-(void)setActivityType:(unsigned long long)arg1 ;
@end

