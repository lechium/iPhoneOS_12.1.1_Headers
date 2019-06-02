/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteConfiguration/RemoteConfiguration-Structs.h>
#import <libobjc.A.dylib/RCSerializable.h>

@class NSArray, NSString, RCDeviceInfo, RCDebugOverrides, NSURL;

@interface RCConfigurationSettings : NSObject <RCSerializable> {

	BOOL _useBackgroundRefreshRate;
	NSArray* _requestInfos;
	NSString* _userID;
	NSString* _storefrontID;
	NSString* _bundleID;
	RCDeviceInfo* _deviceInfo;
	RCDebugOverrides* _debugOverrides;

}

@property (nonatomic,readonly) NSURL * fallbackURL; 
@property (nonatomic,readonly) NSArray * requestInfos;                         //@synthesize requestInfos=_requestInfos - In the implementation block
@property (nonatomic,copy,readonly) NSString * userID;                         //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontID;                   //@synthesize storefrontID=_storefrontID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) RCDeviceInfo * deviceInfo;                      //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) RCDebugOverrides * debugOverrides;              //@synthesize debugOverrides=_debugOverrides - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingKey; 
@property (nonatomic,readonly) BOOL useBackgroundRefreshRate;                  //@synthesize useBackgroundRefreshRate=_useBackgroundRefreshRate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)storefrontID;
-(id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6 useBackgroundRefreshRate:(BOOL)arg7 ;
-(NSString *)loggingKey;
-(id)JSONRepresentation;
-(RCDeviceInfo *)deviceInfo;
-(NSArray *)requestInfos;
-(NSURL *)fallbackURL;
-(NSString *)userID;
-(RCDebugOverrides *)debugOverrides;
-(BOOL)useBackgroundRefreshRate;
-(id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8 useBackgroundRefreshRate:(BOOL)arg9 ;
-(id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8 ;
-(id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleID;
-(BOOL)isValid;
@end
