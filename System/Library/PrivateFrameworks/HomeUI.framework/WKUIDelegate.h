/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKUIDelegate <NSObject>
@optional
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
-(void)webViewDidClose:(id)arg1;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(BOOL)webView:(id)arg1 shouldPreviewElement:(id)arg2;
-(id)webView:(id)arg1 previewingViewControllerForElement:(id)arg2 defaultActions:(id)arg3;
-(void)webView:(id)arg1 commitPreviewingViewController:(id)arg2;

@end

