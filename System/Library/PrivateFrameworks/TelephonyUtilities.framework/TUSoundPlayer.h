/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, TURepeatingActor;

@interface TUSoundPlayer : NSObject {

	unsigned _soundID;
	NSObject*<OS_dispatch_queue> _queue;
	TURepeatingActor* _repeatingActor;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) TURepeatingActor * repeatingActor;               //@synthesize repeatingActor=_repeatingActor - In the implementation block
@property (assign,nonatomic) unsigned soundID;                                  //@synthesize soundID=_soundID - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(void)playSound:(unsigned)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 ;
-(void)playSound:(unsigned)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)stopPlaying;
-(void)setSoundID:(unsigned)arg1 ;
-(unsigned)soundID;
-(TURepeatingActor *)repeatingActor;
-(void)playSound:(unsigned)arg1 ;
-(void)playSoundIndefinitely:(unsigned)arg1 pauseDurationBetweenIterations:(double)arg2 ;
-(id)init;
-(BOOL)isPlaying;
-(NSObject*<OS_dispatch_queue>)queue;
@end

