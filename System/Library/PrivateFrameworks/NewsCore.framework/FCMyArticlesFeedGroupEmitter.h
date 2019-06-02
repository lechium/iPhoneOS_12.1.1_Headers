/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@protocol FCHeadlineClustering, FCHeadlineClusterOrdering;
@class NSString, NSSet;

@interface FCMyArticlesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	id<FCHeadlineClustering> _headlineClusterer;
	id<FCHeadlineClusterOrdering> _headlineClusterOrderer;

}

@property (nonatomic,retain) id<FCHeadlineClustering> headlineClusterer;                        //@synthesize headlineClusterer=_headlineClusterer - In the implementation block
@property (nonatomic,retain) id<FCHeadlineClusterOrdering> headlineClusterOrderer;              //@synthesize headlineClusterOrderer=_headlineClusterOrderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,copy,readonly) NSString * groupEmitterIdentifier; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
-(NSString *)groupEmitterIdentifier;
-(BOOL)wantsToInsertGroup:(id)arg1 withContext:(id)arg2 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(NSSet *)emittableGroupTypes;
-(BOOL)supportsPagination;
-(BOOL)canMergeHeadlinesFromGroup:(id)arg1 intoGroup:(id)arg2 ;
-(long long)requiredForYouContentTypes;
-(id)initWithHeadlineClusterer:(id)arg1 headlineClusterOrderer:(id)arg2 ;
-(id<FCHeadlineClustering>)headlineClusterer;
-(void)setHeadlineClusterer:(id<FCHeadlineClustering>)arg1 ;
-(id<FCHeadlineClusterOrdering>)headlineClusterOrderer;
-(void)setHeadlineClusterOrderer:(id<FCHeadlineClusterOrdering>)arg1 ;
@end
