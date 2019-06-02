/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QueryPredictionInternal/QueryPredictionInternal-Structs.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>

@protocol _DKKnowledgeSaving, OS_dispatch_queue;
@class NSString, _QPSearchFeedbackListenerParameters, NSMutableSet, NSMutableArray, NSObject;

@interface _QPSearchFeedbackListener : NSObject <SFFeedbackListener> {

	BOOL _isSpotlight;
	BOOL _didSuggestQueryForSession;
	BOOL _didRenderInformationalResults;
	NSString* _clientIdentifier;
	id<_DKKnowledgeSaving> _store;
	_QPSearchFeedbackListenerParameters* _parameters;
	NSString* _prefix;
	NSMutableSet* _remoteQueries;
	NSMutableSet* _silentEngagementCandidates;
	NSMutableArray* _qpMetricsArray;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * clientIdentifier;                                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeSaving> store;                                  //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL isSpotlight;                                              //@synthesize isSpotlight=_isSpotlight - In the implementation block
@property (assign,nonatomic) BOOL didSuggestQueryForSession;                                //@synthesize didSuggestQueryForSession=_didSuggestQueryForSession - In the implementation block
@property (assign,nonatomic) BOOL didRenderInformationalResults;                            //@synthesize didRenderInformationalResults=_didRenderInformationalResults - In the implementation block
@property (nonatomic,retain) _QPSearchFeedbackListenerParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSString * prefix;                                             //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,retain) NSMutableSet * remoteQueries;                                  //@synthesize remoteQueries=_remoteQueries - In the implementation block
@property (nonatomic,retain) NSMutableSet * silentEngagementCandidates;                     //@synthesize silentEngagementCandidates=_silentEngagementCandidates - In the implementation block
@property (nonatomic,retain) NSMutableArray * qpMetricsArray;                               //@synthesize qpMetricsArray=_qpMetricsArray - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)feedbackListenerWithStore:(id)arg1 clientIdentifier:(id)arg2 ;
+(id)feedbackListenerWithClientIdentifier:(id)arg1 ;
+(void)initialize;
-(NSString *)clientIdentifier;
-(void)searchViewDidDisappear:(id)arg1 ;
-(void)didStartSearch:(id)arg1 ;
-(void)didRankSections:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(BOOL)isSpotlight;
-(void)setIsSpotlight:(BOOL)arg1 ;
-(id<_DKKnowledgeSaving>)store;
-(void)setStore:(id<_DKKnowledgeSaving>)arg1 ;
-(id)initWithStore:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)evaluateSilentEngagementCandidates;
-(void)purgeQPMetrics;
-(void)recordQueryFromResultEngagement:(id)arg1 ;
-(void)purgeSilentEngagentCandidates;
-(void)findSilentEngagementCandidateFromVisibleResults:(id)arg1 ;
-(void)_findRemoteMatchingFieldsFromRankedServerResults:(id)arg1 ;
-(NSMutableSet *)silentEngagementCandidates;
-(NSMutableSet *)remoteQueries;
-(void)recordQueryUsePrefix:(id)arg1 result:(id)arg2 withSuggestionType:(unsigned long long)arg3 ;
-(void)recordQueryUseCompletedQuery:(id)arg1 withSuggestionType:(unsigned long long)arg2 ;
-(void)recordCompletedQueryFromLocalResult:(id)arg1 matchingPrefix:(id)arg2 withSuggestionType:(unsigned long long)arg3 ;
-(BOOL)recordQueryWithFullTitle:(id)arg1 whenPrefixMatchesTitle:(id)arg2 withSuggestionType:(unsigned long long)arg3 ;
-(void)recordQueryCheckParsecCompletions:(id)arg1 withSuggestionType:(unsigned long long)arg2 ;
-(void)_recordQueryEngagement:(id)arg1 contactID:(id)arg2 suggestionType:(unsigned long long)arg3 ;
-(NSRange)expandPrefixToLongestRange:(id)arg1 forText:(id)arg2 usingPattern:(id)arg3 ;
-(id)findQuerySuggestionFromParsecForResult:(id)arg1 ;
-(void)_recordQuery:(id)arg1 contactID:(id)arg2 start:(id)arg3 end:(id)arg4 suggestionType:(unsigned long long)arg5 interactionType:(unsigned long long)arg6 ;
-(BOOL)_resultIsPunchout:(id)arg1 ;
-(void)recordQueryWithFullTitle:(id)arg1 withSuggestionType:(unsigned long long)arg2 ;
-(BOOL)didSuggestQueryForSession;
-(void)setDidSuggestQueryForSession:(BOOL)arg1 ;
-(BOOL)didRenderInformationalResults;
-(void)setDidRenderInformationalResults:(BOOL)arg1 ;
-(void)setRemoteQueries:(NSMutableSet *)arg1 ;
-(void)setSilentEngagementCandidates:(NSMutableSet *)arg1 ;
-(NSMutableArray *)qpMetricsArray;
-(void)setQpMetricsArray:(NSMutableArray *)arg1 ;
-(_QPSearchFeedbackListenerParameters *)parameters;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setParameters:(_QPSearchFeedbackListenerParameters *)arg1 ;
@end

