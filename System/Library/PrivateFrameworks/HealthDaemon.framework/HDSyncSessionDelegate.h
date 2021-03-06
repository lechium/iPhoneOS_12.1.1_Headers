/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSyncSessionDelegate <NSObject>
@optional
-(BOOL)syncSession:(id)arg1 didEndTransactionWithError:(id*)arg2;

@required
-(void)syncSessionWillBegin:(id)arg1;
-(void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncSession:(id)arg1 didFinishSuccessfully:(BOOL)arg2 error:(id)arg3;

@end

