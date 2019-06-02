/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKit/ARKit-Structs.h>
@interface ARODTResult : NSObject {

	unsigned long long _detectedObjectID;
	void* _imageContext;
	SCD_Struct_AR16 _visionTransform;

}

@property (assign,nonatomic) unsigned long long detectedObjectID;              //@synthesize detectedObjectID=_detectedObjectID - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR16 visionTransform;                  //@synthesize visionTransform=_visionTransform - In the implementation block
@property (assign,nonatomic) void* imageContext;                               //@synthesize imageContext=_imageContext - In the implementation block
-(void*)imageContext;
-(unsigned long long)detectedObjectID;
-(SCD_Struct_AR16)visionTransform;
-(void)setVisionTransform:(SCD_Struct_AR16)arg1 ;
-(void)setImageContext:(void*)arg1 ;
-(void)setDetectedObjectID:(unsigned long long)arg1 ;
@end

