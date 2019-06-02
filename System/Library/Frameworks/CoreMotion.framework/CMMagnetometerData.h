/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMMagnetometerData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM4 magneticField; 
+(BOOL)supportsSecureCoding;
-(id)initWithMagneticField:(SCD_Struct_CM1)arg1 andTimestamp:(double)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM4)magneticField;
@end

