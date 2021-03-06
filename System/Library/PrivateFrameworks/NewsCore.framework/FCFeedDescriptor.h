/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCFeedHeadlineSource.h>
#import <libobjc.A.dylib/FCFeedAdMetadataProviding.h>

@protocol FCContentContext;
@class NSString, NSArray;

@interface FCFeedDescriptor : NSObject <NSCopying, FCFeedHeadlineSource, FCFeedAdMetadataProviding> {

	long long _feedType;
	NSString* _identifier;
	id<FCContentContext> _context;
	NSArray* _otherArticleIDs;

}

@property (assign,nonatomic) long long feedType;                                           //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) id<FCFeedPaginating> feedPaginator; 
@property (nonatomic,readonly) long long feedSortMethod; 
@property (nonatomic,readonly) long long feedFilterOptions; 
@property (nonatomic,readonly) long long feedPersonalizationConfigurationSet; 
@property (nonatomic,readonly) BOOL derivesContentsFromExplicitSubscriptions; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<FCFeedTheming> theme; 
@property (nonatomic,retain) id<FCContentContext> context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hideAccessoryText; 
@property (nonatomic,retain) NSArray * otherArticleIDs;                                    //@synthesize otherArticleIDs=_otherArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL isSubscribable; 
@property (nonatomic,readonly) id<FCTagProviding> backingTag; 
@property (nonatomic,readonly) NSString * backingChannelID; 
@property (nonatomic,readonly) NSString * backingSectionID; 
@property (nonatomic,readonly) NSString * backingTopicID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * iAdIdentifier; 
@property (nonatomic,readonly) NSArray * iAdCategories; 
@property (nonatomic,readonly) NSArray * iAdKeywords; 
@property (nonatomic,readonly) long long iAdContentProvider; 
@property (nonatomic,readonly) NSString * iAdPrimaryAudience; 
@property (nonatomic,readonly) NSString * iAdFeedID; 
@property (nonatomic,readonly) NSString * iAdSectionID; 
-(id<FCFeedTheming>)theme;
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(long long)feedPersonalizationConfigurationSet;
-(BOOL)isSubscribable;
-(id)fetchOperationForHeadlinesWithIDs:(id)arg1 context:(id)arg2 ;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 ;
-(id)streamOfLatestHeadlinesWithContext:(id)arg1 ;
-(void)fetchHeadlinesWithContext:(id)arg1 forIdentifiers:(id)arg2 downloadAssets:(BOOL)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(NSString *)iAdIdentifier;
-(long long)iAdContentProvider;
-(NSString *)iAdPrimaryAudience;
-(NSString *)iAdFeedID;
-(NSString *)iAdSectionID;
-(BOOL)derivesContentsFromExplicitSubscriptions;
-(BOOL)hideAccessoryText;
-(BOOL)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id*)arg3 ;
-(BOOL)isMutedWithSubscriptionController:(id)arg1 ;
-(void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(BOOL)isSubscribedToWithSubscriptionController:(id)arg1 ;
-(BOOL)hasNotificationsEnabledWithSubscriptionController:(id)arg1 ;
-(BOOL)enableNotificationsWithSubscriptionController:(id)arg1 error:(id*)arg2 ;
-(id<FCTagProviding>)backingTag;
-(NSString *)backingChannelID;
-(NSString *)backingSectionID;
-(NSString *)backingTopicID;
-(id)streamOfHeadlinesWithIDs:(id)arg1 context:(id)arg2 cachedOnly:(BOOL)arg3 maxCachedAge:(double)arg4 ;
-(id)offlineFeedGroupEmittersWithConfiguration:(id)arg1 ;
-(void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldFilterFeedGroupEmitter:(id)arg1 withConfiguration:(id)arg2 ;
-(id<FCFeedPaginating>)feedPaginator;
-(long long)feedSortMethod;
-(long long)feedFilterOptions;
-(id)latestHeadlineResultsWithContext:(id)arg1 ;
-(void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(BOOL)arg3 personalize:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(long long)feedType;
-(void)setFeedType:(long long)arg1 ;
-(NSArray *)otherArticleIDs;
-(void)setOtherArticleIDs:(NSArray *)arg1 ;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)context;
-(id)initWithIdentifier:(id)arg1 ;
@end

