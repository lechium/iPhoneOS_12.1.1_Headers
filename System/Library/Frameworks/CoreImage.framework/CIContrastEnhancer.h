/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIContrastEnhancer : CIFilter {

	CIImage* inputImage;
	NSNumber* inputIntensity;
	NSNumber* inputScale;
	NSNumber* inputLocal;
	NSNumber* inputPerceptual;

}

@property (nonatomic,retain) NSNumber * inputIntensity; 
@property (nonatomic,retain) NSNumber * inputLocal; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputPerceptual; 
+(id)customAttributes;
-(NSNumber *)inputPerceptual;
-(void)setInputPerceptual:(NSNumber *)arg1 ;
-(NSNumber *)inputLocal;
-(void)setInputLocal:(NSNumber *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
-(id)outputImage;
@end

