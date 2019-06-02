/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class PKPaymentPass, NSArray, PKPaymentSetupMoreInfoView;

@interface PKPaymentSetupMoreInfoViewController : UIViewController {

	BOOL _isFinalViewController;
	PKPaymentPass* _pass;
	NSArray* _moreInfoItems;
	long long _context;
	/*^block*/id _dismissalHandler;
	PKPaymentSetupMoreInfoView* _moreInfoView;

}

@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain,readonly) NSArray * moreInfoItems;                                //@synthesize moreInfoItems=_moreInfoItems - In the implementation block
@property (nonatomic,readonly) long long context;                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                                               //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentSetupMoreInfoView * moreInfoView;              //@synthesize moreInfoView=_moreInfoView - In the implementation block
@property (assign,nonatomic) BOOL isFinalViewController;                                      //@synthesize isFinalViewController=_isFinalViewController - In the implementation block
-(id)_currentItem;
-(PKPaymentPass *)pass;
-(id)_nextItems;
-(void)_configureNavigationItem;
-(void)_handlePush;
-(void)_handleDismissal;
-(id)initWithMoreInfoItems:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 dismissalHandler:(/*^block*/id)arg4 ;
-(NSArray *)moreInfoItems;
-(PKPaymentSetupMoreInfoView *)moreInfoView;
-(BOOL)isFinalViewController;
-(void)setIsFinalViewController:(BOOL)arg1 ;
-(long long)context;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(unsigned long long)edgesForExtendedLayout;
-(void)_nextTapped:(id)arg1 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
@end
