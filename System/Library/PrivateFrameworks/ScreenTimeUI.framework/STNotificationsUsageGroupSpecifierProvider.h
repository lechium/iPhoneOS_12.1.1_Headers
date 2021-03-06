/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STShowMoreUsageGroupSpecifierProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, BBSettingsGateway, NSObject;

@interface STNotificationsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider {

	NSMutableDictionary* _notificationSectionByBundleID;
	BBSettingsGateway* _notificationSettingsGateway;
	NSObject*<OS_dispatch_queue> _notificationSettingsGatewayQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * notificationSectionByBundleID;                        //@synthesize notificationSectionByBundleID=_notificationSectionByBundleID - In the implementation block
@property (nonatomic,readonly) BBSettingsGateway * notificationSettingsGateway;                            //@synthesize notificationSettingsGateway=_notificationSettingsGateway - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationSettingsGatewayQueue;              //@synthesize notificationSettingsGatewayQueue=_notificationSettingsGatewayQueue - In the implementation block
-(id)getUsageReport:(id)arg1 ;
-(id)newSpecifierWithUsageItem:(id)arg1 ;
-(void)updateSpecifier:(id)arg1 usageItem:(id)arg2 ;
-(NSMutableDictionary *)notificationSectionByBundleID;
-(BBSettingsGateway *)notificationSettingsGateway;
-(id)getNotificationsInfo:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationSettingsGatewayQueue;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
@end

