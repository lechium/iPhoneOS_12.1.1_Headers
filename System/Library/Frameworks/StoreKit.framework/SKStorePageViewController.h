/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol SKUIServiceStorePageViewController;
@class _UIAsyncInvocation, SKStoreProductViewController, SKRemoteStorePageViewController, SKInvocationQueueProxy, NSString;

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate> {

	_UIAsyncInvocation* _cancelRequest;
	/*^block*/id _loadBlock;
	SKStoreProductViewController* _productPageViewController;
	SKRemoteStorePageViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceStorePageViewController> _serviceProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)_didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_prepareToLoadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_dismissProductPageViewController;
-(void)_didLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)loadPageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadPageWithURLBagKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_showProductPageWithItemIdentifier:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
@end
