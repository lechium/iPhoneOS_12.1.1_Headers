/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFSharingExtensionWebProcessController;
@class WKWebView;

@interface _SFSafariSharingExtensionController : NSObject {

	WKWebView* _webView;
	id<SFSharingExtensionWebProcessController> _extensionControllerProxy;

}
-(id)initWithWebView:(id)arg1 ;
-(void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2 ;
-(void)runJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2 ;
-(id)_extensionControllerProxy;
@end
