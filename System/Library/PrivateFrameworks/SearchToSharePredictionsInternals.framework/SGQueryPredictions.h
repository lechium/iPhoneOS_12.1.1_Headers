/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGQPAssetUpdateDelegate.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>
#import <libobjc.A.dylib/SGQPSearchToShareServerProtocol.h>
#import <libobjc.A.dylib/SGQPSearchToShareInternalToolServerProtocol.h>

@protocol PMLTrainingProtocol;
@class SGQPAssetManager, SGQPSqlStore, SGQPMetricsTracker, SGQPSessionTracker, SGQPLanguageContext, NSString;

@interface SGQueryPredictions : NSObject <SGQPAssetUpdateDelegate, SFFeedbackListener, SGQPSearchToShareServerProtocol, SGQPSearchToShareInternalToolServerProtocol> {

	SGQPAssetManager* _assetManager;
	SGQPSqlStore* _store;
	id<PMLTrainingProtocol> _pmlTraining;
	SGQPMetricsTracker* _metricsTracker;
	SGQPSessionTracker* _sessionTracker;
	SGQPLanguageContext* _noLanguageContext;
	SGQPLanguageContext* _primaryLanguageContext;
	unsigned long long _currentAssetVersion;

}

@property (retain) SGQPMetricsTracker * metricsTracker;                       //@synthesize metricsTracker=_metricsTracker - In the implementation block
@property (retain) SGQPSessionTracker * sessionTracker;                       //@synthesize sessionTracker=_sessionTracker - In the implementation block
@property (retain) SGQPLanguageContext * noLanguageContext;                   //@synthesize noLanguageContext=_noLanguageContext - In the implementation block
@property (retain) SGQPLanguageContext * primaryLanguageContext;              //@synthesize primaryLanguageContext=_primaryLanguageContext - In the implementation block
@property (assign) unsigned long long currentAssetVersion;                    //@synthesize currentAssetVersion=_currentAssetVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstanceWithDirectory:(id)arg1 errorHandler:(id)arg2 ;
+(id)sharedInstanceWithDirectory:(id)arg1 ;
-(void)searchViewDidAppear:(id)arg1 ;
-(void)searchViewDidDisappear:(id)arg1 ;
-(void)didStartSearch:(id)arg1 ;
-(void)didEndSearch:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)didEngageSuggestion:(id)arg1 ;
-(void)sendCustomFeedback:(id)arg1 ;
-(void)storeMessageWithUid:(id)arg1 conversationId:(id)arg2 content:(id)arg3 createdAt:(id)arg4 senderIsAccountOwner:(BOOL)arg5 ;
-(void)deleteMessagesForConversation:(id)arg1 ;
-(void)deleteMessagesWithUniqueIdentifiers:(id)arg1 ;
-(void)addMessageToConversation:(id)arg1 withContent:(id)arg2 isSent:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)assetInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)rankedCategoriesForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryPredictionsForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryPredictionsForConversation:(id)arg1 count:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryPredictionsFeedbackReportForConversation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)searchViewDidAppear:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)searchViewDidDisappear:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didStartSearch:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didEndSearch:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didEngageSuggestion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didEngageResult:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendCustomFeedback:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)primaryAssetUpdated:(id)arg1 ;
-(id)initWithAssetManagerAndStore:(id)arg1 training:(id)arg2 ;
-(id)initWithStore:(id)arg1 training:(id)arg2 ;
-(id)languageContextForMessages:(id)arg1 ;
-(id)predictionsForConversation:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)rankedCategoriesForConversation:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)queryPredictionsFeedbackReportForConversation:(id)arg1 ;
-(id)currentMetricsTrackerForTesting;
-(void)trimMessages;
-(SGQPMetricsTracker *)metricsTracker;
-(void)setMetricsTracker:(SGQPMetricsTracker *)arg1 ;
-(SGQPSessionTracker *)sessionTracker;
-(void)setSessionTracker:(SGQPSessionTracker *)arg1 ;
-(SGQPLanguageContext *)noLanguageContext;
-(void)setNoLanguageContext:(SGQPLanguageContext *)arg1 ;
-(SGQPLanguageContext *)primaryLanguageContext;
-(void)setPrimaryLanguageContext:(SGQPLanguageContext *)arg1 ;
-(unsigned long long)currentAssetVersion;
-(void)setCurrentAssetVersion:(unsigned long long)arg1 ;
@end

