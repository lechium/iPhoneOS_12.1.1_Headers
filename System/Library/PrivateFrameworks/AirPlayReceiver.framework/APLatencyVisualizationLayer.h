/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APLatencyVisualizationLayer : CALayer {

	double _dotOffset;
	double _dotDiameter;
	double _dotSpeed;
	double _dotSpeedX;
	double _dotSpeedY;
	void* _timeContext;
	/*function pointer*/void* _getAbsoluteTime;

}
-(id)init:(/*function pointer*/void*)arg1 timeContext:(void*)arg2 zPosition:(int)arg3 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

