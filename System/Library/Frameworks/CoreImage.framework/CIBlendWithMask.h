/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIBlendWithMask : CIFilter {

	CIImage* inputImage;
	CIImage* inputBackgroundImage;
	CIImage* inputMaskImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputBackgroundImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
+(id)customAttributes;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(CIImage *)inputBackgroundImage;
-(void)setInputBackgroundImage:(CIImage *)arg1 ;
-(float)_maskFillColorValue;
-(id)_kernelB0;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

