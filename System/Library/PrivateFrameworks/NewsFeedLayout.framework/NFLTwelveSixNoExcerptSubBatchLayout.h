/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout, NFLPairSubBatchLayout;

@interface NFLTwelveSixNoExcerptSubBatchLayout : NFLSubBatchLayout {

	NFLSingleComponentLayout* _largeComponent;
	NFLPairSubBatchLayout* _topPairComponent;
	NFLPairSubBatchLayout* _bottomPairComponent;
	NFLSingleComponentLayout* _bottomComponent;

}

@property (nonatomic,retain) NFLSingleComponentLayout * largeComponent;                //@synthesize largeComponent=_largeComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * topPairComponent;                 //@synthesize topPairComponent=_topPairComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * bottomPairComponent;              //@synthesize bottomPairComponent=_bottomPairComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * bottomComponent;               //@synthesize bottomComponent=_bottomComponent - In the implementation block
-(double)rank;
-(id)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(void)setLargeComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setBottomComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setTopPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setBottomPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(NFLPairSubBatchLayout *)topPairComponent;
-(NFLSingleComponentLayout *)largeComponent;
-(NFLPairSubBatchLayout *)bottomPairComponent;
-(NFLSingleComponentLayout *)bottomComponent;
-(unsigned long long)rowSpan;
-(BOOL)isValid;
@end

