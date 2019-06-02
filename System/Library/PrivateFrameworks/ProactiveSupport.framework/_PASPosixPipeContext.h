/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_io;
@class NSObject, NSFileHandle;

@interface _PASPosixPipeContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_io> _readChannel;
	NSFileHandle* _writeHandle;
	BOOL _stop;

}
-(int)setupWithSubprocessFd:(int)arg1 fileActions:(void*)arg2 queue:(id)arg3 group:(id)arg4 readErrno:(int*)arg5 ;
-(void)startReadWithHandler:(/*^block*/id)arg1 ;
@end

