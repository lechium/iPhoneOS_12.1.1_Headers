/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UMUserSwitchManagement_Private <NSObject>
@required
-(void)suspendQuotasWithCompletionHandler:(/*^block*/id)arg1;
-(void)resumeQuotas;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)registerCriticalUserSwitchStakeHolder:(id)arg1;
-(void)userInteractionIsEnabled;

@end

