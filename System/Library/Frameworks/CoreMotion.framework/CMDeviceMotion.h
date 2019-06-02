/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) BOOL doingYawCorrection; 
@property (nonatomic,readonly) BOOL doingBiasEstimation; 
@property (nonatomic,readonly) int magneticFieldCalibrationLevel; 
@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM4 rotationRate; 
@property (nonatomic,readonly) SCD_Struct_CM4 gravity; 
@property (nonatomic,readonly) SCD_Struct_CM4 userAcceleration; 
@property (nonatomic,readonly) SCD_Struct_CM7 magneticField; 
@property (nonatomic,readonly) double heading; 
+(BOOL)supportsSecureCoding;
-(id)initWithDeviceMotion:(SCD_Struct_CM6)arg1 andTimestamp:(double)arg2 ;
-(int)magneticFieldCalibrationLevel;
-(BOOL)doingYawCorrection;
-(BOOL)doingBiasEstimation;
-(SCD_Struct_CM4)userAcceleration;
-(SCD_Struct_CM4)rotationRate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM7)magneticField;
-(SCD_Struct_CM4)gravity;
-(double)heading;
-(CMAttitude *)attitude;
@end

