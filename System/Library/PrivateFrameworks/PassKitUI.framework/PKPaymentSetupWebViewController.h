/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSURL, NSString;

@interface PKPaymentSetupWebViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	NSURL* _URL;
	long long _context;

}

@property (assign,nonatomic) long long context;                     //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleDone:(id)arg1 ;
-(void)_webViewDidLoad:(BOOL)arg1 withError:(id)arg2 ;
-(id)initWithURL:(id)arg1 context:(long long)arg2 ;
-(void)setContext:(long long)arg1 ;
-(long long)context;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)webView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end
