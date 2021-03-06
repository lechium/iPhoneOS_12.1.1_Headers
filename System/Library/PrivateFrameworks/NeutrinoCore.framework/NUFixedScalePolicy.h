/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUScalePolicy.h>

@class NSString;

@interface NUFixedScalePolicy : NSObject <NUScalePolicy> {

	SCD_Struct_NU5 _scale;

}

@property (readonly) SCD_Struct_NU5 scale;                          //@synthesize scale=_scale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)oneToOneScalePolicy;
-(id)initWithScale:(SCD_Struct_NU5)arg1 ;
-(SCD_Struct_NU5)scaleForImageSize:(SCD_Struct_NU5)arg1 ;
-(id)init;
-(SCD_Struct_NU5)scale;
-(NSString *)description;
@end

