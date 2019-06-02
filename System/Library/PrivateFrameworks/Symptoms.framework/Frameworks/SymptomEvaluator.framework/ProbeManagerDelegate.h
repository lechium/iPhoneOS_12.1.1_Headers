/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ProbeManagerDelegate <NSObject>
@optional
-(void)probeStatusUpdate:(id)arg1;
-(void)probeOutputFilePaths:(id)arg1 forDiagSessionUUID:(id)arg2;
-(void)serviceAdded:(id)arg1 type:(long long)arg2;
-(void)serviceUpdated:(id)arg1 type:(long long)arg2;
-(void)serviceRemoved:(id)arg1 type:(long long)arg2;
-(void)probeFactString:(id)arg1 module:(id)arg2 run:(BOOL)arg3;

@end
