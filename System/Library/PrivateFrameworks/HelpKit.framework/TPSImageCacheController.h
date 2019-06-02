/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/TPSDataCacheController.h>

@interface TPSImageCacheController : TPSDataCacheController
+(id)defaultInMemoryImageCache;
+(id)sharedInstance;
-(void)removeInMemoryCache;
-(void)removeAllDataCache;
-(id)newDataCache;
-(BOOL)isURLValid:(id)arg1 ;
-(void)formattedDataWithFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)formattedDataWithData:(id)arg1 ;
-(id)formattedDataWithFileURL:(id)arg1 ;
-(void)addInMemoryCacheForImage:(id)arg1 identifier:(id)arg2 cost:(unsigned long long)arg3 ;
-(id)imageFromMemoryCacheForPath:(id)arg1 ;
-(void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)removeInMemoryCacheForPath:(id)arg1 ;
-(id)getImageForPath:(id)arg1 ;
-(void)commonInit;
@end

