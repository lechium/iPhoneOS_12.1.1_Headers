/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RTMotionActivityHistogramBin : NSObject <NSCopying> {

	unsigned long long _type;
	unsigned long long _confidence;
	double _interval;

}

@property (assign,nonatomic) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) double interval;                            //@synthesize interval=_interval - In the implementation block
-(id)initWithType:(unsigned long long)arg1 confidence:(unsigned long long)arg2 interval:(double)arg3 ;
-(void)updateConfidence:(unsigned long long)arg1 ;
-(void)addInterval:(double)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(unsigned long long)confidence;
-(void)setConfidence:(unsigned long long)arg1 ;
@end

