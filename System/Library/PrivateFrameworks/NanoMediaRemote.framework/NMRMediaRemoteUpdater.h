/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NMRMediaRemoteUpdater : NSObject {

	unsigned long long _updateState;
	/*^block*/id _updateBlock;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)executeUpdateBlock;
-(id)initWithQueue:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
@end

