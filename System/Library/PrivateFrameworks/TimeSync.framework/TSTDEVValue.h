/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSTDEVValue : NSObject {

	double _observationInterval;
	double _tdev;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double tdev;                             //@synthesize tdev=_tdev - In the implementation block
-(id)initWithObservationInterval:(double)arg1 andTDEV:(double)arg2 ;
-(double)tdev;
-(double)observationInterval;
-(id)description;
@end
