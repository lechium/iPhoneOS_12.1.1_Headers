/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol GEORequestCounterTicket;
@class NSURLSession, NSMutableData, NSURLResponse, NSString;

@interface _GEONSURLSessionWaiter : NSObject <NSURLSessionDataDelegate> {

	NSURLSession* _session;
	/*^block*/id _callback;
	NSMutableData* _data;
	NSURLResponse* _response;
	id<GEORequestCounterTicket> _requestCounterTicket;

}

@property (nonatomic,copy) id callback;                                                     //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<GEORequestCounterTicket> requestCounterTicket;              //@synthesize requestCounterTicket=_requestCounterTicket - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(id)arg1 ;
-(id)callback;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)setRequestCounterTicket:(id<GEORequestCounterTicket>)arg1 ;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
@end

