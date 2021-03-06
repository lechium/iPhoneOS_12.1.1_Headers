/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLProtocolClient;
@class NSURLRequest, NSCachedURLResponse, NSLock;

@interface NSURLProtocolInternal : NSObject {

	id<NSURLProtocolClient> client;
	NSURLRequest* request;
	NSCachedURLResponse* cachedResponse;
	NSLock* mutex;

}
-(id)init;
-(void)dealloc;
@end

