/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKHTTPCookieStore : NSObject <WKObject> {

	ObjectStorage<API::HTTPCookieStore> _cookieStore;
	HashMap<id<WKHTTPCookieStoreObserver>, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> >, WTF::PtrHash<id<WKHTTPCookieStoreObserver> >, WTF::HashTraits<id<WKHTTPCookieStoreObserver> >, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > >* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Object*)_apiObject;
-(void)getAllCookies:(/*^block*/id)arg1 ;
-(void)setCookie:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCookie:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

