/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDUtilityServerInterface <NSObject>
@required
-(void)remote_startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_stopFakingDataWithCompletion:(/*^block*/id)arg1;
-(void)remote_generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(/*^block*/id)arg3;
-(void)remote_fetchDiagnosticsWithKeys:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_createFakeAppleSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_fetchAllDevicesWithCompletion:(/*^block*/id)arg1;
-(void)remote_saveDataObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 sourceVersion:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7;
-(void)remote_dropEntitlement:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_restoreEntitlement:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_runAWDTask:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_resetAWDTask:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_observeDataCollectionForType:(id)arg1 interval:(double)arg2 inBackground:(BOOL)arg3 hasRunningWorkout:(BOOL)arg4;
-(void)remote_stopObservingDataCollectionForType:(id)arg1;
-(void)remote_fetchURLForAnalyticsFileWithName:(id)arg1 completion:(/*^block*/id)arg2;

@end

