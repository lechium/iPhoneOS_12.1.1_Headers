/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMediaComponentView.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@protocol SXComponentActionHandler;
@class WKWebView, SXWebCrashRetryThrottler, NSString;

@interface SXEmbedVideoComponentView : SXMediaComponentView <WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegate, SXViewportChangeListener> {

	BOOL _webViewIsLoaded;
	BOOL _isPresentingFullscreen;
	id<SXComponentActionHandler> _actionHandler;
	WKWebView* _webView;
	SXWebCrashRetryThrottler* _webCrashRetryThrottler;

}

@property (nonatomic,readonly) id<SXComponentActionHandler> actionHandler;                   //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                                            //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) SXWebCrashRetryThrottler * webCrashRetryThrottler;              //@synthesize webCrashRetryThrottler=_webCrashRetryThrottler - In the implementation block
@property (assign,nonatomic) BOOL webViewIsLoaded;                                           //@synthesize webViewIsLoaded=_webViewIsLoaded - In the implementation block
@property (assign,nonatomic) BOOL isPresentingFullscreen;                                    //@synthesize isPresentingFullscreen=_isPresentingFullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConfiguration;
-(void)handleError:(id)arg1 ;
-(void)_webViewDidEnterFullscreen:(id)arg1 ;
-(void)_webViewDidExitFullscreen:(id)arg1 ;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)presentComponentWithChanges:(SCD_Struct_SX14)arg1 ;
-(BOOL)allowHierarchyRemoval;
-(unsigned long long)analyticsMediaType;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
-(CGRect)transitionContentFrame;
-(id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 actionHandler:(id)arg7 ;
-(unsigned long long)analyticsVideoType;
-(SXWebCrashRetryThrottler *)webCrashRetryThrottler;
-(BOOL)shouldAllowRequestToURL:(id)arg1 ;
-(void)setWebCrashRetryThrottler:(SXWebCrashRetryThrottler *)arg1 ;
-(BOOL)webViewIsLoaded;
-(void)updateWebViewToWidth:(double)arg1 ;
-(void)initializeWebViewWithURL:(id)arg1 ;
-(void)setWebViewIsLoaded:(BOOL)arg1 ;
-(void)setIsPresentingFullscreen:(BOOL)arg1 ;
-(BOOL)isPresentingFullscreen;
-(id<SXComponentActionHandler>)actionHandler;
-(WKWebView *)webView;
-(CGRect)visibleFrame;
-(void)setWebView:(WKWebView *)arg1 ;
@end

