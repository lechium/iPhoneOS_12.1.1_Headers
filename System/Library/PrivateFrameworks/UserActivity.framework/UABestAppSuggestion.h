/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSDictionary, NSString, NSDate;

@interface UABestAppSuggestion : NSObject {

	unsigned long long _type;
	NSUUID* _uniqueIdentifier;
	NSDictionary* _options;
	NSString* _bundleIdentifier;
	NSString* _activityType;
	NSString* _dynamicIdentifier;
	NSDate* _lastUpdateTime;
	double _confidence;
	NSString* _originatingDeviceIdentifier;
	NSString* _originatingDeviceName;
	NSString* _originatingDeviceType;

}

@property (copy,readonly) NSString * userActivityTypeIdentifier; 
@property (copy) NSUUID * uniqueIdentifier;                                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy) NSString * activityType;                                      //@synthesize activityType=_activityType - In the implementation block
@property (readonly) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy,readonly) NSString * dynamicIdentifier;                        //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy,readonly) NSDate * lastUpdateTime;                             //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (copy,readonly) NSDate * when; 
@property (copy,readonly) NSDictionary * options;                              //@synthesize options=_options - In the implementation block
@property (readonly) double confidence;                                        //@synthesize confidence=_confidence - In the implementation block
@property (copy,readonly) NSString * originatingDeviceIdentifier;              //@synthesize originatingDeviceIdentifier=_originatingDeviceIdentifier - In the implementation block
@property (copy,readonly) NSString * originatingDeviceName;                    //@synthesize originatingDeviceName=_originatingDeviceName - In the implementation block
@property (copy,readonly) NSString * originatingDeviceType;                    //@synthesize originatingDeviceType=_originatingDeviceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dynamicIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 uuid:(id)arg2 activityType:(id)arg3 dynamicIdentifier:(id)arg4 lastUpdateTime:(id)arg5 type:(unsigned long long)arg6 deviceName:(id)arg7 deviceIdentifier:(id)arg8 deviceType:(id)arg9 options:(id)arg10 ;
-(NSString *)originatingDeviceIdentifier;
-(NSString *)userActivityTypeIdentifier;
-(NSDate *)when;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(unsigned long long)type;
-(NSDictionary *)options;
-(NSString *)activityType;
-(NSUUID *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(NSString *)originatingDeviceType;
-(NSString *)originatingDeviceName;
-(NSDate *)lastUpdateTime;
-(double)confidence;
-(void)setActivityType:(NSString *)arg1 ;
@end

