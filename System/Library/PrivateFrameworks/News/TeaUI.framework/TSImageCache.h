/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSImageCacheType.h>

@interface TSImageCache : NSObject <TSImageCacheType> {

	 downloader;
	 processor;
	 underlyingCache;
	 fetchDeduper;
	 mainLRU;

}
-(void)fetchImageForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fetchImageForRequest:(id)arg1 ;
-(void)cancelAllRunningOperations;
-(id)initWithUnderlyingCache:(id)arg1 processor:(id)arg2 downloader:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg1 ;
@end
