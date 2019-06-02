/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFClientLiteClientCommandHandling.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface AFClientLite : NSObject <AFClientLiteClientCommandHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _commandHandler;

}
-(void)_handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 commandHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 commandHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleOneWayCommand:(id)arg1 commandHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleCommand:(id)arg1 commandHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
@end
