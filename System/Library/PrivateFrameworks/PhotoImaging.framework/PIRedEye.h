/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSString;

@interface PIRedEye : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputDestinationImage;
	NSArray* _inputCorrectionInfo;
	NSString* _inputCameraModel;

}

@property (nonatomic,retain) CIImage * inputImage;                         //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) CIImage * inputDestinationImage;              //@synthesize inputDestinationImage=_inputDestinationImage - In the implementation block
@property (nonatomic,retain) NSArray * inputCorrectionInfo;                //@synthesize inputCorrectionInfo=_inputCorrectionInfo - In the implementation block
@property (nonatomic,retain) NSString * inputCameraModel;                  //@synthesize inputCameraModel=_inputCameraModel - In the implementation block
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSArray *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSArray *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputDestinationImage;
-(void)setInputDestinationImage:(CIImage *)arg1 ;
-(id)outputImage;
@end
