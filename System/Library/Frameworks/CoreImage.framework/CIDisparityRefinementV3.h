/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class NSNumber, CIImage, NSDictionary;

@interface CIDisparityRefinementV3 : CIFilter {

	NSNumber* inputScale;
	CIImage* inputImage;
	CIImage* inputMainImage;
	CIImage* inputMatteImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputDraftMode;

}

@property (copy) NSNumber * inputScale; 
@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputMainImage; 
@property (retain) CIImage * inputMatteImage; 
@property (retain) NSDictionary * inputTuningParameters; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(NSNumber *)inputDraftMode;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(CIImage *)inputMatteImage;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(id)alphaImageForMainImage:(id)arg1 disparity:(id)arg2 ;
-(CIImage *)inputMainImage;
-(void)setInputMainImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(id)outputImage;
@end
