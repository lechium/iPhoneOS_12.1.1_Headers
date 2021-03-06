/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class SFDeviceAssetQuery, NSObject, NSBundle, NSError;

@interface SFDeviceAssetTask : NSObject {

	BOOL _useProcessLocalCache;
	SFDeviceAssetQuery* _deviceAssetQuery;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _completionHandler;
	NSBundle* _assetBundle;
	NSBundle* _fallbackAssetBundle;
	NSBundle* _cachedAssetBundle;
	NSError* _error;

}

@property (nonatomic,readonly) SFDeviceAssetQuery * deviceAssetQuery;                   //@synthesize deviceAssetQuery=_deviceAssetQuery - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) BOOL useProcessLocalCache;                               //@synthesize useProcessLocalCache=_useProcessLocalCache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSBundle * assetBundle;                                  //@synthesize assetBundle=_assetBundle - In the implementation block
@property (nonatomic,readonly) NSBundle * fallbackAssetBundle;                          //@synthesize fallbackAssetBundle=_fallbackAssetBundle - In the implementation block
@property (nonatomic,readonly) NSBundle * cachedAssetBundle;                            //@synthesize cachedAssetBundle=_cachedAssetBundle - In the implementation block
@property (nonatomic,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
-(SFDeviceAssetQuery *)deviceAssetQuery;
-(void)cancelTimeout;
-(BOOL)completeIfPossible;
-(void)completeWithBundle:(id)arg1 isFallback:(BOOL)arg2 isCached:(BOOL)arg3 ;
-(id)bundleURLFromAssetURL:(id)arg1 ;
-(BOOL)updateTaskWithAssetBundleURL:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isCached:(BOOL)arg4 ;
-(id)bundleAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateTaskWithBundle:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isCached:(BOOL)arg4 ;
-(NSBundle *)assetBundle;
-(NSBundle *)fallbackAssetBundle;
-(NSBundle *)cachedAssetBundle;
-(BOOL)processCanAccessURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithDeviceQuery:(id)arg1 dispatchQueue:(id)arg2 useProcessLocalCache:(BOOL)arg3 timeout:(double)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(BOOL)updateTaskWithAssetURL:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isCached:(BOOL)arg4 ;
-(BOOL)useProcessLocalCache;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)completionHandler;
-(NSObject*<OS_dispatch_source>)timer;
-(NSError *)error;
@end

