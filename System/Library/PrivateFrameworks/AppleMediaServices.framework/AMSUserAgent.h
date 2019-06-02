/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSLRUCache, NSString;

@interface AMSUserAgent : NSObject {

	AMSLRUCache* _cache;

}

@property (nonatomic,copy,readonly) NSString * clientName; 
@property (nonatomic,copy,readonly) NSString * clientVersion; 
+(id)shared;
-(NSString *)clientVersion;
-(NSString *)clientName;
-(id)userAgentForBundleIdentifier:(id)arg1 additionalComponents:(id)arg2 addAccountMediaTypeComponent:(BOOL)arg3 ;
-(id)clientNameForBundleIdentifier:(id)arg1 ;
-(id)userAgentForBundleIdentifier:(id)arg1 additionalComponents:(id)arg2 ;
-(id)clientVersionForBundleIdentifier:(id)arg1 ;
-(id)cachedUserAgentForBundleIdentifier:(id)arg1 ;
-(id)_iOSComponentFairPlayDeviceType;
-(id)_iOSComponentClientInfoWithBundleID:(id)arg1 ;
-(id)_iOSComponentProductVersion;
-(id)_iOSComponentDeviceModel;
-(id)_iOSComponentHardwarePlatform;
-(id)_iOSComponentBuildVersion;
-(id)_iOSComponentParentheticalWithFairPlayDeviceType:(id)arg1 ;
-(id)_sharedComponentFrameworkVersion;
-(void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)_iOSFairPlayDeviceType:(unsigned*)arg1 error:(id*)arg2 ;
-(id)init;
@end

