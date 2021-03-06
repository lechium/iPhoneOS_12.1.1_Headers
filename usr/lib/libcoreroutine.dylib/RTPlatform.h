/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTPlatform : NSObject
+(id)currentPlatform;
+(BOOL)version:(SCD_Struct_RT7)arg1 equalToVersion:(SCD_Struct_RT7)arg2 ;
+(BOOL)version:(SCD_Struct_RT7)arg1 noGreaterThanVersion:(SCD_Struct_RT7)arg2 ;
+(BOOL)operatingSystemNoGreaterThanVersion:(SCD_Struct_RT7)arg1 ;
+(BOOL)operatingSystemAtLeastVersion:(SCD_Struct_RT7)arg1 ;
+(BOOL)version:(SCD_Struct_RT7)arg1 atLeastVersion:(SCD_Struct_RT7)arg2 ;
+(SCD_Struct_RT7)operatingSystemVersionFromString:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)deviceClass;
-(BOOL)internalInstall;
-(id)serialNumber;
-(id)productType;
-(BOOL)paired;
-(BOOL)supportsCoreRoutineCapability;
-(BOOL)supportsRoutes;
-(BOOL)supportsMagicalMomentsCapability;
-(BOOL)supportsMicroLocations;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(BOOL)iPhonePlatform;
-(BOOL)watchPlatform;
-(BOOL)macOSPlatform;
-(BOOL)simulatorPlatform;
-(BOOL)lowEndHardware;
-(BOOL)supportsMultiUser;
-(unsigned long long)deviceMemorySize;
-(BOOL)iPhoneDevice;
-(BOOL)supportsPairedDevice;
-(id)systemVersion;
-(id)buildVersion;
@end

