/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class _UISearchControllerLimitedAccessView;

@interface _UISearchControllerLimitedUIShieldViewController : UIViewController {

	/*^block*/id _dismissAction;
	_UISearchControllerLimitedAccessView* _limitedAccessView;

}

@property (nonatomic,retain) _UISearchControllerLimitedAccessView * limitedAccessView;              //@synthesize limitedAccessView=_limitedAccessView - In the implementation block
@property (nonatomic,copy) id dismissAction;                                                        //@synthesize dismissAction=_dismissAction - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(void)setDismissAction:(id)arg1 ;
-(void)setLimitedAccessView:(_UISearchControllerLimitedAccessView *)arg1 ;
-(_UISearchControllerLimitedAccessView *)limitedAccessView;
-(void)_backButtonPressed:(id)arg1 ;
-(id)dismissAction;
@end

