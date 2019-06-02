/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDWorkoutServerInterface.h>

@class HDWorkoutManager, HDFitnessMachineManager, NSUUID, NSString;

@interface HDWorkoutServer : HDSubserver <HDWorkoutServerInterface> {

	HDWorkoutManager* _workoutManager;
	HDFitnessMachineManager* _fitnessMachineManager;
	NSUUID* _fitnessMachineConnectionUUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diagnosticDescription;
-(id)initWithParentServer:(id)arg1 ;
-(/*^block*/id)_completionHandlerForReplaceWithOriginalWorkout:(id)arg1 newWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_activeWorkoutApplicationIdentifier:(/*^block*/id)arg1 ;
-(void)remote_getFirstPartyWorkoutSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_getCurrentWorkoutSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_generatePauseOrResumeRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_finishAllWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_recoverActiveWorkoutSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_registerClient:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)remote_endFitnessMachineConnectionWithUUID:(id)arg1 ;
-(void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)remote_markClientReadyWithConnectionUUID:(id)arg1 ;
-(void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)remote_simulateAccept;
-(void)remote_simulateDisconnect;
-(void)remote_registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3 ;
-(void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)invalidate;
@end
