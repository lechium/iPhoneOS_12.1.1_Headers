/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UISplitViewControllerDelegate
@optional
-(BOOL)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
-(void)splitViewController:(id)arg1 willShowViewController:(id)arg2 invalidatingBarButtonItem:(id)arg3;
-(void)splitViewController:(id)arg1 willHideViewController:(id)arg2 withBarButtonItem:(id)arg3 forPopoverController:(id)arg4;
-(void)splitViewController:(id)arg1 popoverController:(id)arg2 willPresentViewController:(id)arg3;
-(BOOL)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3;
-(BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
-(id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
-(id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
-(unsigned long long)splitViewControllerSupportedInterfaceOrientations:(id)arg1;
-(long long)splitViewControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
-(long long)targetDisplayModeForActionInSplitViewController:(id)arg1;

@end

