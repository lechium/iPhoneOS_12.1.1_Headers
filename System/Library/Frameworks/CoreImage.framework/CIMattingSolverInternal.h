/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMattingSolverInternal : CIFilter {

	CIImage* inputImage;
	CIImage* inputMainImage;
	CIImage* inputPredicateImage;
	NSNumber* inputRadius;
	NSNumber* inputSubsampling;
	NSNumber* inputEPS;
	NSNumber* inputNumIterations;
	NSNumber* inputErosionKernelSize;
	NSNumber* inputUseDepthFilter;
	NSNumber* inputFGThresholdValue;
	NSNumber* inputBGThresholdValue;

}
+(id)customAttributes;
-(id)outputImage;
@end

