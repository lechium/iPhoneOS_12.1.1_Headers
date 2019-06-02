/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIVectorOperatable.h>

@class NSString;

@interface UIInterpolatedRect : NSObject <UIVectorOperatable> {

	CGRect _rect;
	double _epsilon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)valueWithCGRect:(CGRect)arg1 ;
+(id)zero;
+(id)epsilon;
+(id)valueWithCGRect:(CGRect)arg1 epsilon:(double)arg2 ;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)getValue;
-(id)interpolateTo:(id)arg1 progress:(double)arg2 ;
-(id)multiplyByVector:(id)arg1 ;
-(void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(SCD_Struct_UI117)arg5 state:(SCD_Struct_UI108)arg6 delta:(double)arg7 ;
-(BOOL)isUndefined;
-(void)reinitWithVector:(id)arg1 ;
-(id)multiplyByScalar:(double)arg1 ;
-(id)addVector:(id)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(id)getNSValue;
@end

