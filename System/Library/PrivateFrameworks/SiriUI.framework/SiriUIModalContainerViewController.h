/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol SiriUIModalContainerViewControllerDelegate;
@class UIViewController;

@interface SiriUIModalContainerViewController : UIViewController {

	UIViewController* _contentViewController;
	id<SiriUIModalContainerViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIViewController * contentViewController;                                  //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIModalContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SiriUIModalContainerViewControllerDelegate>)arg1 ;
-(id<SiriUIModalContainerViewControllerDelegate>)delegate;
-(id)initWithContentViewController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(UIViewController *)contentViewController;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForHomeIndicatorAutoHidden;
@end

