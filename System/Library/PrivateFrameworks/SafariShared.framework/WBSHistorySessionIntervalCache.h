/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSCalendar;

@interface WBSHistorySessionIntervalCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSCalendar* _calendar;
	Vector<double, 0, WTF::CrashOnOverflow, 16>* _intervalCache;

}
-(double)beginningOfSessionContainingTime:(double)arg1 ;
-(double)_beginningOfSessionContainingTime:(double)arg1 ;
-(void)_getSessionIntervalForTime:(double)arg1 beginningOfDay:(double*)arg2 beginningOfNextDay:(double*)arg3 ;
-(id)init;
-(id)initWithCalendar:(id)arg1 ;
@end

