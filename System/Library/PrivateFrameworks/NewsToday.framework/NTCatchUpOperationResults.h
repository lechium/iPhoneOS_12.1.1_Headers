/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, SFRankingFeedback, NSObject;

@interface NTCatchUpOperationResults : NSObject <NSCopying> {

	NSArray* _items;
	SFRankingFeedback* _rankingFeedback;
	NSObject* _supplementalInterestToken;

}

@property (nonatomic,readonly) NSObject * supplementalInterestToken;                  //@synthesize supplementalInterestToken=_supplementalInterestToken - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) SFRankingFeedback * rankingFeedback;              //@synthesize rankingFeedback=_rankingFeedback - In the implementation block
-(SFRankingFeedback *)rankingFeedback;
-(id)initWithItems:(id)arg1 rankingFeedback:(id)arg2 supplementalInterestToken:(id)arg3 ;
-(NSObject *)supplementalInterestToken;
-(id)initWithHeadlines:(id)arg1 rankingFeedback:(id)arg2 ;
-(id)initWithFeedItems:(id)arg1 supplementalInterestToken:(id)arg2 ;
-(id)resultsByCombiningWithResults:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(id)copyWithItems:(id)arg1 ;
@end

