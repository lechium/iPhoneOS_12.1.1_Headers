/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, PAMicrostackshotData, NSSet;

@interface PAStackshot : NSObject {

	NSData* _traceBufData;
	unsigned long long _startOffset;
	double _machTimestamp;
	double _wallTimestamp;
	PAMicrostackshotData* _microstackshotData;
	NSSet* _deadPids;

}

@property (readonly) double machTimestamp;                                   //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (readonly) double wallTimestamp;                                   //@synthesize wallTimestamp=_wallTimestamp - In the implementation block
@property (readonly) PAMicrostackshotData * microstackshotData;              //@synthesize microstackshotData=_microstackshotData - In the implementation block
@property (readonly) BOOL isMicrostackshot; 
@property (readonly) NSSet * deadPids;                                       //@synthesize deadPids=_deadPids - In the implementation block
-(double)machTimestamp;
-(PAMicrostackshotData *)microstackshotData;
-(id)initWithTraceData:(id)arg1 machTimestamp:(double)arg2 wallTimestamp:(double)arg3 ;
-(BOOL)iterateTasks:(/*^block*/id)arg1 ;
-(double)wallTimestamp;
-(NSSet *)deadPids;
-(BOOL)isMicrostackshot;
@end

