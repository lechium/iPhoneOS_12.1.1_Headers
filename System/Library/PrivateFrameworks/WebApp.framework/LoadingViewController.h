/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIImage, UIImageView, UIView;

@interface LoadingViewController : UIViewController {

	BOOL _imageIsFullScreen;
	UIImage* _image;
	UIImageView* _imageView;
	long long _orientation;
	UIView* _statusBarView;
	long long _preferredStatusBarStyle;

}
-(id)initWithWebClip:(id)arg1 orientation:(long long)arg2 ;
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredStatusBarStyle;
@end
