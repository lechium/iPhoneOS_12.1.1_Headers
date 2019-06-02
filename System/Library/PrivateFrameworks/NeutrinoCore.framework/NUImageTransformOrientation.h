/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformOrientation : NUImageTransform {

	SCD_Struct_NU5 _inputImageSize;
	long long _orientation;

}

@property (readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
-(void)nu_updateDigest:(id)arg1 ;
-(id)initWithOrientation:(long long)arg1 imageSize:(SCD_Struct_NU5)arg2 ;
-(BOOL)isEqualToGeometryTransformOrientation:(id)arg1 ;
-(id)inverseTransform;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)orientation;
@end

