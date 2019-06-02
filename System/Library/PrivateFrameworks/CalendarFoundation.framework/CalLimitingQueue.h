/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface CalLimitingQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;

}
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)executeBlock;
-(id)queue;
@end
