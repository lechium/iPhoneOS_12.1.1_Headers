/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUILikenessRendering.h>

@protocol CNSchedulerProvider, OS_dispatch_source;
@class _CNUILikenessRenderer, CNCache, CNQueue, NSObject, NSString;

@interface _CNUICachingLikenessRenderer : NSObject <CNUILikenessRendering> {

	_CNUILikenessRenderer* _renderer;
	id<CNSchedulerProvider> _schedulerProvider;
	CNCache* _imageCache;
	CNQueue* _evictionQueue;
	NSObject*<OS_dispatch_source> _memoryMonitoringSource;
	id<CNSchedulerProvider> _mainThreadSchedulerProvider;

}

@property (nonatomic,readonly) _CNUILikenessRenderer * renderer;                                //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                       //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,retain) CNCache * imageCache;                                              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) CNQueue * evictionQueue;                                           //@synthesize evictionQueue=_evictionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryMonitoringSource;              //@synthesize memoryMonitoringSource=_memoryMonitoringSource - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> mainThreadSchedulerProvider;               //@synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)arg1 ;
+(id)_cacheKeyForContacts:(id)arg1 scope:(id)arg2 ;
+(id)descriptorForRequiredKeys;
-(NSObject*<OS_dispatch_source>)memoryMonitoringSource;
-(void)emptyCache:(id)arg1 ;
-(id<CNSchedulerProvider>)mainThreadSchedulerProvider;
-(void)refreshCacheKey:(id)arg1 ;
-(CNQueue *)evictionQueue;
-(void)setEvictionQueue:(CNQueue *)arg1 ;
-(void)setMemoryMonitoringSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setMainThreadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3 ;
-(id)initialRenderedLikenessesForContacts:(id)arg1 scope:(id)arg2 ;
-(id)startCacheEntryWithObservable:(id)arg1 contacts:(id)arg2 scope:(id)arg3 ;
-(id)resizeCacheEntry:(id)arg1 withScope:(id)arg2 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2 ;
-(id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 ;
-(id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2 ;
-(CNCache *)imageCache;
-(void)setImageCache:(CNCache *)arg1 ;
-(_CNUILikenessRenderer *)renderer;
-(void)dealloc;
@end

