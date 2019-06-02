/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@class NSString, NSSet;

@interface FCTrendingStoriesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	unsigned long long _minPrecedingTopicGroups;
	long long _desiredArticlesCount;

}

@property (assign,nonatomic) unsigned long long minPrecedingTopicGroups;              //@synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups - In the implementation block
@property (assign,nonatomic) long long desiredArticlesCount;                          //@synthesize desiredArticlesCount=_desiredArticlesCount - In the implementation block
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
-(id)backingChannelTagIDWithConfiguration:(id)arg1 ;
-(BOOL)emitsSingletonGroups;
-(long long)requiredForYouContentTypes;
-(id)initWithMinPrecedingTopicGroups:(unsigned long long)arg1 desiredArticlesCount:(long long)arg2 ;
-(unsigned long long)minPrecedingTopicGroups;
-(long long)desiredArticlesCount;
-(void)setDesiredArticlesCount:(long long)arg1 ;
-(void)setMinPrecedingTopicGroups:(unsigned long long)arg1 ;
@end

