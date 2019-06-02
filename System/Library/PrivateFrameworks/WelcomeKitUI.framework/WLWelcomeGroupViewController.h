/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitUI/WelcomeKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSLayoutConstraint, WLWelcomeViewControllerMetrics, UILayoutGuide;

@interface WLWelcomeGroupViewController : UIViewController {

	NSLayoutConstraint* _hInsetLeftConstraint;
	NSLayoutConstraint* _hInsetRightConstraint;
	NSLayoutConstraint* _hInsetProgressBarLeftConstraint;
	NSLayoutConstraint* _hInsetProgressBarRightConstraint;
	WLWelcomeViewControllerMetrics* _metrics;
	UILayoutGuide* _hInsetLayoutGuide;
	UILayoutGuide* _hInsetProgressBarLayoutGuide;

}

@property (nonatomic,readonly) WLWelcomeViewControllerMetrics * metrics;                  //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * hInsetLayoutGuide;                         //@synthesize hInsetLayoutGuide=_hInsetLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * hInsetProgressBarLayoutGuide;              //@synthesize hInsetProgressBarLayoutGuide=_hInsetProgressBarLayoutGuide - In the implementation block
-(id)initWithMetrics:(id)arg1 ;
-(void)_updateLayoutGuideConstraints;
-(UILayoutGuide *)hInsetLayoutGuide;
-(id)loadTitleViewWithTitle:(id)arg1 ;
-(UILayoutGuide *)hInsetProgressBarLayoutGuide;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(WLWelcomeViewControllerMetrics *)metrics;
-(void)updateViewConstraints;
@end
