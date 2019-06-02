//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DataActivationLoadingViewController.h"
#import "SFFormAutoFillControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"
#import "_WKInputDelegate.h"

@class DataActivationLoadingViewController, NSString, UIActivityIndicatorView, UIBarButtonItem, UIView, WKProcessPool, WKWebView, _SFFormAutoFillController;

@interface DataActivationWebViewController : UIViewController <DataActivationLoadingViewController, WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, SFFormAutoFillControllerDelegate, _WKInputDelegate, UIScrollViewDelegate>
{
    DataActivationLoadingViewController *_loadingViewController;	// 8 = 0x8
    WKProcessPool *_processPool;	// 16 = 0x10
    WKWebView *_webView;	// 24 = 0x18
    _SFFormAutoFillController *_autoFillController;	// 32 = 0x20
    UIView *_contentView;	// 40 = 0x28
    UIBarButtonItem *_cancelButton;	// 48 = 0x30
    UIActivityIndicatorView *_headerActivityIndicator;	// 56 = 0x38
    _Bool _headerActivityIndicatorVisible;	// 64 = 0x40
    _Bool _loadingViewDidSwapOut;	// 65 = 0x41
    _Bool _didFinishDocumentLoad;	// 66 = 0x42
    _Bool _didFirstLayout;	// 67 = 0x43
    id <DataActivationWebViewControllerDelegate> _delegate;	// 72 = 0x48
}

@property(nonatomic) __weak id <DataActivationWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010000ee8c
- (id)formAutoFillControllerURLForFormAutoFill:(id)arg1;	// IMP=0x000000010000ee40
- (_Bool)formAutoFillControllerShouldDisableAutoFill:(id)arg1;	// IMP=0x000000010000ee38
- (_Bool)formAutoFillControllerCanPrefillForm:(id)arg1;	// IMP=0x000000010000ee08
- (void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;	// IMP=0x000000010000edc0
- (void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;	// IMP=0x000000010000eda8
- (void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ed34
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;	// IMP=0x000000010000ed18
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;	// IMP=0x000000010000ece8
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;	// IMP=0x000000010000ecc0
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x000000010000eca4
- (_Bool)_webView:(id)arg1 showCustomSheetForElement:(id)arg2;	// IMP=0x000000010000ec9c
- (id)_presentingViewControllerForWebView:(id)arg1;	// IMP=0x000000010000ec98
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;	// IMP=0x000000010000e364
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000010000e1f8
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000010000e08c
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x000000010000e058
- (void)dataActivationLoadingViewControllerDidCancel;	// IMP=0x000000010000e014
- (void)dataActivationLoadingViewControllerDidLoad:(id)arg1;	// IMP=0x000000010000df44
- (_Bool)_shouldIgnoreWebviewError:(id)arg1;	// IMP=0x000000010000de80
- (void)_unpinInputViews;	// IMP=0x000000010000de40
- (void)_hideVerifyingIndicator;	// IMP=0x000000010000de30
- (void)_showVerifyingIndicator;	// IMP=0x000000010000de20
- (void)_setAccountUpdatedSuccessfull;	// IMP=0x000000010000dddc
- (void)_hideCancelButton;	// IMP=0x000000010000ddc8
- (void)_showCancelButton;	// IMP=0x000000010000ddb4
- (void)_done;	// IMP=0x000000010000dd70
- (void)_dumpWebarchive;	// IMP=0x000000010000db08
- (void)swapOutLoadingView;	// IMP=0x000000010000d9c4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000d928
- (void)stopLoading;	// IMP=0x000000010000d84c
- (void)_showLoadingView;	// IMP=0x000000010000d788
- (void)setHeaderShowsVerifyingIndicator:(_Bool)arg1;	// IMP=0x000000010000d400
- (void)_setCancelButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000d328
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) WKWebView *webView;
- (void)loadRequest:(id)arg1;	// IMP=0x000000010000d230
- (void)loadData:(id)arg1;	// IMP=0x000000010000d134
- (void)loadView;	// IMP=0x000000010000c77c
- (id)_processPool;	// IMP=0x000000010000c444
- (void)dealloc;	// IMP=0x000000010000c3cc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000c328

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
