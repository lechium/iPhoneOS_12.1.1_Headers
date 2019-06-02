/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPStoreLyricsRequest;

@interface MPStoreLyricsRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPStoreLyricsRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPStoreLyricsRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                          //@synthesize responseHandler=_responseHandler - In the implementation block
+(BOOL)supportsLyricsForURLBagDictionary:(id)arg1 ;
+(id)_lyricsURLForURLBagDictionary:(id)arg1 ;
-(void)setRequest:(MPStoreLyricsRequest *)arg1 ;
-(void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 allowingAuthentication:(BOOL)arg3 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
-(MPStoreLyricsRequest *)request;
@end

