/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKObservablePageState.h>

@class NSString, NSURL;

@interface WKObservablePageState : NSObject <_WKObservablePageState> {

	RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> >* _page;
	unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver> >* _observer;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) double estimatedProgress; 
@property (nonatomic,readonly) BOOL hasOnlySecureContent; 
@property (nonatomic,readonly) BOOL _webProcessIsResponsive; 
@property (nonatomic,readonly) NSURL * unreachableURL; 
@property (nonatomic,readonly) SecTrustRef serverTrust; 
-(BOOL)_webProcessIsResponsive;
-(BOOL)hasOnlySecureContent;
-(SecTrustRef)serverTrust;
-(void)dealloc;
-(NSString *)title;
-(NSURL *)URL;
-(id)initWithPage:(RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> >*)arg1 ;
-(BOOL)isLoading;
-(NSURL *)unreachableURL;
-(double)estimatedProgress;
@end

