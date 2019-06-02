/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIDefinitionFilter : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputBlurImage;
	NSNumber* _inputIntensity;

}

@property (retain) CIImage * inputImage;                   //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) CIImage * inputBlurImage;               //@synthesize inputBlurImage=_inputBlurImage - In the implementation block
@property (retain) NSNumber * inputIntensity;              //@synthesize inputIntensity=_inputIntensity - In the implementation block
+(id)definitionKernel;
-(CIImage *)inputBlurImage;
-(void)setInputBlurImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
-(id)outputImage;
@end
