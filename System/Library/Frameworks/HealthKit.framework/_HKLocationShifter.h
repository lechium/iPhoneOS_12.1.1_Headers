/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(BOOL)isShiftRequiredForLocations:(id)arg1 ;
-(void)shiftLocations:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
@end

