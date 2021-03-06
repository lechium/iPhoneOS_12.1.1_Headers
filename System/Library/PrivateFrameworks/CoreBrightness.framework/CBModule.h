/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSObject;

@interface CBModule : NSObject {

	/*^block*/id _notificationBlock;
	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)unregisterNotificationBlock;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
@end

