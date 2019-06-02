/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol NFLFeedLayoutSearchConfiguration, NFLFontManager;
@class NSArray, NFLFeedSettings, NFLBatchContext;

@interface NFLFeedLayoutOperation : FCOperation {

	/*^block*/id _layoutCompletion;
	NSArray* _tileInfos;
	NFLFeedSettings* _feedSettings;
	id<NFLFeedLayoutSearchConfiguration> _feedLayoutSearchConfiguration;
	id<NFLFontManager> _fontManager;
	double _tileProminenceScoreBalanceValue;
	NFLBatchContext* _previousBatchContext;
	NFLBatchContext* _nextBatchContext;
	NSArray* _result;

}

@property (nonatomic,copy) NSArray * tileInfos;                                                             //@synthesize tileInfos=_tileInfos - In the implementation block
@property (nonatomic,copy) NFLFeedSettings * feedSettings;                                                  //@synthesize feedSettings=_feedSettings - In the implementation block
@property (nonatomic,copy) id<NFLFeedLayoutSearchConfiguration> feedLayoutSearchConfiguration;              //@synthesize feedLayoutSearchConfiguration=_feedLayoutSearchConfiguration - In the implementation block
@property (nonatomic,retain) id<NFLFontManager> fontManager;                                                //@synthesize fontManager=_fontManager - In the implementation block
@property (assign,nonatomic) double tileProminenceScoreBalanceValue;                                        //@synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue - In the implementation block
@property (nonatomic,copy) NFLBatchContext * previousBatchContext;                                          //@synthesize previousBatchContext=_previousBatchContext - In the implementation block
@property (nonatomic,copy) NFLBatchContext * nextBatchContext;                                              //@synthesize nextBatchContext=_nextBatchContext - In the implementation block
@property (nonatomic,copy) NSArray * result;                                                                //@synthesize result=_result - In the implementation block
@property (copy) id layoutCompletion;                                                                       //@synthesize layoutCompletion=_layoutCompletion - In the implementation block
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(id<NFLFontManager>)fontManager;
-(void)setFontManager:(id<NFLFontManager>)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(double)tileProminenceScoreBalanceValue;
-(void)setTileProminenceScoreBalanceValue:(double)arg1 ;
-(void)setResult:(NSArray *)arg1 ;
-(NSArray *)tileInfos;
-(id<NFLFeedLayoutSearchConfiguration>)feedLayoutSearchConfiguration;
-(void)setFeedLayoutSearchConfiguration:(id<NFLFeedLayoutSearchConfiguration>)arg1 ;
-(void)setTileInfos:(NSArray *)arg1 ;
-(id)layoutCompletion;
-(NFLBatchContext *)previousBatchContext;
-(NFLBatchContext *)nextBatchContext;
-(id)initWithTileInfos:(id)arg1 feedLayoutSearchConfiguration:(id)arg2 feedSettings:(id)arg3 fontManager:(id)arg4 tileProminenceScoreBalanceValue:(double)arg5 previousBatchContext:(id)arg6 nextBatchContext:(id)arg7 ;
-(void)setLayoutCompletion:(id)arg1 ;
-(void)setPreviousBatchContext:(NFLBatchContext *)arg1 ;
-(void)setNextBatchContext:(NFLBatchContext *)arg1 ;
-(id)init;
-(NSArray *)result;
@end

