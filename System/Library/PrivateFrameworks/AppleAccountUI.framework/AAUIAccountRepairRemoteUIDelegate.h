/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAUIAccountRepairRemoteUIDelegate <NSObject>
@optional
-(void)accountRepairRemoteUIWillAppear:(id)arg1;
-(void)accountRepairRemoteUIWillDismiss:(id)arg1;
-(void)accountRepairRemoteUI:(id)arg1 didReceiveObjectModel:(id)arg2;
-(void)accountRepairRemoteUI:(id)arg1 willPresentModalNavigationController:(id)arg2;
-(id)accountRepairRemoteUI:(id)arg1 headersForRequest:(id)arg2;

@required
-(void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(BOOL)arg3;

@end
