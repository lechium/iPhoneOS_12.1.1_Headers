/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface ICMachineDataActionHandler : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _operationQueue;

}
+(id)sharedHandler;
-(void)processActionFromResponse:(id)arg1 withRequestContext:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)processAction:(id)arg1 data:(id)arg2 withRequestContext:(id)arg3 version:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(id)init;
@end

