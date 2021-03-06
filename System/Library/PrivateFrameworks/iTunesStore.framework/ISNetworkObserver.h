/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/SSDownloadQueueObserver.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableSet;

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver> {

	NSString* _dataStatusIndicator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isCellularRestricted;
	double _lastNetworkTypeChangeTime;
	unsigned _networkReachabilityFlags;
	long long _networkUsageCount;
	long long _networkType;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableSet* _observedDownloadQueues;
	NSString* _operatorName;
	SCNetworkReachabilityRef _reachability;
	NSString* _registrationStatus;
	CTServerConnectionRef _telephonyServer;

}

@property (readonly) NSString * connectionTypeHeader; 
@property (assign) long long networkType; 
@property (getter=isWiFiEnabled,readonly) BOOL wifiEnabled; 
@property (readonly) NSString * dataStatusIndicator; 
@property (readonly) NSString * mobileSubscriberCountryCode; 
@property (readonly) NSString * mobileSubscriberNetworkCode; 
@property (readonly) NSString * modemRegistrationStatus; 
@property (readonly) NSString * operatorName; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) NSString * providerName; 
@property (readonly) unsigned networkReachabilityFlags; 
@property (readonly) double lastNetworkTypeChangeTime; 
@property (getter=isUsingNetwork,readonly) BOOL usingNetwork; 
@property (readonly) BOOL shouldShowCellularAutomaticDownloadsSwitch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned)arg1 ;
+(void)set3GEnabled:(BOOL)arg1 ;
+(void)setAirplaneModeEnabled:(BOOL)arg1 ;
+(void)setWiFiEnabled:(BOOL)arg1 ;
+(id)sharedInstance;
-(long long)networkType;
-(void)setNetworkType:(long long)arg1 ;
-(NSString *)providerName;
-(void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2 ;
-(void)downloadQueueNetworkUsageChanged:(id)arg1 ;
-(NSString *)connectionTypeHeader;
-(unsigned)_currentNetworkReachabilityFlags;
-(long long)_networkTypeForReachabilityFlags:(unsigned)arg1 ;
-(void)_applicationForegroundNotification:(id)arg1 ;
-(BOOL)_ntsIsUsingNetwork;
-(void)_postUsageChangedToValue:(BOOL)arg1 ;
-(id)copyValueForCarrierBundleKey:(id)arg1 ;
-(id)_dataStatusIndicator;
-(void)_reloadNetworkType;
-(long long)_setNetworkType:(long long)arg1 ;
-(void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2 ;
-(void)_reloadDataStatusIndicator;
-(void)_copyConnectionDataStatus:(/*^block*/id)arg1 ;
-(long long)_networkTypeFromDataIndicator:(id)arg1 ;
-(void)_reloadNetworkTypeWithReachabilityFlags:(unsigned)arg1 ;
-(void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned)arg1 toValue:(unsigned)arg2 ;
-(void)beginObservingDownloadQueue:(id)arg1 ;
-(void)endObservingDownloadQueue:(id)arg1 ;
-(BOOL)shouldShowCellularAutomaticDownloadsSwitch;
-(NSString *)dataStatusIndicator;
-(BOOL)isCellularDataEnabledForBundleIdentifier:(id)arg1 ;
-(NSString *)mobileSubscriberCountryCode;
-(NSString *)mobileSubscriberNetworkCode;
-(NSString *)modemRegistrationStatus;
-(void)_handleTelephonyNotificationWithName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 ;
-(void)_reloadCellularRestriction;
-(BOOL)isWiFiEnabled;
-(double)lastNetworkTypeChangeTime;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(BOOL)isUsingNetwork;
-(void)reloadNetworkType;
-(NSString *)operatorName;
-(id)init;
-(void)dealloc;
-(NSString *)phoneNumber;
-(unsigned)networkReachabilityFlags;
@end

