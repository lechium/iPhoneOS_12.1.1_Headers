/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class _MPAudioAndSubtitlesController, UINavigationController, UIViewController;

@interface MPAudioAndSubtitlesController : UIViewController {

	_MPAudioAndSubtitlesController* _viewController;
	UINavigationController* _navController;
	UIViewController* _viewControllerForOrientation;

}

@property (assign,nonatomic,__weak) UIViewController * viewControllerForOrientation;              //@synthesize viewControllerForOrientation=_viewControllerForOrientation - In the implementation block
-(id)initWithAVItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setViewControllerForOrientation:(UIViewController *)arg1 ;
-(UIViewController *)viewControllerForOrientation;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
@end

