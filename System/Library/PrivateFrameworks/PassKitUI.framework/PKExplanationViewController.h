/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKViewController.h>

@protocol PKExplanationViewControllerDelegate;
@class PKExplanationView, OBPrivacyLinkController;

@interface PKExplanationViewController : PKViewController {

	BOOL _showCancelButton;
	BOOL _showDoneButton;
	id<PKExplanationViewControllerDelegate> _explanationViewControllerDelegate;
	long long _context;
	PKExplanationView* _explanationView;
	OBPrivacyLinkController* _privacyLinkController;

}

@property (assign,nonatomic,__weak) id<PKExplanationViewControllerDelegate> explanationViewControllerDelegate;              //@synthesize explanationViewControllerDelegate=_explanationViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) long long context;                                                                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL showCancelButton;                                                                         //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (assign,nonatomic) BOOL showDoneButton;                                                                           //@synthesize showDoneButton=_showDoneButton - In the implementation block
@property (nonatomic,readonly) PKExplanationView * explanationView;                                                         //@synthesize explanationView=_explanationView - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;                                               //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
-(void)_cancelPressed;
-(PKExplanationView *)explanationView;
-(BOOL)pkui_prefersNavigationBarShadowHidden;
-(id)pkui_navigationBarTintColor;
-(void)setShowDoneButton:(BOOL)arg1 ;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(id<PKExplanationViewControllerDelegate>)explanationViewControllerDelegate;
-(void)setExplanationViewControllerDelegate:(id<PKExplanationViewControllerDelegate>)arg1 ;
-(BOOL)showDoneButton;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)_donePressed;
-(id)init;
-(long long)context;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithContext:(long long)arg1 ;
-(void)_dismissViewController;
-(BOOL)showCancelButton;
@end

