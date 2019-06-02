//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"
#import "UIWebViewPrivateDelegate.h"

@class NSString, PRRequest, UILabel, UIView, UIWebView;

@interface AUStorePreviewWebViewController : UIViewController <UIWebViewDelegate, UIWebViewPrivateDelegate>
{
    PRRequest *_request;	// 8 = 0x8
    NSString *_requestString;	// 16 = 0x10
    id <AUStorePreviewWebViewDelegate> _delegate;	// 24 = 0x18
    UIWebView *_webView;	// 32 = 0x20
    UIView *_bannerView;	// 40 = 0x28
    UILabel *_bannerLabel;	// 48 = 0x30
}

@property UILabel *bannerLabel; // @synthesize bannerLabel=_bannerLabel;
@property UIView *bannerView; // @synthesize bannerView=_bannerView;
@property UIWebView *webView; // @synthesize webView=_webView;
@property(readonly) id <AUStorePreviewWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *requestString; // @synthesize requestString=_requestString;
@property(readonly) PRRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;	// IMP=0x0000000100004db0
- (void)declineTapped:(id)arg1;	// IMP=0x0000000100004cb0
- (void)approveTapped:(id)arg1;	// IMP=0x0000000100004c40
- (id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;	// IMP=0x0000000100004bbc
- (void)webViewDidFinishLoad:(id)arg1;	// IMP=0x0000000100004bb8
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x0000000100004bb4
- (void)viewDidLoad;	// IMP=0x0000000100004850
- (void)loadPreview;	// IMP=0x00000001000047b8
- (id)initWithRequest:(id)arg1 requestString:(id)arg2 delegate:(id)arg3;	// IMP=0x00000001000046b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
