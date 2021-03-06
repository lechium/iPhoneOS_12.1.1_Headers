/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@interface ARImageCroppingTechnique : ARTechnique {

	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _croppedPixelBufferPool;
	CGRect _cropRect;
	CGSize _croppedImageSize;

}

@property (nonatomic,readonly) CGSize croppedImageSize;              //@synthesize croppedImageSize=_croppedImageSize - In the implementation block
-(unsigned long long)requiredSensorDataTypes;
-(CGSize)croppedImageSize;
-(id)initWithCroppedImageSize:(CGSize)arg1 ;
-(id)processData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
@end

