//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface DataActivationLoadingViewController : UIViewController <UIWebViewDelegate>
{
    id <DataActivationLoadingViewController> _delegate;	// 8 = 0x8
    long long _messageType;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) __weak id <DataActivationLoadingViewController> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100004f3c
- (void)webViewDidFinishLoad:(id)arg1;	// IMP=0x0000000100004d88
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x0000000100004d40
- (void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2;	// IMP=0x0000000100004cfc
- (_Bool)_currentLanguageIsRTL;	// IMP=0x0000000100004c50
- (id)_loadingViewHTML;	// IMP=0x0000000100004a20
- (void)_cancelButtonAction;	// IMP=0x00000001000049ac
- (void)viewDidLoad;	// IMP=0x00000001000048b8
- (void)loadView;	// IMP=0x000000010000472c
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004688
- (id)initWithMessageType:(long long)arg1;	// IMP=0x0000000100004614
- (id)init;	// IMP=0x0000000100004604

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

