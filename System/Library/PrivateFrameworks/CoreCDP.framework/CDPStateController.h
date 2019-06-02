/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDP/CDPController.h>

@interface CDPStateController : CDPController
-(void)repairCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleURLActionWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recoverAndSynchronizeWithSquirrel:(/*^block*/id)arg1 ;
-(void)recoverWithSquirrel:(/*^block*/id)arg1 ;
-(BOOL)shouldPerformRepair:(id*)arg1 ;
-(BOOL)deleteRecoveryKeyWithError:(id*)arg1 ;
-(void)handleURLActionWithInfo:(id)arg1 ;
-(void)finishOfflineLocalSecretChangeWithCompletion:(/*^block*/id)arg1 ;
-(id)generateRandomRecoveryKey:(id*)arg1 ;
-(void)deleteRecoveryKey:(/*^block*/id)arg1 ;
-(void)generateNewRecoveryKey:(/*^block*/id)arg1 ;
-(void)handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)startCircleApplicationApprovalServer:(/*^block*/id)arg1 ;
-(BOOL)isManateeAvailable:(id*)arg1 ;
@end

