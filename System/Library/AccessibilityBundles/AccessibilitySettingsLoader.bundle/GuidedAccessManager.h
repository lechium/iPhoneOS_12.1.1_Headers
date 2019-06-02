/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GuidedAccessManager : NSObject {

	id _notificationToken;

}

@property (nonatomic,retain) id notificationToken;              //@synthesize notificationToken=_notificationToken - In the implementation block
+(void)initializeMonitoring;
-(void)_loadRequiredBundles;
-(BOOL)applicationIsEntitledForUnmanagedASAM;
-(void)loadRequiredBundlesForUnmanagedASAM;
-(BOOL)_isValidClientApp;
-(void)_loadSpringboardServerBundle;
-(void)_loadClientBundle;
-(void)setNotificationToken:(id)arg1 ;
-(id)notificationToken;
-(id)init;
-(void)dealloc;
@end
