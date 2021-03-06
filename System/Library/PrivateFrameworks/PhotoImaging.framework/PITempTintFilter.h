/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PITempTintFilter : CIFilter {

	CIImage* _inputImage;
	double _temperature;
	double _tint;

}

@property (nonatomic,retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
@property (assign,nonatomic) double temperature;                //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) double tint;                       //@synthesize tint=_tint - In the implementation block
-(void)setTemperature:(double)arg1 ;
-(void)setTint:(double)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputVectorsForFilter:(id)arg1 ;
-(double)temperature;
-(double)tint;
-(id)outputImage;
@end

