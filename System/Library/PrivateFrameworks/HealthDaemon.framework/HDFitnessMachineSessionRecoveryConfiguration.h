/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject <NSSecureCoding> {

	NSUUID* _sessionUUID;
	NSUUID* _machineUUID;
	unsigned long long _machineType;
	NSString* _machineName;
	NSString* _machineBrand;
	unsigned long long _activityType;

}

@property (nonatomic,readonly) NSUUID * sessionUUID;                         //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * machineUUID;                         //@synthesize machineUUID=_machineUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long machineType;               //@synthesize machineType=_machineType - In the implementation block
@property (nonatomic,copy,readonly) NSString * machineName;                  //@synthesize machineName=_machineName - In the implementation block
@property (nonatomic,copy) NSString * machineBrand;                          //@synthesize machineBrand=_machineBrand - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)machineUUID;
-(NSUUID *)sessionUUID;
-(void)setMachineBrand:(NSString *)arg1 ;
-(unsigned long long)machineType;
-(NSString *)machineBrand;
-(NSString *)machineName;
-(id)initWithSessionUUID:(id)arg1 machineUUID:(id)arg2 machineType:(unsigned long long)arg3 machineName:(id)arg4 machineBrand:(id)arg5 activityType:(unsigned long long)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)activityType;
@end

