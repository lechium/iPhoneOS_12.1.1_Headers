/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject {

	float _score;
	WBSHistoryItem* _historyItem;

}

@property (nonatomic,readonly) WBSHistoryItem * historyItem;              //@synthesize historyItem=_historyItem - In the implementation block
@property (nonatomic,readonly) float score;                               //@synthesize score=_score - In the implementation block
-(id)initWithHistoryItem:(id)arg1 score:(float)arg2 ;
-(WBSHistoryItem *)historyItem;
-(float)score;
@end
