/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TimingCollection : NSObject {

	NSMutableDictionary* timings;
	NSObject*<OS_dispatch_queue> queue;

}
-(BOOL)isValidTimingForKey:(int)arg1 ;
-(float)timingForKey:(int)arg1 ;
-(void)setTiming:(float)arg1 forKey:(int)arg2 ;
-(float)totalTimeForKey:(int)arg1 ;
-(void)removeTimingForKey:(int)arg1 ;
-(BOOL)hasKey:(int)arg1 ;
-(void)setStartTime:(float)arg1 forKey:(int)arg2 ;
-(void)setStopTime:(float)arg1 forKey:(int)arg2 ;
-(void)startTimingForKey:(int)arg1 ;
-(void)stopTimingForKey:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end
