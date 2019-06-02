/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, NSURLResponse, NSData, NSURL, NSDate;

@interface ICURLResponse : NSObject {

	long long _parsedBodyResponseType;
	id _parsedBodyResponse;
	NSURLRequest* _urlRequest;
	NSURLResponse* _urlResponse;
	NSData* _bodyData;
	NSURL* _bodyDataURL;

}

@property (nonatomic,readonly) NSURLRequest * urlRequest;                //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,readonly) NSURLResponse * urlResponse;              //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) NSData * bodyData;                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) NSURL * bodyDataURL;                      //@synthesize bodyDataURL=_bodyDataURL - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate; 
-(NSData *)bodyData;
-(NSURLRequest *)urlRequest;
-(id)parsedBodyDictionary;
-(NSURL *)bodyDataURL;
-(id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyData:(id)arg3 ;
-(id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyDataURL:(id)arg3 ;
-(id)parsedBodyArray;
-(void)_prepareParsedBodyResponse;
-(NSURLResponse *)urlResponse;
-(id)parsedBody;
-(NSDate *)expirationDate;
@end

