/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationProgressView.h>

@class NTKRichComplicationCurveView;

@interface NTKRichComplicationCurvedProgressView : NTKRichComplicationProgressView {

	double _curveWidth;
	NTKRichComplicationCurveView* _backgroundView;
	NTKRichComplicationCurveView* _foregroundView;
	BOOL _clockwise;
	double _beginAngle;
	double _endAngle;

}

@property (assign,nonatomic) double beginAngle;              //@synthesize beginAngle=_beginAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) BOOL clockwise;                 //@synthesize clockwise=_clockwise - In the implementation block
-(void)setEndAngle:(double)arg1 ;
-(double)endAngle;
-(id)initWithCurveWidth:(double)arg1 padding:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 forDevice:(id)arg5 ;
-(void)setBeginAngle:(double)arg1 ;
-(void)setClockwise:(BOOL)arg1 ;
-(double)beginAngle;
-(BOOL)clockwise;
@end

