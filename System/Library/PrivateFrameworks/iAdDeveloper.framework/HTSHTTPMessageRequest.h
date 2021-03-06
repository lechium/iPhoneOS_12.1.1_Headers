/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <iAdDeveloper/HTSHTTPMessage.h>

@class NSString, NSURL;

@interface HTSHTTPMessageRequest : HTSHTTPMessage {

	NSString* _requestMethod;
	NSURL* _requestURL;

}

@property (nonatomic,copy) NSString * requestMethod;              //@synthesize requestMethod=_requestMethod - In the implementation block
@property (nonatomic,copy) NSURL * requestURL;                    //@synthesize requestURL=_requestURL - In the implementation block
-(id)responseWithStatus:(int)arg1 ;
-(NSString *)requestMethod;
-(NSURL *)requestURL;
-(void)setRequestMethod:(NSString *)arg1 ;
-(void)setRequestURL:(NSURL *)arg1 ;
-(CFHTTPMessageRef)copyMessage;
-(BOOL)responseCanUseGZip;
-(void)dealloc;
-(id)initWithRequest:(CFHTTPMessageRef)arg1 ;
@end

