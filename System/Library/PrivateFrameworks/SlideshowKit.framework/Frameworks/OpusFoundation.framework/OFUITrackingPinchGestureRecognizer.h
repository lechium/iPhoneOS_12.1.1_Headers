/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIPinchGestureRecognizer.h>

@interface OFUITrackingPinchGestureRecognizer : UIPinchGestureRecognizer {

	unsigned long long _zoomMode;
	unsigned long long _leftTouchIndex;
	unsigned long long _rightTouchIndex;
	CGPoint _leftTouchLocation;
	CGPoint _rightTouchLocation;
	CGPoint _centerPoint;
	CGPoint _previousLeftLocation;
	CGPoint _previousRightLocation;
	double _originalWidth;
	double _originalAngle;
	double _pinchWidth;
	double _pinchAngle;
	double _pinchScale;
	long long _magnifyState;
	long long _rotateState;
	BOOL _startedPinchingOut;
	BOOL _startedPinchingIn;

}

@property (assign) unsigned long long zoomMode;              //@synthesize zoomMode=_zoomMode - In the implementation block
@property (assign) double pinchWidth;                        //@synthesize pinchWidth=_pinchWidth - In the implementation block
@property (assign) double pinchAngle;                        //@synthesize pinchAngle=_pinchAngle - In the implementation block
@property (assign) double pinchScale;                        //@synthesize pinchScale=_pinchScale - In the implementation block
-(unsigned long long)zoomMode;
-(double)pinchWidth;
-(void)setPinchWidth:(double)arg1 ;
-(void)setPinchAngle:(double)arg1 ;
-(void)setPinchScale:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 mode:(unsigned long long)arg3 ;
-(double)pinchAngle;
-(double)pinchScale;
-(void)setZoomMode:(unsigned long long)arg1 ;
-(void)dealloc;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
@end

