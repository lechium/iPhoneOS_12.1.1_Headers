/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTUtilities : NSObject
+(BOOL)isInternalInstall;
+(BOOL)isAlwaysOn;
+(BOOL)isNano;
+(BOOL)VTRunsPremium;
+(void)forceReload;
+(double)_round:(double)arg1 withPlaces:(int)arg2 ;
+(id)deviceProductType;
+(id)deviceProductVersion;
+(id)sanitizeEventInfoForLogging:(id)arg1 ;
+(BOOL)supportPremiumAssets;
+(double)systemUpTime;
@end

