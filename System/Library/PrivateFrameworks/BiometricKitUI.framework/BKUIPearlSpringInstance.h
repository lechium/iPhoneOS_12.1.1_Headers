/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BiometricKitUI/BiometricKitUI-Structs.h>
@class FLSpring;

@interface BKUIPearlSpringInstance : NSObject {

	FLSpring* springs[3];
	 _value;
	SCD_Struct_BK5 _matrix;
	SCD_Struct_BK5 _initialMatrix;
	 _color;
	float _alphaFactor;
	float _alphaDecay;
	float _scale;
	float _scaleDest;
	BOOL _grayscale;
	unsigned long long _axisOrientation;
	unsigned long long _springState;
	 _target;

}

@property (assign) unsigned long long axisOrientation;                    //@synthesize axisOrientation=_axisOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long springState;              //@synthesize springState=_springState - In the implementation block
@property (assign,nonatomic)  target;                                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic)  value; 
@property (assign,nonatomic) BOOL grayscale;                              //@synthesize grayscale=_grayscale - In the implementation block
-(SCD_Struct_BK5)matrix;
-(id)initWithInitialRotation:color:;
-(void)setAxisOrientation:(unsigned long long)arg1 ;
-(void)setSpringState:(unsigned long long)arg1 ;
-(void)step:(double)arg1 ;
-(SCD_Struct_BK5)createAxisRotationMatrix:;
-(unsigned long long)axisOrientation;
-(unsigned long long)springState;
-(void)setTarget:;
-()target;
-()value;
-(1)velocity;
-(void)setValue:;
-(1)color;
-(void)setParameters:(FLSpringParameters)arg1 ;
-(BOOL)grayscale;
-(void)setGrayscale:(BOOL)arg1 ;
@end

