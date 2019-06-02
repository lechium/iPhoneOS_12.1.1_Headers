/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDMedicalIDServerInterface <NSObject>
@required
-(void)remote_medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)remote_updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1;
-(void)remote_medicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1;

@end
