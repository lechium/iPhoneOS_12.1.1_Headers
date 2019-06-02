/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIWindow;

@interface DDFallbackController : UIViewController {

	UIWindow* _baseWindow;
	UIWindow* _ourWindow;
	id _interactionDelegate;
	long long _startOrientation;

}
-(id)initWithWindow:(id)arg1 interactionDelegate:(id)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
@end
