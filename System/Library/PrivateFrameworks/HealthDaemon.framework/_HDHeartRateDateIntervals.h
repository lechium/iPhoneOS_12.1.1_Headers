/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _HDHeartRateDateIntervals : NSObject {

	double _currentStartInterval;
	double _currentEndInterval;
	long long _currentPairIndex;
	NSMutableArray* _intervalPairs;

}
-(BOOL)insideRanges:(double)arg1 ;
-(void)addDateRangeFrom:(double)arg1 to:(double)arg2 ;
-(id)init;
@end
