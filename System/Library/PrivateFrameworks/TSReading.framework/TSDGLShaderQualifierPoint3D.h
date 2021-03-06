/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint3D : TSDGLShaderQualifier {

	SCD_Struct_TS81 _GLPoint3DValue;
	SCD_Struct_TS81 _proposedGLPoint3DValue;

}

@property (getter=LPoint3DValue,nonatomic,readonly) SCD_Struct_TS81 GLPoint3DValue;              //@synthesize GLPoint3DValue=_GLPoint3DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS81 proposedGLPoint3DValue;                             //@synthesize proposedGLPoint3DValue=_proposedGLPoint3DValue - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS81)GLPoint3DValue;
-(void)setProposedGLPoint3DValue:(SCD_Struct_TS81)arg1 ;
-(SCD_Struct_TS81)proposedGLPoint3DValue;
-(id)description;
@end

