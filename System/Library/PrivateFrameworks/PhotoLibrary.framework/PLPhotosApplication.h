/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSString, NSDictionary, NSSet, BLActivityAlert;

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate> {

	BOOL _receivingRemoteControlEvents;
	UIWindow* _window;
	int _observeForRechabilityChanges;
	BOOL _isReachable;
	BOOL _isOnWifi;
	BOOL _photoStreamIsBusy;
	BOOL _sharedPhotoStreamIsBusy;
	int _photoStreamActivityToken;
	int _sharedPhotoStreamActivityToken;
	int _sharedPhotoStreamInvitationFailureToken;
	NSString* _currentTestName;
	NSDictionary* _currentTestOptions;
	NSSet* _notificationSuppressionContexts;
	BLActivityAlert* _iPhotoMigrationActivityAlert;

}

@property (nonatomic,readonly) BOOL isReachable;                                          //@synthesize isReachable=_isReachable - In the implementation block
@property (nonatomic,readonly) BOOL isOnWifi;                                             //@synthesize isOnWifi=_isOnWifi - In the implementation block
@property (nonatomic,retain) NSString * currentTestName;                                  //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,retain) NSDictionary * currentTestOptions;                           //@synthesize currentTestOptions=_currentTestOptions - In the implementation block
@property (nonatomic,copy) NSSet * notificationSuppressionContexts;                       //@synthesize notificationSuppressionContexts=_notificationSuppressionContexts - In the implementation block
@property (nonatomic,retain) BLActivityAlert * iPhotoMigrationActivityAlert;              //@synthesize iPhotoMigrationActivityAlert=_iPhotoMigrationActivityAlert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(void)initialize;
-(void)photosPreferencesChanged;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(void)_startObservingReachabilityChanges;
-(void)_stopObservingReachabilityChanges;
-(void)enableNetworkObservation;
-(void)disableNetworkObservation;
-(BOOL)isOnWifi;
-(id)getSharedContactStore;
-(id)mainWindow;
-(void)_setImageOptions;
-(void)_registerForPhotoStreamActivityNotifications;
-(void)sharedFinishedLaunching:(BOOL)arg1 ;
-(void)_cleanUpOutboundSharingAssets;
-(void)_updatePhotoStreamProgressDisplay;
-(void)_updateSharedPhotoStreamProgressDisplay;
-(void)setReceivingRemoteControlEvents:(BOOL)arg1 ;
-(void)_updateSuspensionSettings;
-(void)_unregisterForPhotoStreamActivityNotifications;
-(void)_updateNetworkActivityIndicatorAsync;
-(BOOL)useCompatibleSuspensionAnimation;
-(BOOL)visitViewControllersWithBlock:(/*^block*/id)arg1 ;
-(BLActivityAlert *)iPhotoMigrationActivityAlert;
-(void)setIPhotoMigrationActivityAlert:(BLActivityAlert *)arg1 ;
-(NSSet *)notificationSuppressionContexts;
-(void)_applicationDidResignActive:(id)arg1 ;
-(BOOL)shouldAllowSBAlertSupression;
-(void)setNotificationSuppressionContexts:(NSSet *)arg1 ;
-(void*)getSharedAddressBook;
-(void)handleImportCompleteAlertResponse:(CFUserNotificationRef)arg1 flags:(unsigned long long)arg2 ;
-(BOOL)isReachable;
-(void)setCurrentTestName:(NSString *)arg1 ;
-(void)setCurrentTestOptions:(NSDictionary *)arg1 ;
-(NSString *)currentTestName;
-(NSDictionary *)currentTestOptions;
-(void)dealloc;
-(id)rootViewController;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
@end

