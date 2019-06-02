/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSingleSourceDefinition.h>

@interface NUTestPatternSourceDefinition : NUSingleSourceDefinition {

	long long _orientation;
	SCD_Struct_NU5 _size;

}

@property (readonly) SCD_Struct_NU5 size;                //@synthesize size=_size - In the implementation block
@property (readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSize:(SCD_Struct_NU5)arg1 orientation:(long long)arg2 ;
-(SCD_Struct_NU5)size;
-(id)init;
-(long long)orientation;
@end

