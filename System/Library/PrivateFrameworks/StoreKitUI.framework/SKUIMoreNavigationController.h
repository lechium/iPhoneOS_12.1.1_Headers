/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIMoreNavigationController.h>

@protocol SKUIMoreNavigationControllerDelegate;
@class UINavigationController, UIViewController;

@interface SKUIMoreNavigationController : UIMoreNavigationController {

	UINavigationController* _displayedViewController;
	UIViewController* _firstActualViewController;
	id<SKUIMoreNavigationControllerDelegate> _storeKitDelegate;

}

@property (assign,nonatomic,__weak) id<SKUIMoreNavigationControllerDelegate> storeKitDelegate;              //@synthesize storeKitDelegate=_storeKitDelegate - In the implementation block
+(Class)_moreListControllerClass;
-(id<SKUIMoreNavigationControllerDelegate>)storeKitDelegate;
-(void)setStoreKitDelegate:(id<SKUIMoreNavigationControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)displayedViewController;
-(void)setDisplayedViewController:(id)arg1 ;
@end
