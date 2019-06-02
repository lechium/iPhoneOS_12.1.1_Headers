/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <libobjc.A.dylib/IKAppTabBarController.h>

@protocol _TVAppNavigationControllerDelegate;
@class IKAppTabBar, NSArray, NSString;

@interface _TVRootMenuBarController : UITabBarController <UITabBarControllerDelegate, IKAppTabBarController> {

	IKAppTabBar* _appTabBar;
	id<_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;
	NSArray* _appTabBarItems;
	unsigned long long _previousSelectedIndex;

}

@property (nonatomic,retain) NSArray * appTabBarItems;                                                                   //@synthesize appTabBarItems=_appTabBarItems - In the implementation block
@property (assign,nonatomic) unsigned long long previousSelectedIndex;                                                   //@synthesize previousSelectedIndex=_previousSelectedIndex - In the implementation block
@property (nonatomic,retain) IKAppTabBar * appTabBar;                                                                    //@synthesize appTabBar=_appTabBar - In the implementation block
@property (assign,nonatomic,__weak) id<_TVAppNavigationControllerDelegate> appNavigationControllerDelegate;              //@synthesize appNavigationControllerDelegate=_appNavigationControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAppTabBar:(IKAppTabBar *)arg1 ;
-(void)setAppNavigationControllerDelegate:(id<_TVAppNavigationControllerDelegate>)arg1 ;
-(unsigned long long)previousSelectedIndex;
-(void)setPreviousSelectedIndex:(unsigned long long)arg1 ;
-(IKAppTabBar *)appTabBar;
-(void)setAppTabBarItems:(NSArray *)arg1 ;
-(id)selectedTabItemForTabBar:(id)arg1 ;
-(void)tabBar:(id)arg1 setSelectedTabItem:(id)arg2 ;
-(id)tabBar:(id)arg1 setTabItems:(id)arg2 ;
-(id)transientTabItemForTabBar:(id)arg1 ;
-(unsigned long long)numberOfTabsInTabBar:(id)arg1 ;
-(id)tabBar:(id)arg1 tabItemAtIndex:(unsigned long long)arg2 ;
-(id<_TVAppNavigationControllerDelegate>)appNavigationControllerDelegate;
-(NSArray *)appTabBarItems;
-(id)init;
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1 ;
@end

