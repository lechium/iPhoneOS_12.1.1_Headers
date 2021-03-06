/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLComponents, NSXPCConnection;

@interface _LSAppLinkPlugIn : NSObject {

	NSURLComponents* _URLComponents;
	unsigned long long _limit;
	NSXPCConnection* _XPCConnection;

}

@property (retain) NSURLComponents * URLComponents;              //@synthesize URLComponents=_URLComponents - In the implementation block
@property (assign) unsigned long long limit;                     //@synthesize limit=_limit - In the implementation block
@property (retain) NSXPCConnection * XPCConnection;              //@synthesize XPCConnection=_XPCConnection - In the implementation block
+(Class)plugInClasses;
+(BOOL)canHandleURLComponents:(id)arg1 ;
-(NSURLComponents *)URLComponents;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(NSXPCConnection *)XPCConnection;
-(void)setURLComponents:(NSURLComponents *)arg1 ;
-(void)setXPCConnection:(NSXPCConnection *)arg1 ;
-(void)getAppLinksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

