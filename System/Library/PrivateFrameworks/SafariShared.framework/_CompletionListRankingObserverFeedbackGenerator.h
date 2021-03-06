/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CompletionListRankingObserverFeedbackGenerator <NSObject>
@property (assign,nonatomic,__weak) id<_CompletionListRankingObserverFeedbackGeneratorDelegate> delegate; 
@optional
-(void)didBeginRanking;
-(void)didEndRanking;
-(void)didBeginSectionWithBundleIdentifier:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<_CompletionListRankingObserverFeedbackGeneratorDelegate>)delegate;

@required
-(void)didAddItem:(id)arg1 hidingOutrankedResults:(id)arg2 hidingDuplicateResults:(id)arg3;
-(void)removeAllSectionsAndItems;

@end

