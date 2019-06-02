//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SFFormAutoFillControllerDelegate.h"
#import "UINavigationBarDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"
#import "_WKInputDelegate.h"
#import "_WebSheetDownloadDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURL, UIAlertController, UIBarButtonItem, UIImageView, UILabel, UINavigationBar, UINavigationItem, WBUSheetController, WKWebView, WebSheetDownloadManager, WebSheetViewController, WebUIAuthenticationManager, _SFFormAutoFillController;

@interface WebSheetView : UIView <UINavigationBarDelegate, SFFormAutoFillControllerDelegate, _WebSheetDownloadDelegate, WKNavigationDelegate, _WKInputDelegate, WKUIDelegate>
{
    WKWebView *_webView;	// 8 = 0x8
    _SFFormAutoFillController *_autoFillController;	// 16 = 0x10
    UIView *_headerBackgroundView;	// 24 = 0x18
    UINavigationBar *_headerView;	// 32 = 0x20
    UINavigationItem *_navigationItem;	// 40 = 0x28
    UIBarButtonItem *_backButtonItem;	// 48 = 0x30
    UIBarButtonItem *_forwardButtonItem;	// 56 = 0x38
    UIBarButtonItem *_cancelDoneBarButtonItem;	// 64 = 0x40
    UIBarButtonItem *_backForwardButton;	// 72 = 0x48
    UIView *_addressView;	// 80 = 0x50
    UIImageView *_lockIconView;	// 88 = 0x58
    UILabel *_addressLabel;	// 96 = 0x60
    UILabel *_ssidLabel;	// 104 = 0x68
    NSMutableArray *_alerts;	// 112 = 0x70
    WBUSheetController *_sheetController;	// 120 = 0x78
    struct _ProbeContext _probeContext;	// 128 = 0x80
    NSMutableArray *_redirectTypeQueue;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_queue;	// 184 = 0xb8
    unsigned int _currentRedirectURLType;	// 192 = 0xc0
    _Bool _currentRedirectURLTypeSet;	// 196 = 0xc4
    _Bool _firstNavigation;	// 197 = 0xc5
    _Bool _everReceivedUntrustedCertificate;	// 198 = 0xc6
    NSURL *_navigationURLAtStart;	// 200 = 0xc8
    WebUIAuthenticationManager *_authenticationManager;	// 208 = 0xd0
    WebSheetDownloadManager *_downloadManager;	// 216 = 0xd8
    _Bool _inDoneState;	// 224 = 0xe0
    int _springboardPID;	// 228 = 0xe4
    UIAlertController *_stayConnectedAlertController;	// 232 = 0xe8
    NSTimer *_captiveProbeDispatchTimer;	// 240 = 0xf0
    NSMutableArray *_webArchiveFilePaths;	// 248 = 0xf8
    _Bool _shouldShowStayConnectedOptions;	// 256 = 0x100
    _Bool _hasEVCert;	// 257 = 0x101
    _Bool _isCertTrustDone;	// 258 = 0x102
    WebSheetViewController *_webSheetViewController;	// 264 = 0x108
    NSURL *_currentURL;	// 272 = 0x110
    NSURL *_probeURL;	// 280 = 0x118
    NSDictionary *_proxyConfiguration;	// 288 = 0x120
    NSMutableDictionary *_resultOptions;	// 296 = 0x128
}

@property(nonatomic) _Bool isCertTrustDone; // @synthesize isCertTrustDone=_isCertTrustDone;
@property(nonatomic) _Bool hasEVCert; // @synthesize hasEVCert=_hasEVCert;
@property(retain, nonatomic) NSMutableDictionary *resultOptions; // @synthesize resultOptions=_resultOptions;
@property(copy, nonatomic) NSDictionary *proxyConfiguration; // @synthesize proxyConfiguration=_proxyConfiguration;
@property(nonatomic) _Bool shouldShowStayConnectedOptions; // @synthesize shouldShowStayConnectedOptions=_shouldShowStayConnectedOptions;
@property(copy, nonatomic) NSURL *probeURL; // @synthesize probeURL=_probeURL;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WebSheetViewController *webSheetViewController; // @synthesize webSheetViewController=_webSheetViewController;
- (void)_startCaptiveProbeDispatchTimer;	// IMP=0x0000000100007dbc
- (void)_stopCaptiveProbeDispatchTimer;	// IMP=0x0000000100007d74
- (void)_captiveProbeDispatchTimerDidFire:(id)arg1;	// IMP=0x0000000100007d3c
- (id)formAutoFillControllerURLForFormAutoFill:(id)arg1;	// IMP=0x0000000100007d24
- (_Bool)formAutoFillControllerShouldDisableStreamlinedLogin:(id)arg1;	// IMP=0x0000000100007d1c
- (_Bool)formAutoFillControllerCanPrefillForm:(id)arg1;	// IMP=0x0000000100007d14
- (void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;	// IMP=0x0000000100007cf8
- (void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;	// IMP=0x0000000100007ce0
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;	// IMP=0x0000000100007cc8
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;	// IMP=0x0000000100007cb0
- (void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007b3c
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;	// IMP=0x0000000100007b20
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000100007904
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x0000000100007870
- (void)updateRedirectURLTypeSetting;	// IMP=0x0000000100007704
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007340
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007210
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000069b8
- (_Bool)isUserAprroved:(id)arg1;	// IMP=0x00000001000068f4
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x0000000100006798
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x00000001000064dc
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100006220
- (id)_presentingViewControllerForWebView:(id)arg1;	// IMP=0x0000000100006210
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;	// IMP=0x00000001000061cc
- (id)sheetController:(id)arg1 viewControllerForAlert:(id)arg2;	// IMP=0x00000001000061a0
- (void)sheetController:(id)arg1 performAction:(int)arg2 forAlert:(id)arg3;	// IMP=0x0000000100006108
- (void)_continueAfterCertificateAlertWithContext:(id)arg1;	// IMP=0x0000000100005fa8
- (void)_loadRequest:(id)arg1 inFrame:(id)arg2;	// IMP=0x0000000100005ed4
- (void)sheetControllerDidHideSheet:(id)arg1;	// IMP=0x0000000100005ed0
- (void)sheetControllerDidShowSheet:(id)arg1;	// IMP=0x0000000100005ecc
- (void)downloadDidFail:(id)arg1;	// IMP=0x0000000100005ec0
- (void)downloadDidFinish:(id)arg1;	// IMP=0x0000000100005d68
- (void)_showProfileInstallAlert;	// IMP=0x0000000100005cc0
- (void)cancelFromAuthenticationManager:(id)arg1 forChallenge:(id)arg2;	// IMP=0x0000000100005c84
- (void)logInFromAuthenticationManager:(id)arg1 withCredential:(id)arg2 forChallenge:(id)arg3;	// IMP=0x0000000100005c40
- (void)_showGenericDownloadAlert;	// IMP=0x0000000100005b98
- (void)_showProfileDownloadAlert;	// IMP=0x0000000100005af0
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x00000001000058f4
- (id)_titleForError:(id)arg1;	// IMP=0x000000010000588c
- (id)_specializedMessageForError:(id)arg1;	// IMP=0x0000000100005520
- (_Bool)_handleCertificateError:(struct __SecTrust *)arg1 newhost:(id)arg2;	// IMP=0x000000010000550c
- (void)_precheckTrustForServerCertificate:(struct __SecTrust *)arg1 host:(id)arg2;	// IMP=0x0000000100005410
- (_Bool)isGreenTea;	// IMP=0x0000000100005340
- (void)addAlert:(id)arg1;	// IMP=0x000000010000525c
- (id)_sheetController;	// IMP=0x0000000100005208
- (void)dismissWebSheetWithCaptiveWebSheetResult:(int)arg1;	// IMP=0x000000010000516c
- (void)dumpWebarchive;	// IMP=0x0000000100004de0
- (void)getAprrovalForWebArchival:(int)arg1;	// IMP=0x0000000100004c40
- (void)reportWebArchiveCase;	// IMP=0x00000001000049ec
- (void)removeUserDeniedArchiveFiles;	// IMP=0x0000000100004894
- (void)removeOldArchiveFiles;	// IMP=0x00000001000046a8
- (_Bool)checkAndCreateArchiveDirectory;	// IMP=0x00000001000045fc
- (_Bool)isAppleInternal;	// IMP=0x0000000100004598
- (void)doneTapped;	// IMP=0x0000000100004588
- (void)cancelTapped;	// IMP=0x00000001000040f0
- (void)_forwardButtonPressed;	// IMP=0x00000001000040d8
- (void)_backButtonPressed;	// IMP=0x00000001000040c0
- (void)_updateBackForwardButtons;	// IMP=0x0000000100004038
- (double)_promptLabelFontLineHeight;	// IMP=0x0000000100004010
- (id)_promptLabelFont;	// IMP=0x0000000100003ff8
- (_Bool)_shouldShowPromptLabels;	// IMP=0x0000000100003f94
- (_Bool)_isSecureAddress;	// IMP=0x0000000100003f50
- (void)_updateAddress;	// IMP=0x0000000100003f44
- (void)_addAndRemoveAddressViewsAsNeeded;	// IMP=0x0000000100003e40
- (id)_evCertLockIconImage;	// IMP=0x0000000100003cfc
- (id)_evCertColor;	// IMP=0x0000000100003c98
- (id)_lockIconImage;	// IMP=0x0000000100003c48
- (id)_lockIconImageWithTintColor:(id)arg1;	// IMP=0x0000000100003c04
- (void)dealloc;	// IMP=0x00000001000038d4
- (void)layoutSubviews;	// IMP=0x00000001000033c8
- (void)safeAreaInsetsDidChange;	// IMP=0x00000001000033bc
- (void)_updateTitle;	// IMP=0x000000010000330c
- (void)setSSID:(struct __CFString *)arg1;	// IMP=0x0000000100003280
- (void)setCaptiveNetworkCookie:(unsigned int)arg1;	// IMP=0x000000010000326c
- (void)setWebViewWithInterfaceName:(struct __CFString *)arg1;	// IMP=0x0000000100002ed0
- (void)updateToDoneButton;	// IMP=0x0000000100002e48
- (void)updateResultOptions;	// IMP=0x0000000100002ca0
- (void)pushBackToRedirectTypeQueue;	// IMP=0x0000000100002b9c
- (void)dequeueRedirectTypeQueue;	// IMP=0x0000000100002ac4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000025dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

