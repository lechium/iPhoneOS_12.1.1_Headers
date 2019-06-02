/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKUIPearlEnrollViewDelegate <NSObject>
@required
-(void)enrollView:(id)arg1 willNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
-(void)enrollView:(id)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
-(void)didReachSmallNudgePeakForEnrollView:(id)arg1;
-(void)didReachLargeNudgePeakForEnrollView:(id)arg1;

@end

