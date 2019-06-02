/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@interface ARImageScalingTechnique : ARTechnique {

	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _scaledPixelBufferPool;
	unsigned char _downscaleFactor;

}

@property (nonatomic,readonly) unsigned char downscaleFactor;              //@synthesize downscaleFactor=_downscaleFactor - In the implementation block
-(unsigned long long)requiredSensorDataTypes;
-(unsigned char)downscaleFactor;
-(id)initWithDownscaleFactor:(unsigned char)arg1 ;
-(id)processData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
@end

