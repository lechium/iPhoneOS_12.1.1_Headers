/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSTransactionLogTaskHandler.h>

@protocol OS_dispatch_queue;
@class IDSTransactionLogTask, NSObject;

@interface IDSTransactionLogBaseTaskHandler : IDSTransactionLogTaskHandler {

	IDSTransactionLogTask* _task;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) IDSTransactionLogTask * task;                    //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setTask:(IDSTransactionLogTask *)arg1 ;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(IDSTransactionLogTask *)task;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)perform;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
