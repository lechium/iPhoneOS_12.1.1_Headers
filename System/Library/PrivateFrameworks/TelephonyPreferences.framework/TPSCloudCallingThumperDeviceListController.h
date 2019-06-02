/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TPSCloudCallingDeviceListController.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>

@class TPSCloudCallingThumperProvisioningURLController, TPSCloudCallingThumperController, NSString;

@interface TPSCloudCallingThumperDeviceListController : TPSCloudCallingDeviceListController <TUCallCapabilitiesDelegatePrivate> {

	TPSCloudCallingThumperProvisioningURLController* _provisioningURLController;
	TPSCloudCallingThumperController* _thumperController;

}

@property (nonatomic,readonly) TPSCloudCallingThumperProvisioningURLController * provisioningURLController;              //@synthesize provisioningURLController=_provisioningURLController - In the implementation block
@property (nonatomic,readonly) TPSCloudCallingThumperController * thumperController;                                     //@synthesize thumperController=_thumperController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1 ;
-(void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1 ;
-(void)setDeviceSwitchOn:(id)arg1 specifier:(id)arg2 ;
-(id)isDeviceSwitchOn:(id)arg1 ;
-(void)setMainSwitchOn:(id)arg1 specifier:(id)arg2 ;
-(id)isMainSwitchOn:(id)arg1 ;
-(TPSCloudCallingThumperController *)thumperController;
-(TPSCloudCallingThumperProvisioningURLController *)provisioningURLController;
-(id)init;
@end

