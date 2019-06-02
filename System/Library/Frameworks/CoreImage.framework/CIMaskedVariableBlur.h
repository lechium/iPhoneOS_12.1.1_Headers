/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMaskedVariableBlur : CIFilter {

	CIImage* inputImage;
	CIImage* inputMask;
	NSNumber* inputRadius;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputMask; 
@property (nonatomic,retain) NSNumber * inputRadius; 
+(id)customAttributes;
-(id)_kernelD2;
-(id)downTwo:(id)arg1 ;
-(id)upCubic:(id)arg1 scale:(float)arg2 ;
-(id)_kernelCombine;
-(BOOL)_isIdentity;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputMask;
-(void)setInputMask:(CIImage *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(id)outputImage;
@end
