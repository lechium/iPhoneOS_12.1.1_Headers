/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CUIRuntimeStatistics : NSObject {

	long long _wasted_size;
	long long _total_size;
	long long _shortCircuitImageLookup;
	long long _total_lookup;
	NSObject*<OS_dispatch_queue> _queue;
	int _notify_token;

}
+(id)sharedRuntimeStatistics;
+(void)generateLog;
-(void)_logStatistics:(int)arg1 ;
-(void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2 ;
-(void)incrementStatisticDidShortCircuitImageLookup;
-(void)incrementStatisticLookup;
-(id)init;
-(void)dealloc;
@end

