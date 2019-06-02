/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@interface NUTrimNode : NURenderNode {

	SCD_Struct_NU13 _range;

}

@property (readonly) SCD_Struct_NU13 range;              //@synthesize range=_range - In the implementation block
+(SCD_Struct_NU13)conformRange:(SCD_Struct_NU13)arg1 inRange:(SCD_Struct_NU13)arg2 ;
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 inputs:(NSDictionary*)arg2 ;
-(id)initWithTimeRange:(SCD_Struct_NU13)arg1 input:(id)arg2 ;
-(SCD_Struct_NU13)range;
@end

