/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@interface MPModelForYouRecommendationsRequestOperation : MPStoreModelRequestOperation
-(id)_missingContentIdentifiersInRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2 ;
-(void)_produceResponseWithRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2 ;
-(id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2 ;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

