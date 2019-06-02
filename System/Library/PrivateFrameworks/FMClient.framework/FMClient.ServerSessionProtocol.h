/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMClient.ServerSessionProtocol
@required
-(void)clientConfigurationWithUpdateConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)voiceAssistantSyncWithCompletion:(/*^block*/id)arg1;
-(void)invalidateCacheWithType:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)discoverNearbyDevicesWithCompletion:(/*^block*/id)arg1;
-(void)deviceSearch:(id)arg1 completion:(/*^block*/id)arg2;
-(void)playSound:(id)arg1 completion:(/*^block*/id)arg2;

@end

