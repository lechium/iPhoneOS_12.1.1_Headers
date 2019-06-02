/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSString;

@interface CIDepthEffectApplyBlurMap : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurMap;
	CIImage* inputMatteImage;
	NSNumber* inputAperture;
	NSNumber* inputLumaNoiseScale;
	NSNumber* inputScale;
	id inputAuxDataMetadata;
	NSString* inputShape;
	NSNumber* inputDraftMode;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputBlurMap; 
@property (retain) CIImage * inputMatteImage; 
@property (nonatomic,copy) NSNumber * inputAperture; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseScale; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) id inputAuxDataMetadata; 
@property (nonatomic,retain) NSString * inputShape; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(CIImage *)inputMatteImage;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputLumaNoiseScale;
-(void)setInputLumaNoiseScale:(NSNumber *)arg1 ;
-(NSNumber *)inputAperture;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(NSString *)inputShape;
-(void)setInputShape:(NSString *)arg1 ;
-(id)inputAuxDataMetadata;
-(void)setInputAuxDataMetadata:(id)arg1 ;
-(CIImage *)inputBlurMap;
-(void)setInputBlurMap:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(id)outputImage;
@end

