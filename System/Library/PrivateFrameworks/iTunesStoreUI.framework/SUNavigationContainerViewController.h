/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class UIViewController;

@interface SUNavigationContainerViewController : SUViewController {

	BOOL _bridgedNavigation;
	BOOL _shouldRunPopHandler;
	/*^block*/id _popHandler;

}

@property (assign,nonatomic) BOOL shouldRunPopHandler;                                 //@synthesize shouldRunPopHandler=_shouldRunPopHandler - In the implementation block
@property (assign,nonatomic) BOOL bridgedNavigation;                                   //@synthesize bridgedNavigation=_bridgedNavigation - In the implementation block
@property (nonatomic,readonly) UIViewController * embeddedViewController; 
@property (nonatomic,copy) id popHandler;                                              //@synthesize popHandler=_popHandler - In the implementation block
-(id)initWithChildViewController:(id)arg1 ;
-(void)setPopHandler:(id)arg1 ;
-(BOOL)bridgedNavigation;
-(UIViewController *)embeddedViewController;
-(void)setEmbeddedViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBridgedNavigation:(BOOL)arg1 ;
-(BOOL)shouldRunPopHandler;
-(void)setShouldRunPopHandler:(BOOL)arg1 ;
-(id)popHandler;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
@end

