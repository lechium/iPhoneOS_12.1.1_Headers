/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedVector2 : MDLAnimatedValue
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(VtValue=aligned_storage_imp<8, 8>=(data_t=[8c]a8)}TfPointerAndBits<const VtValue::_TypeInfo>=_TypeInfo}}}Ref)defaultVtValue;
-(void)setFloat2:(double)arg1 ;
-(void)setDouble2:(double)arg1 ;
-(2)float2AtTime:(double)arg1 ;
-(2)double2AtTime:(double)arg1 ;
-(void)resetWithFloat2Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDouble2Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)getFloat2Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble2Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)precision;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

