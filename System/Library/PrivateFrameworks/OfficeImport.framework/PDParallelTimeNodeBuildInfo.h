/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDAnimationTarget;

@interface PDParallelTimeNodeBuildInfo : NSObject {

	PDAnimationTarget* mTarget;
	double mDelay;
	double mDuration;
	int mIterateType;
	id mValue;

}

@property (retain) PDAnimationTarget * target; 
@property (assign) double delay; 
@property (assign) double duration; 
@property (assign) int iterateType; 
@property (retain) id value; 
-(int)iterateType;
-(void)setIterateType:(int)arg1 ;
-(void)dealloc;
-(void)setTarget:(PDAnimationTarget *)arg1 ;
-(PDAnimationTarget *)target;
-(void)setDuration:(double)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(double)duration;
-(double)delay;
-(void)setDelay:(double)arg1 ;
@end

