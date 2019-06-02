/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAMLParserDelegate.h>

@protocol OS_dispatch_queue, WAAssetLoaderDelegate;
@class NSObject, NSCache, NSTimer, NSString;

@interface WUIAsynchronousAssetLoader : NSObject <CAMLParserDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _caml_parsing_queue;
	id<WAAssetLoaderDelegate> _delegate;
	NSCache* _resourceCache;
	NSCache* _dataCache;
	NSCache* _caDataCache;
	NSTimer* _opportunityTimer;

}

@property (nonatomic,retain) NSCache * resourceCache;                                //@synthesize resourceCache=_resourceCache - In the implementation block
@property (nonatomic,retain) NSCache * dataCache;                                    //@synthesize dataCache=_dataCache - In the implementation block
@property (nonatomic,retain) NSCache * caDataCache;                                  //@synthesize caDataCache=_caDataCache - In the implementation block
@property (nonatomic,retain) NSTimer * opportunityTimer;                             //@synthesize opportunityTimer=_opportunityTimer - In the implementation block
@property (assign,nonatomic,__weak) id<WAAssetLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAssetLoader;
-(void)beginLoading;
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2 ;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3 ;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(void)CAMLParser:(id)arg1 formatWarningString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4 ;
-(void)CAMLParser:(id)arg1 formatErrorString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4 ;
-(void)cancelLoading;
-(NSCache *)resourceCache;
-(void)setResourceCache:(NSCache *)arg1 ;
-(NSCache *)dataCache;
-(void)setDataCache:(NSCache *)arg1 ;
-(void)_asynchronouslyPreheatCADataForCity:(id)arg1 ;
-(id)caml_parsing_queue;
-(id)filenameForCondition:(long long)arg1 isDay:(BOOL)arg2 ;
-(void)loadRootLayerForFile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_primeOpportunisticLoad;
-(void)_opportunisticallyLoad;
-(void)setResource:(id)arg1 forKey:(id)arg2 ;
-(void)didReceivedMemoryWarning;
-(NSCache *)caDataCache;
-(void)setCaDataCache:(NSCache *)arg1 ;
-(NSTimer *)opportunityTimer;
-(void)setOpportunityTimer:(NSTimer *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<WAAssetLoaderDelegate>)arg1 ;
-(id<WAAssetLoaderDelegate>)delegate;
-(id)queue;
@end

