/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CAMediaTiming
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
@required
-(NSString *)fillMode;
-(void)setRepeatDuration:(double)arg1;
-(double)repeatDuration;
-(void)setDuration:(double)arg1;
-(double)duration;
-(double)beginTime;
-(void)setSpeed:(float)arg1;
-(void)setBeginTime:(double)arg1;
-(void)setFillMode:(id)arg1;
-(void)setTimeOffset:(double)arg1;
-(void)setAutoreverses:(BOOL)arg1;
-(double)timeOffset;
-(float)repeatCount;
-(void)setRepeatCount:(float)arg1;
-(float)speed;
-(BOOL)autoreverses;

@end

