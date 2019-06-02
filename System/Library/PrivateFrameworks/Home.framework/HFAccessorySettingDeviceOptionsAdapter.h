/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAccessorySettingAdapter.h>
#import <libobjc.A.dylib/HFAccessorySettingAdapterButtonHandling.h>
#import <libobjc.A.dylib/HFAccessorySettingAdapterDisplayArbitrating.h>

@class RPCompanionLinkClient, NAFuture, NSString;

@interface HFAccessorySettingDeviceOptionsAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterButtonHandling, HFAccessorySettingAdapterDisplayArbitrating> {

	RPCompanionLinkClient* _client;
	NAFuture* _inProgressSysdiagnoseCollectionFuture;
	NAFuture* _linkIsActivatedFuture;
	NAFuture* _accessoryCompanionLinkDeviceFuture;

}

@property (nonatomic,readonly) NAFuture * linkIsActivatedFuture;                            //@synthesize linkIsActivatedFuture=_linkIsActivatedFuture - In the implementation block
@property (nonatomic,readonly) NAFuture * accessoryCompanionLinkDeviceFuture;               //@synthesize accessoryCompanionLinkDeviceFuture=_accessoryCompanionLinkDeviceFuture - In the implementation block
@property (nonatomic,readonly) RPCompanionLinkClient * client;                              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NAFuture * inProgressSysdiagnoseCollectionFuture;              //@synthesize inProgressSysdiagnoseCollectionFuture=_inProgressSysdiagnoseCollectionFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_home;
-(id)handleButtonPressForEntity:(id)arg1 ;
-(BOOL)supportButtonPressForEntity:(id)arg1 ;
-(id)inProgressButtonPressFutureForEntity:(id)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 mode:(unsigned long long)arg2 ;
-(BOOL)shouldShowSettingsEntity:(id)arg1 ;
-(id)identifyAccessory;
-(void)_resetRapportClientWithInvalidation:(BOOL)arg1 ;
-(id)_sendRapportMessageWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3 ;
-(NAFuture *)inProgressSysdiagnoseCollectionFuture;
-(void)setInProgressSysdiagnoseCollectionFuture:(NAFuture *)arg1 ;
-(id)_homeKitAccessoryUniqueIdentifier;
-(NAFuture *)linkIsActivatedFuture;
-(NAFuture *)accessoryCompanionLinkDeviceFuture;
-(void)_updateDevices;
-(void)_setupRapportClient;
-(RPCompanionLinkClient *)client;
@end

