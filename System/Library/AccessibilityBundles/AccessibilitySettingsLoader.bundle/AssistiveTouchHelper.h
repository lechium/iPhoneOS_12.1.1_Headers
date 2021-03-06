/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
@interface AssistiveTouchHelper : NSObject
+(void)initializeMonitoring;
-(id)_astDispatchQueue;
-(void)_sendKeyboardStatusUpdate:(CGRect)arg1 ;
-(void)_sendKeyboardStatusUpdateHidden;
-(void)_sendKeyboardStatusUpdate;
-(void)_sendSafeAreaUpdate;
-(void)installMediaCategoriesAndValidate;
-(void)installiPodUICategoriesAndValidate;
-(void)installKeyboardListener;
-(void)installMediaControlsListener;
-(void)_handleMediaPlaybackEnded;
-(id)init;
-(void)dealloc;
-(void)enable;
@end

