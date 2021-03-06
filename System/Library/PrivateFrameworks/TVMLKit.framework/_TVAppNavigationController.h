/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/IKAppNavigationController.h>

@protocol _TVAppNavigationControllerDelegate, NSObject;
@class UITapGestureRecognizer, UIViewController, NSString;

@interface _TVAppNavigationController : UINavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate, IKAppNavigationController> {

	struct {
		unsigned shouldOverrideModalBehaviorForPlaybackDocument : 1;
		unsigned shouldIgnoreDismissal : 1;
		unsigned shouldDismissShroud : 1;
		unsigned willLoadAppDocumentWithController : 1;
	}  _ancDelegateFlags;
	id<_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;
	UITapGestureRecognizer* _menuRecognizer;
	UIViewController* _presentedModalViewController;
	id<NSObject> _modalPresenterObserverToken;

}

@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;                                                    //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (nonatomic,retain) UIViewController * presentedModalViewController;                                            //@synthesize presentedModalViewController=_presentedModalViewController - In the implementation block
@property (nonatomic,retain) id<NSObject> modalPresenterObserverToken;                                                   //@synthesize modalPresenterObserverToken=_modalPresenterObserverToken - In the implementation block
@property (assign,nonatomic,__weak) id<_TVAppNavigationControllerDelegate> appNavigationControllerDelegate;              //@synthesize appNavigationControllerDelegate=_appNavigationControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_activeViewController;
-(id)activeDocument;
-(id)documents;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(void)presentModal:(id)arg1 options:(id)arg2 ;
-(void)dismissModal;
-(void)setAppNavigationControllerDelegate:(id<_TVAppNavigationControllerDelegate>)arg1 ;
-(void)dismissAllModals:(/*^block*/id)arg1 ;
-(void)presentConfirmation:(id)arg1 options:(id)arg2 ;
-(void)_handleMenuAction:(id)arg1 ;
-(id<_TVAppNavigationControllerDelegate>)appNavigationControllerDelegate;
-(id<NSObject>)modalPresenterObserverToken;
-(void)_doWillLoadAppDocumentWithController:(id)arg1 ;
-(void)setModalPresenterObserverToken:(id<NSObject>)arg1 ;
-(UIViewController *)presentedModalViewController;
-(BOOL)_shouldOverrideModalBehaviorForPlaybackDocument:(id)arg1 andExistingPlaybackDocument:(id)arg2 ;
-(void)setPresentedModalViewController:(UIViewController *)arg1 ;
-(BOOL)_shouldIgnoreModalDismissal:(id)arg1 ;
-(void)dismissModal:(BOOL)arg1 ;
-(id)popToRootDocument:(BOOL)arg1 ;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)dismissed;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)clear;
@end

