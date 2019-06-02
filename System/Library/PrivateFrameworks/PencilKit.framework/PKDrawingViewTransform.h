/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class NSDate;

@interface PKDrawingViewTransform : NSObject {

	NSDate* _startTime;
	double _duration;
	CGAffineTransform _from;
	CGAffineTransform _to;
	CGAffineTransform _final;

}

@property (assign,nonatomic) CGAffineTransform from;               //@synthesize from=_from - In the implementation block
@property (assign,nonatomic) CGAffineTransform to;                 //@synthesize to=_to - In the implementation block
@property (assign,nonatomic) CGAffineTransform final;              //@synthesize final=_final - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
-(void)setFrom:(CGAffineTransform)arg1 ;
-(void)setTo:(CGAffineTransform)arg1 ;
-(CGAffineTransform)from;
-(CGAffineTransform)to;
-(void)setFinal:(CGAffineTransform)arg1 ;
-(CGAffineTransform)final;
-(void)setDuration:(double)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(double)duration;
@end

