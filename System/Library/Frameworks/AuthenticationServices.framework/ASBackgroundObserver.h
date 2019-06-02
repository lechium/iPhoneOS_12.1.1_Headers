/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface ASBackgroundObserver : NSObject {

	UIViewController* _viewController;
	/*^block*/id _block;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) id block;                                              //@synthesize block=_block - In the implementation block
-(id)initWithViewController:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)dealloc;
-(UIViewController *)viewController;
-(id)block;
-(void)_hostDidEnterBackground:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
@end

