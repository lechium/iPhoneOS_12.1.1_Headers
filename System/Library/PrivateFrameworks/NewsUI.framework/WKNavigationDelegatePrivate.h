/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKNavigationDelegatePrivate <WKNavigationDelegate>
@optional
-(void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;
-(void)_webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3;
-(void)_webViewDidCancelClientRedirect:(id)arg1;
-(void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
-(void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
-(BOOL)_webView:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)_webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)_webViewWebProcessDidCrash:(id)arg1;
-(void)_webViewWebProcessDidBecomeResponsive:(id)arg1;
-(void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1;
-(id)_webCryptoMasterKeyForWebView:(id)arg1;
-(void)_webViewDidBeginNavigationGesture:(id)arg1;
-(void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)_webViewWillEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)_webView:(id)arg1 willSnapshotBackForwardListItem:(id)arg2;
-(void)_webViewDidRemoveNavigationGestureSnapshot:(id)arg1;
-(void)_webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)_webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 userInfo:(id)arg3 decisionHandler:(/*^block*/id)arg4;
-(void)_webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 userInfo:(id)arg3;
-(void)_webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 userInfo:(id)arg4;
-(void)_webView:(id)arg1 URL:(id)arg2 contentRuleListIdentifiers:(id)arg3 notifications:(id)arg4;
-(void)_webView:(id)arg1 webContentProcessDidTerminateWithReason:(long long)arg2;
-(void)_webView:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3;
-(void)_webView:(id)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg2;
-(void)_webViewDidRequestPasswordForQuickLookDocument:(id)arg1;

@end

