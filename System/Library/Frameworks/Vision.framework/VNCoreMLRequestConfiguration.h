/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@protocol NSObjectNSCopying;
@interface VNCoreMLRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _imageCropAndScaleOption;
	id<NSObject><NSCopying> _modelCachingIdentifier;

}

@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;                //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> modelCachingIdentifier;              //@synthesize modelCachingIdentifier=_modelCachingIdentifier - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(void)setModelCachingIdentifier:(id<NSObject><NSCopying>)arg1 ;
-(id<NSObject><NSCopying>)modelCachingIdentifier;
-(void)updateWithPropertiesOfModel:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
