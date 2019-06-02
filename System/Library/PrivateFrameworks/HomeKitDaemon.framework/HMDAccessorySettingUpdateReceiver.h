/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessorySettingUpdateBase.h>

@class NSNumber;

@interface HMDAccessorySettingUpdateReceiver : HMDAccessorySettingUpdateBase {

	NSNumber* _configurationVersion;

}

@property (nonatomic,readonly) NSNumber * configurationVersion;              //@synthesize configurationVersion=_configurationVersion - In the implementation block
+(id)logCategory;
-(NSNumber *)configurationVersion;
-(id)initWithSessionID:(id)arg1 setting:(id)arg2 clientQueue:(id)arg3 delegate:(id)arg4 message:(id)arg5 configurationVersion:(id)arg6 outError:(id*)arg7 ;
-(void)update;
-(id)description;
@end

