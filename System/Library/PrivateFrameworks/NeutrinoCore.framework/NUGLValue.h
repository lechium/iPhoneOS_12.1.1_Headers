/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUGLValue : NSObject {

	SCD_Union_NU35 _value;
	unsigned _type;

}

@property (readonly) unsigned type;                          //@synthesize type=_type - In the implementation block
@property (readonly) int intValue; 
@property (readonly) float floatValue; 
@property (readonly) SCD_Struct_NU32 vec2Value; 
@property (readonly) SCD_Struct_NU10 vec4Value; 
@property (readonly) SCD_Struct_NU33 mat3Value; 
@property (readonly) SCD_Struct_NU34 mat4Value; 
+(id)valueWithVec4:(SCD_Struct_NU10)arg1 ;
+(id)valueWithInt:(int)arg1 ;
+(id)valueWithVec2:(SCD_Struct_NU32)arg1 ;
+(id)valueWithMat3:(SCD_Struct_NU33)arg1 ;
+(id)valueWithMat4:(SCD_Struct_NU34)arg1 ;
+(id)valueWithFloat:(float)arg1 ;
-(SCD_Struct_NU32)vec2Value;
-(SCD_Struct_NU10)vec4Value;
-(SCD_Struct_NU33)mat3Value;
-(SCD_Struct_NU34)mat4Value;
-(id)initWithBytes:(const void*)arg1 type:(unsigned)arg2 ;
-(id)init;
-(id)description;
-(float)floatValue;
-(unsigned)type;
-(int)intValue;
@end

