/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebApp/WebApp-Structs.h>
#import <UIKitCore/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, WebAppViewController, NSString;

@interface WebApplication : UIApplication <UIApplicationDelegate> {

	WebAppViewController* _webApp;
	UIWindow* _window;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(id)nameOfDefaultImageToUpdateAtSuspension:(long long)arg1 ;
-(void)_showWebApplicationAtURL:(id)arg1 ;
-(BOOL)applicationSuspendWithSettings:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(id)nameOfDefaultImageToUpdateAtSuspension;
@end

