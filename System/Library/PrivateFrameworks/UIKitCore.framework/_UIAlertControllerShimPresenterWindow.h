/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIApplicationRotationFollowingWindow.h>

@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {

	UIAlertController* _alertController;

}

@property (nonatomic,retain,readonly) UIAlertController * alertController; 
-(id)init;
-(UIAlertController *)alertController;
-(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_presentationViewController;
@end
