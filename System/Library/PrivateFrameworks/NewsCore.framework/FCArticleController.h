/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCContentContext;
@interface FCArticleController : NSObject {

	id<FCContentContext> _context;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
-(id)articleWithID:(id)arg1 qualityOfService:(long long)arg2 relativePriority:(long long)arg3 ;
-(id)articleWithID:(id)arg1 forceArticleUpdate:(BOOL)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 ;
-(id)articleWithID:(id)arg1 ;
-(id)articleWithHeadline:(id)arg1 ;
-(id)headlinesFetchOperationForArticleIDs:(id)arg1 ;
-(id)headlinesFetchOperationForArticleIDs:(id)arg1 ignoreCacheForArticleIDs:(id)arg2 ;
-(id)init;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)context;
-(id)initWithContext:(id)arg1 ;
@end

