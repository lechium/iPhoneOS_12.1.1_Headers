/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPStoreModelArtistBuilder, MPStoreFollowRecommendationsRequest;

@interface MPStoreFollowRecommendationsOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPStoreModelArtistBuilder* _artistBuilder;
	MPStoreFollowRecommendationsRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPStoreFollowRecommendationsRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                         //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)activeDSID;
-(void)setRequest:(MPStoreFollowRecommendationsRequest *)arg1 ;
-(void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 ;
-(id)_reccomendedArtistsURLFromBag:(id)arg1 accountDSID:(id)arg2 ;
-(id)_followRecommendationsFromPlatformValue:(id)arg1 ;
-(id)_resultsDictionaryFromURLValue:(id)arg1 ;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
-(MPStoreFollowRecommendationsRequest *)request;
@end

