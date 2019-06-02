/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitCompoundBox.h>

@interface EQKitVBox : EQKitCompoundBox {

	unsigned long long mPivotIndex;

}

@property (nonatomic,readonly) unsigned long long pivotIndex; 
-(BOOL)p_getTransform:(CGAffineTransform*)arg1 fromDescendant:(id)arg2 ;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(CGRect)p_cacheErasableBounds;
-(id)initWithChildBoxes:(id)arg1 ;
-(void)p_cacheDimensionsForHeight:(double*)arg1 depth:(double*)arg2 width:(double*)arg3 ;
-(id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2 ;
-(unsigned long long)pivotIndex;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

