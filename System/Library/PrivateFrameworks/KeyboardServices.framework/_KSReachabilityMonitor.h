/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <KeyboardServices/KeyboardServices-Structs.h>
@class NSObject;

@interface _KSReachabilityMonitor : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _isInternetReachable;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)startMonitoring;
-(void)queryInitialState;
-(void)reachabilityDidChange:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

