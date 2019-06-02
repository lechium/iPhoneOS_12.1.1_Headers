/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PeriodicMaintenanceActivity : NSObject {

	/*^block*/id _maintenanceBlocks;

}

@property (copy) id maintenanceBlocks;              //@synthesize maintenanceBlocks=_maintenanceBlocks - In the implementation block
+(id)activityQueue;
+(long long)periodicActivityInterval;
+(const char*)periodicActivityID;
+(id)sharedInstance;
-(void)scheduleNextRunOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_handleActivityRun;
-(id)maintenanceBlocks;
-(void)setMaintenanceBlocks:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
