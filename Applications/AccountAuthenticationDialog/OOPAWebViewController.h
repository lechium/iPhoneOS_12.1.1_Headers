//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NSURLConnectionDataDelegate.h"
#import "WKNavigationDelegate.h"

@class NSMutableURLRequest, NSString, NSURL, UIBarButtonItem, WKWebView;

@interface OOPAWebViewController : UIViewController <NSURLConnectionDataDelegate, WKNavigationDelegate>
{
    WKWebView *_webView;	// 8 = 0x8
    _Bool _hasAlreadyAppeared;	// 16 = 0x10
    UIBarButtonItem *_backButton;	// 24 = 0x18
    UIBarButtonItem *_forwardButton;	// 32 = 0x20
    NSMutableURLRequest *_urlRequest;	// 40 = 0x28
    struct __CFURLStorageSession *_storageSession;	// 48 = 0x30
    _Bool _hidingWebView;	// 56 = 0x38
    id <OOPAWebViewControllerDelegate> _delegate;	// 64 = 0x40
    NSURL *_authURL;	// 72 = 0x48
    NSString *_navBarTitle;	// 80 = 0x50
    NSString *_username;	// 88 = 0x58
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *navBarTitle; // @synthesize navBarTitle=_navBarTitle;
@property(copy, nonatomic) NSURL *authURL; // @synthesize authURL=_authURL;
@property(nonatomic) __weak id <OOPAWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000043b4
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100004210
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000100004128
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x00000001000040c8
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100003f2c
- (void)_updateNavigationPromptWithActiveURL:(id)arg1;	// IMP=0x0000000100003e7c
- (void)_updateNavigationButtons;	// IMP=0x0000000100003df4
- (void)_forwardButtonTapped:(id)arg1;	// IMP=0x0000000100003dc8
- (void)_backButtonTapped:(id)arg1;	// IMP=0x0000000100003d9c
- (void)_cancelButtonTapped:(id)arg1;	// IMP=0x0000000100003cdc
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100003bcc
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;	// IMP=0x0000000100003898
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x0000000100003660
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;	// IMP=0x0000000100003658
- (void)_loadWebView;	// IMP=0x0000000100003430
- (void)_loadWebViewIfReady;	// IMP=0x00000001000033f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000033a0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100003074
- (id)init;	// IMP=0x0000000100002e00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
