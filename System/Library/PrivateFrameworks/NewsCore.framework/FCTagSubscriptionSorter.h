/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCTagRanking;
@interface FCTagSubscriptionSorter : NSObject {

	id<FCTagRanking> _tagRanker;

}

@property (nonatomic,readonly) id<FCTagRanking> tagRanker;              //@synthesize tagRanker=_tagRanker - In the implementation block
-(id)initWithTagRanker:(id)arg1 ;
-(id)sortTagSubscriptions:(id)arg1 ;
-(id<FCTagRanking>)tagRanker;
@end

