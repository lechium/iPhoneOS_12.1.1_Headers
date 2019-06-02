/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/UIPointFIFO.h>

@class _UIPointVector, UIView;

@interface UIQuadCurvePointFIFO : UIPointFIFO {

	float _unitScale;
	BOOL _emitInterpolatedPoints;
	CGPathRef _path;
	double _lineWidth;
	/*^block*/id _emissionHandler;
	_UIPointVector* _prevPoints;
	_UIPointVector* _points;
	_UIPointVector* _controlPoints;
	 _lastPoint;
	UIView* _view;

}

@property (assign,nonatomic) float unitScale;                             //@synthesize unitScale=_unitScale - In the implementation block
@property (assign,nonatomic) BOOL emitInterpolatedPoints;                 //@synthesize emitInterpolatedPoints=_emitInterpolatedPoints - In the implementation block
@property (copy) id emissionHandler;                                      //@synthesize emissionHandler=_emissionHandler - In the implementation block
@property (assign,nonatomic) CGPathRef path;                              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double lineWidth;                            //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) _UIPointVector * prevPoints;                 //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) _UIPointVector * points;                     //@synthesize points=_points - In the implementation block
@property (assign,nonatomic) _UIPointVector * controlPoints;              //@synthesize controlPoints=_controlPoints - In the implementation block
@property (assign,nonatomic)  lastPoint;                                  //@synthesize lastPoint=_lastPoint - In the implementation block
@property (nonatomic,retain) UIView * view;                               //@synthesize view=_view - In the implementation block
+(6)interpolateFromPoint:(float)arg1 ;
-(_UIPointVector *)controlPoints;
-(_UIPointVector *)points;
-(void)setPoints:(_UIPointVector *)arg1 ;
-(float)unitScale;
-(void)enumerateInterpolationFromPoint:(/*^block*/id)arg1 ;
-(void)setUnitScaleForViewSize:(CGSize)arg1 normalizedSize:(CGSize)arg2 contentScaleFactor:(double)arg3 ;
-(BOOL)emitInterpolatedPoints;
-(void)setControlPoints:(_UIPointVector *)arg1 ;
-(void)setEmitInterpolatedPoints:(BOOL)arg1 ;
-(void)setUnitScale:(float)arg1 ;
-(id)initWithFIFO:(id)arg1 strokeView:(id)arg2 ;
-(void)dealloc;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGPathRef)path;
-(void)clear;
-(void)setLineWidth:(double)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(double)lineWidth;
-(void)addPoint:;
-(void)flush;
-(id)initWithFIFO:(id)arg1 ;
-(void)setPrevPoints:(_UIPointVector *)arg1 ;
-(_UIPointVector *)prevPoints;
-(void)setLastPoint:;
-()lastPoint;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
@end

