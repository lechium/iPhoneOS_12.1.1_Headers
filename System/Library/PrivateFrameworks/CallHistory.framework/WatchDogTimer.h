/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface WatchDogTimer : CHLogger {

	NSString* _name;
	NSObject*<OS_dispatch_source> _timer;

}
-(id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)cancel;
@end

