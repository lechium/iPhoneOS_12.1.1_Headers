/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol SKUIServiceComposeReviewViewController, SKComposeReviewDelegate;
@class _UIAsyncInvocation, NSURL, SKRemoteComposeReviewViewController, SKInvocationQueueProxy;

@interface SKComposeReviewViewController : UIViewController {

	_UIAsyncInvocation* _cancelRequest;
	NSURL* _compositionURL;
	/*^block*/id _prepareBlock;
	SKRemoteComposeReviewViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceComposeReviewViewController> _serviceProxy;
	id<SKComposeReviewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKComposeReviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_didFinishWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_tearDownAfterError:(id)arg1 ;
-(id)initWithCompositionURL:(id)arg1 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SKComposeReviewDelegate>)arg1 ;
-(id<SKComposeReviewDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

