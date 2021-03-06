/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tea/Tea-Structs.h>
#import <UIKitCore/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class NSArray, UIViewController;

@interface Tea.TabBarSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {

	 masterViewController;
	 additionalTabBarChildControllers;
	 detailContainerViewController;
	 eventHandler;
	 bootstrapper;
	 fullScreenCover;
	 keyCommandCoordinator;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
-(void)toggleKeyResponder;
-(NSArray *)keyCommands;
-(void)willEnterFullscreen;
-(void)didEnterFullscreen;
-(void)willExitFullscreen;
-(void)didExitFullscreen;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3 ;
-(BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2 ;
-(long long)targetDisplayModeForActionInSplitViewController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
@end

