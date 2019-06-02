/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CILensModelApply : CIFilter {

	CIImage* inputImage;
	CIImage* inputLensModelParams;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputLensModelParams; 
-(id)kernel;
-(CIImage *)inputLensModelParams;
-(void)setInputLensModelParams:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

