/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CKAccountOverrideInfo;


@protocol CKDAccountInfoProvider <NSObject>
@property (nonatomic,readonly) BOOL isAnonymousAccount; 
@property (nonatomic,readonly) BOOL isUnitTestingAccount; 
@property (nonatomic,readonly) BOOL accountWantsPushRegistration; 
@property (nonatomic,readonly) BOOL canAuthWithCloudKit; 
@property (nonatomic,readonly) BOOL canAccessAccount; 
@property (nonatomic,readonly) BOOL isCarryAccount; 
@property (nonatomic,readonly) BOOL isiCloudDevEnvironmentAccount; 
@property (nonatomic,readonly) CKAccountOverrideInfo * fakeAccountInfo; 
@optional
-(id)additionalHeaderValues;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;

@required
-(id)deviceName;
-(BOOL)isAnonymousAccount;
-(BOOL)isCarryAccount;
-(void)iCloudAuthTokenWithCompletionHandler:(/*^block*/id)arg1;
-(void)cloudKitAuthTokenWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(BOOL)isUnitTestingAccount;
-(BOOL)canAuthWithCloudKit;
-(id)serverPreferredPushEnvironment;
-(void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(CKAccountOverrideInfo *)fakeAccountInfo;
-(BOOL)accountWantsPushRegistration;
-(BOOL)canAccessAccount;
-(id)containerScopedUserID;
-(id)mescalSession;
-(id)hardwareID;
-(void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 failedToken:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 failedToken:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)resetMescalSession;
-(void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
-(void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchDeviceIDForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(BOOL)shouldFailAllTasks;
-(id)displayedHostname;
-(id)sharingURLHostname;
-(id)trafficContainerIdentifier;
-(BOOL)isiCloudDevEnvironmentAccount;
-(id)dsid;
-(id)bundleID;
-(id)languageCode;
-(id)regionCode;
-(id)config;
-(id)containerID;

@end

