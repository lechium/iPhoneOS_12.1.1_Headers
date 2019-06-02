/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HKHeartSettingsUtilities : NSObject
+(BOOL)isHeartRateEnabled;
+(BOOL)isWristDetectionEnabled;
+(BOOL)isTachycardiaDetectionEnabled;
+(long long)tachycardiaThresholdHeartRate;
+(BOOL)isBradycardiaDetectionSupportedOnActiveWatch;
+(BOOL)isBradycardiaDetectionSupportedOnAllWatches;
+(BOOL)isBradycardiaDetectionEnabled;
+(long long)bradycardiaThresholdHeartRate;
+(BOOL)isBackgroundHeartRateEnabled;
+(id)heartRateSettingsURL;
@end

