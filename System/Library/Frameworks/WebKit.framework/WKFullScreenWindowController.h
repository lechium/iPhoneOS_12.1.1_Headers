/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class WKWebView, UIView, NSString;

@interface WKFullScreenWindowController : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {

	RetainPtr<WKFullScreenPlaceholderView>* _webViewPlaceholder;
	long long _fullScreenState;
	WKWebViewState _viewState;
	RetainPtr<UIWindow>* _window;
	RetainPtr<UIViewController>* _rootViewController;
	RefPtr<WebKit::GenericCallback<>, WTF::DumbPtrTraits<WebKit::GenericCallback<> > >* _repaintCallback;
	RetainPtr<UIViewController>* _viewControllerForPresentation;
	RetainPtr<WKFullScreenViewController>* _fullscreenViewController;
	RetainPtr<UISwipeGestureRecognizer>* _startDismissGestureRecognizer;
	RetainPtr<UIPanGestureRecognizer>* _interactivePanDismissGestureRecognizer;
	RetainPtr<UIPinchGestureRecognizer>* _interactivePinchDismissGestureRecognizer;
	RetainPtr<WKFullScreenInteractiveTransition>* _interactiveDismissTransitionCoordinator;
	CGRect _initialFrame;
	CGRect _finalFrame;
	RetainPtr<NSString>* _EVOrganizationName;
	BOOL _EVOrganizationNameIsValid;
	BOOL _inInteractiveDismiss;
	RetainPtr<id>* _notificationListener;
	WKWebView* __webView;

}

@property (assign,nonatomic,__weak) WKWebView * _webView;                       //@synthesize _webView=__webView - In the implementation block
@property (nonatomic,retain,readonly) UIView * webViewPlaceholder; 
@property (nonatomic,readonly) BOOL isFullScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enterFullScreen;
-(void)exitFullScreen;
-(void)beganEnterFullScreenWithInitialFrame:(CGRect)arg1 finalFrame:(CGRect)arg2 ;
-(void)beganExitFullScreenWithInitialFrame:(CGRect)arg1 finalFrame:(CGRect)arg2 ;
-(void)set_webView:(WKWebView *)arg1 ;
-(WebFullScreenManagerProxy*)_manager;
-(void)videoControlsManagerDidChange;
-(void)placeholderWillMoveToSuperview:(id)arg1 ;
-(void)requestExitFullScreen;
-(void)_updateLocationInfo;
-(void)_startToDismissFullscreenChanged:(id)arg1 ;
-(void)_interactiveDismissChanged:(id)arg1 ;
-(void)_interactivePinchDismissChanged:(id)arg1 ;
-(void)_exitFullscreenImmediately;
-(void)_dismissFullscreenViewController;
-(void)_completedExitFullScreen;
-(UIView *)webViewPlaceholder;
-(void)webViewDidRemoveFromSuperviewWhileInFullscreen;
-(id)initWithWebView:(id)arg1 ;
-(SecTrustRef)_serverTrust;
-(void)_invalidateEVOrganizationName;
-(id)_EVOrganizationName;
-(WKWebView *)_webView;
-(BOOL)isFullScreen;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)close;
-(BOOL)_isSecure;
@end
