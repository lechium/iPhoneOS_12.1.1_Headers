/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCSolTagID, NSSet, FCHeadlineClusteringRules, NSMutableSet;

@interface FCSolArticleGroup : NSObject {

	FCSolTagID* _tagId;
	NSSet* _articles;
	double _personalizationScore;
	FCHeadlineClusteringRules* _rules;
	NSMutableSet* _topArticles;
	NSMutableSet* _orphans;
	double _score;
	double _heuristicScore;

}

@property (assign,nonatomic) double heuristicScore;                          //@synthesize heuristicScore=_heuristicScore - In the implementation block
@property (nonatomic,retain) FCSolTagID * tagId;                             //@synthesize tagId=_tagId - In the implementation block
@property (nonatomic,retain) NSSet * articles;                               //@synthesize articles=_articles - In the implementation block
@property (assign,nonatomic) double personalizationScore;                    //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (nonatomic,retain) FCHeadlineClusteringRules * rules;              //@synthesize rules=_rules - In the implementation block
@property (nonatomic,readonly) NSMutableSet * topArticles;                   //@synthesize topArticles=_topArticles - In the implementation block
@property (nonatomic,readonly) NSMutableSet * orphans;                       //@synthesize orphans=_orphans - In the implementation block
@property (nonatomic,readonly) double score;                                 //@synthesize score=_score - In the implementation block
+(id)predictBestGroup:(id)arg1 ungroupedArticles:(id)arg2 ungroupedTags:(id)arg3 articlesByTag:(id)arg4 heuristic:(id)arg5 autoFavoriteHeuristic:(id)arg6 ;
-(double)score;
-(NSMutableSet *)topArticles;
-(FCSolTagID *)tagId;
-(NSSet *)articles;
-(void)setPersonalizationScore:(double)arg1 ;
-(id)initWithTagId:(id)arg1 personalizationScore:(double)arg2 articles:(id)arg3 rules:(id)arg4 ;
-(void)setArticles:(NSSet *)arg1 ;
-(void)setRules:(FCHeadlineClusteringRules *)arg1 ;
-(double)personalizationScore;
-(void)computeTopArticlesAndScore;
-(void)setHeuristicScore:(double)arg1 ;
-(double)heuristicScore;
-(void)setTagId:(FCSolTagID *)arg1 ;
-(NSMutableSet *)orphans;
-(FCHeadlineClusteringRules *)rules;
@end
