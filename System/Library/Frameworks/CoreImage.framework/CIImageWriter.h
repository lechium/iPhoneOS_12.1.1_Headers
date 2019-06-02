/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSString, NSNumber, CIFilter;

@interface CIImageWriter : CIFilter {

	CIImage* inputImage;
	NSString* inputFilename;
	NSNumber* inputShouldDumpInputValues;
	CIFilter* inputOriginalFilter;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSString * inputFilename; 
@property (retain) NSNumber * inputShouldDumpInputValues; 
@property (retain) CIFilter * inputOriginalFilter; 
+(id)customAttributes;
-(NSNumber *)inputShouldDumpInputValues;
-(NSString *)inputFilename;
-(void)setInputFilename:(NSString *)arg1 ;
-(void)setInputShouldDumpInputValues:(NSNumber *)arg1 ;
-(CIFilter *)inputOriginalFilter;
-(void)setInputOriginalFilter:(CIFilter *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

