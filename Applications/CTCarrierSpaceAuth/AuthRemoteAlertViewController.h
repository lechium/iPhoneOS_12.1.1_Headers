//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIRemoteAlertServiceViewController.h"

#import "RemoteUIControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AuthCodeHttpRequest, AuthViewController, CTCarrierSpaceClient, NSDictionary, NSString, RemoteUIController;

@interface AuthRemoteAlertViewController : SBUIRemoteAlertServiceViewController <UINavigationControllerDelegate, RemoteUIControllerDelegate>
{
    AuthViewController *_authViewController;	// 8 = 0x8
    RemoteUIController *_remoteUIController;	// 16 = 0x10
    NSDictionary *_launchContext;	// 24 = 0x18
    NSString *_clientID;	// 32 = 0x20
    CTCarrierSpaceClient *_client;	// 40 = 0x28
    AuthCodeHttpRequest *_authCodeRequest;	// 48 = 0x30
    NSDictionary *_authState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100007dbc
- (void)handleButtonActions:(id)arg1;	// IMP=0x0000000100007b84
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;	// IMP=0x0000000100007af4
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;	// IMP=0x00000001000079a8
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;	// IMP=0x0000000100007860
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;	// IMP=0x0000000100007740
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x0000000100007738
- (void)handleAppURL:(id)arg1;	// IMP=0x00000001000071bc
- (_Bool)_validateRedirectURL:(id)arg1 withExpectedURL:(id)arg2;	// IMP=0x0000000100006de4
- (void)_exchangeAuthCode:(id)arg1;	// IMP=0x0000000100006aa8
- (void)_handleTokenResponse:(id)arg1;	// IMP=0x0000000100006600
- (void)_evaluateBiometry:(CDUnknownBlockType)arg1;	// IMP=0x00000001000063b4
- (id)_itemWithName:(id)arg1 items:(id)arg2;	// IMP=0x0000000100006240
- (void)_presentAlertController:(long long)arg1;	// IMP=0x0000000100006038
- (void)_sendAuthFailure:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005fa4
- (void)_sendAuthInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005f4c
- (void)viewDidLoad;	// IMP=0x0000000100005d44
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100005cf4
- (id)_getURLFromContextForKey:(id)arg1;	// IMP=0x0000000100005c90
- (id)_getValueFromContextForKey:(id)arg1;	// IMP=0x0000000100005c78
- (void)_deactivate;	// IMP=0x0000000100005a3c
- (void)_configure;	// IMP=0x0000000100005920
- (void)_loadRemoteUIController;	// IMP=0x00000001000056b0
- (id)_getNSURLSessionConfiguration;	// IMP=0x00000001000055c8
- (_Bool)_loadAuthUrl;	// IMP=0x00000001000053c8
- (id)_decodeBase64Dictionary:(id)arg1;	// IMP=0x00000001000052f8
- (id)_base64EncodedDictionary:(id)arg1;	// IMP=0x0000000100005264
- (id)_generateStateDict;	// IMP=0x00000001000050f8
- (void)_addOptionalParametersForAuthCodeRequest:(id)arg1;	// IMP=0x0000000100005034
- (_Bool)_loadPlanTermsUrl;	// IMP=0x0000000100004c40
- (void)_loadURL:(id)arg1;	// IMP=0x0000000100004ae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

