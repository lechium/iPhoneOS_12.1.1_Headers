/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LPStatisticsTimingToken : NSObject {

	NSString* _metricKey;
	unsigned long long _startTime;
	BOOL _isTiming;

}
-(void)stopTiming;
-(id)initWithMetric:(id)arg1 ;
@end

