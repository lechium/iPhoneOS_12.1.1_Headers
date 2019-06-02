/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSDictionary, NSMutableArray, NSArray, NSURL, NSString, NSMutableDictionary;

@interface SKUIReviewList : NSObject <SKUICacheCoding> {

	NSDictionary* _dictionary;
	NSMutableArray* _reviews;

}

@property (nonatomic,readonly) NSArray * reviews;                                      //@synthesize reviews=_reviews - In the implementation block
@property (nonatomic,readonly) long long numberOfPages; 
@property (nonatomic,readonly) long long ratingCount; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) long long fiveStarRatingCount; 
@property (nonatomic,readonly) long long fourStarRatingCount; 
@property (nonatomic,readonly) long long oneStarRatingCount; 
@property (nonatomic,readonly) long long threeStarRatingCount; 
@property (nonatomic,readonly) long long twoStarRatingCount; 
@property (nonatomic,readonly) NSURL * writeReviewURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(NSArray *)reviews;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(float)userRating;
-(NSURL *)writeReviewURL;
-(id)initWithReviewListDictionary:(id)arg1 ;
-(void)addReviews:(id)arg1 ;
-(long long)fiveStarRatingCount;
-(long long)fourStarRatingCount;
-(long long)oneStarRatingCount;
-(long long)ratingCount;
-(long long)threeStarRatingCount;
-(long long)twoStarRatingCount;
-(long long)numberOfPages;
@end

