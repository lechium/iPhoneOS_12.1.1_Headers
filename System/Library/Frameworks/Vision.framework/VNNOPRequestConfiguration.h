/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNSupportedImageSize;

@interface VNNOPRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _detectorWantsAnisotropicScaling;
	VNSupportedImageSize* _detectorPreferredImageSize;
	double _detectorExecutionTimeInterval;

}

@property (nonatomic,copy) VNSupportedImageSize * detectorPreferredImageSize;              //@synthesize detectorPreferredImageSize=_detectorPreferredImageSize - In the implementation block
@property (assign,nonatomic) BOOL detectorWantsAnisotropicScaling;                         //@synthesize detectorWantsAnisotropicScaling=_detectorWantsAnisotropicScaling - In the implementation block
@property (assign,nonatomic) double detectorExecutionTimeInterval;                         //@synthesize detectorExecutionTimeInterval=_detectorExecutionTimeInterval - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setDetectorPreferredImageSize:(VNSupportedImageSize *)arg1 ;
-(void)setDetectorWantsAnisotropicScaling:(BOOL)arg1 ;
-(void)setDetectorExecutionTimeInterval:(double)arg1 ;
-(VNSupportedImageSize *)detectorPreferredImageSize;
-(BOOL)detectorWantsAnisotropicScaling;
-(double)detectorExecutionTimeInterval;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

