/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface KPersistentMovieInfo : NSObject
+(void)noteApplicationDidReceiveMemoryWarning;
+(void)nukeCaches;
+(void)ensureCacheDirectoryExists;
+(id)cachedCreationDateForURL:(id)arg1 ;
+(void)addURL:(id)arg1 withDate:(id)arg2 ;
+(id)infoCachePath;
+(void)reallySaveDict:(id)arg1 ;
+(void)createOrLoadPersistentDict;
+(void)savePersistentDict;
+(long long)cacheCount;
@end

