/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCContentContext;
@interface FCFlintResourceManager : NSObject {

	id<FCContentContext> _context;

}

@property (nonatomic,readonly) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
-(id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 cacheLifetimeHint:(long long)arg3 relativePriority:(long long)arg4 callBackQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)fetchFontResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)cachedResourcesWithIdentifiers:(id)arg1 ;
-(id)init;
-(id<FCContentContext>)context;
-(id)initWithContext:(id)arg1 ;
@end

