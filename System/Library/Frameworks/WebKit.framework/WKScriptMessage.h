/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKWebView, WKFrameInfo, NSString;

@interface WKScriptMessage : NSObject {

	RetainPtr<id>* _body;
	WeakObjCPtr<WKWebView> _webView;
	RetainPtr<WKFrameInfo>* _frameInfo;
	RetainPtr<NSString>* _name;

}

@property (nonatomic,copy,readonly) id body; 
@property (nonatomic,__weak,readonly) WKWebView * webView; 
@property (nonatomic,copy,readonly) WKFrameInfo * frameInfo; 
@property (nonatomic,copy,readonly) NSString * name; 
-(id)_initWithBody:(id)arg1 webView:(id)arg2 frameInfo:(id)arg3 name:(id)arg4 ;
-(WKFrameInfo *)frameInfo;
-(NSString *)name;
-(id)body;
-(WKWebView *)webView;
@end
