/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SATimestamp;

@interface SAHIDStep : NSObject {

	unsigned _debugid;
	int _pid;
	SATimestamp* _timestamp;
	unsigned long long _tid;

}

@property (retain) SATimestamp * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned debugid;                    //@synthesize debugid=_debugid - In the implementation block
@property (readonly) int pid;                             //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned long long tid;              //@synthesize tid=_tid - In the implementation block
+(id)hidStepWithKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
+(id)hidStepWithDebugId:(unsigned)arg1 pid:(int)arg2 tid:(unsigned long long)arg3 ;
-(int)pid;
-(unsigned)debugid;
-(unsigned long long)tid;
-(id)initWithTimestamp:(id)arg1 debugID:(unsigned)arg2 pid:(int)arg3 tid:(unsigned long long)arg4 ;
-(id)initWithKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
-(id)debugDescription;
-(SATimestamp *)timestamp;
-(void)setTimestamp:(SATimestamp *)arg1 ;
@end

