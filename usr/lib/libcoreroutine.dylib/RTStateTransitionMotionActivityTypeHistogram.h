/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RTStateTransitionMotionActivityTypeHistogram : NSObject {

	NSMutableDictionary* _motionActivityTypeBins;

}

@property (nonatomic,retain) NSMutableDictionary * motionActivityTypeBins;              //@synthesize motionActivityTypeBins=_motionActivityTypeBins - In the implementation block
-(NSMutableDictionary *)motionActivityTypeBins;
-(void)addMotionActivityType:(unsigned long long)arg1 ;
-(unsigned long long)getDominantMotionActivityType;
-(void)setMotionActivityTypeBins:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)show;
@end

