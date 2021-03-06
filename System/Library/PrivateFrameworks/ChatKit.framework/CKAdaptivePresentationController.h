/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/CKAlertControllerDelegate.h>

@class UIViewController, UIPopoverPresentationController, CKPresentationControllerWindow, NSString;

@interface CKAdaptivePresentationController : NSObject <UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate> {

	UIViewController* _presentedViewController;
	UIPopoverPresentationController* _currentPresentationController;
	CKPresentationControllerWindow* _presentationWindow;
	/*^block*/id _presentationHandler;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,retain) UIViewController * presentedViewController;                                   //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) UIPopoverPresentationController * currentPresentationController;              //@synthesize currentPresentationController=_currentPresentationController - In the implementation block
@property (nonatomic,retain) CKPresentationControllerWindow * presentationWindow;                          //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,copy) id presentationHandler;                                                         //@synthesize presentationHandler=_presentationHandler - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                                                            //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(/*^block*/id)arg3 dismissalHandler:(/*^block*/id)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)alertControllerViewDidDisappear:(id)arg1 ;
-(void)setPresentationHandler:(id)arg1 ;
-(id)presentationHandler;
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIViewController *)presentedViewController;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)_cleanup;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)setCurrentPresentationController:(UIPopoverPresentationController *)arg1 ;
-(UIPopoverPresentationController *)currentPresentationController;
-(void)setPresentationWindow:(CKPresentationControllerWindow *)arg1 ;
-(CKPresentationControllerWindow *)presentationWindow;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
@end

