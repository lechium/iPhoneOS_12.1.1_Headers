/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSISEngine;

@interface NSISObjectiveLinearExpression : NSObject {

	NSISEngine* _engine;
	CFDictionaryRef _priorityMap;
	CFArrayRef _variablesSortedByPriorityVectors;
	CFDataRef _constant;

}
-(unsigned long long)variableCount;
-(void)verifyInternalIntegrity;
-(id)initWithLinearExpression:(SCD_Struct_NS73*)arg1 priority:(double)arg2 engine:(id)arg3 ;
-(void)removeVar:(os_unfair_lock_s)arg1 ;
-(void)addVar:(os_unfair_lock_s)arg1 priority:(double)arg2 times:(double)arg3 processVarNewToReceiver:(/*^block*/id)arg4 processVarDroppedFromReceiver:(/*^block*/id)arg5 ;
-(void)addExpression:(SCD_Struct_NS73*)arg1 priority:(double)arg2 times:(double)arg3 processVarNewToReceiver:(/*^block*/id)arg4 processVarDroppedFromReceiver:(/*^block*/id)arg5 ;
-(void)replaceVar:(os_unfair_lock_s)arg1 withVarPlusDelta:(double)arg2 timesVar:(os_unfair_lock_s)arg3 processVarNewToReceiver:(/*^block*/id)arg4 processVarDroppedFromReceiver:(/*^block*/id)arg5 ;
-(void)leadingPriority:(double*)arg1 andValue:(double*)arg2 forVar:(os_unfair_lock_s)arg3 ;
-(void)replaceVar:(os_unfair_lock_s)arg1 withExpression:(SCD_Struct_NS73*)arg2 processVarNewToReceiver:(/*^block*/id)arg3 processVarDroppedFromReceiver:(/*^block*/id)arg4 ;
-(BOOL)restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(os_unfair_lock_s*)arg1 ;
-(BOOL)constantTermIsZero;
-(void)enumerateVars:(/*^block*/id)arg1 ;
-(void)replaceVar:(os_unfair_lock_s)arg1 withVarPlusDelta:(double)arg2 ;
-(void)removeVariable:(id)arg1 ;
-(void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)addVar:(os_unfair_lock_s)arg1 priority:(double)arg2 times:(double)arg3 ;
-(void)incrementConstantWithPriority:(double)arg1 value:(double)arg2 ;
-(CFDataRef)priorityVectorForVar:(os_unfair_lock_s)arg1 ;
-(void)setPriorityVector:(CFDataRef)arg1 forKnownAbsentVar:(os_unfair_lock_s)arg2 ;
-(void)incrementConstantWithPriorityVector:(CFDataRef)arg1 timesScalarCoefficient:(double)arg2 ;
-(int)valueRestrictionForVar:(os_unfair_lock_s)arg1 ;
-(void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3 ;
-(id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithEngine:(id)arg1 ;
@end

