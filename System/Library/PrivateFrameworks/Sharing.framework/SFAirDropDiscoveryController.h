/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/SFWirelessSettingsControllerDelegate.h>

@class UIAlertController, SFWirelessSettingsController, NSString;

@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate, SFWirelessSettingsControllerDelegate> {

	id _delegate;
	BOOL _isVisible;
	BOOL _isLegacyDevice;
	BOOL _isLegacyModeEnabled;
	BOOL _isLegacyModeSettable;
	SFOperationRef _controller;
	id _alertControllerDelegate;
	UIAlertController* _alertController;
	SFWirelessSettingsController* _settingsController;
	long long _discoverableMode;

}

@property (getter=isVisible,readonly) BOOL visible; 
@property (assign) long long discoverableMode; 
@property (getter=isLegacyDevice,readonly) BOOL legacyDevice; 
@property (getter=isLegacyModeEnabled) BOOL legacyModeEnabled; 
@property (getter=isLegacyModeSettable,readonly) BOOL legacyModeSettable; 
@property (__weak) id<SFAirDropDiscoveryControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<SFAirDropDiscoveryAlertControllerDelegate> alertControllerDelegate;              //@synthesize alertControllerDelegate=_alertControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)operationDiscoverableModeToInteger:(id)arg1 ;
-(void)updateAlertControllerTitle;
-(void)setDiscoverableMode:(long long)arg1 ;
-(id)discoverableModeToString:(long long)arg1 ;
-(void)wirelessSettingsDidChange:(id)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(BOOL)isLegacyDevice;
-(BOOL)isLegacyModeEnabled;
-(void)setLegacyModeEnabled:(BOOL)arg1 ;
-(BOOL)isLegacyModeSettable;
-(id)discoverableModeAlertController;
-(long long)discoverableMode;
-(id<SFAirDropDiscoveryAlertControllerDelegate>)alertControllerDelegate;
-(void)setAlertControllerDelegate:(id<SFAirDropDiscoveryAlertControllerDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<SFAirDropDiscoveryControllerDelegate>)arg1 ;
-(id<SFAirDropDiscoveryControllerDelegate>)delegate;
-(BOOL)isVisible;
-(void)invalidate;
@end

