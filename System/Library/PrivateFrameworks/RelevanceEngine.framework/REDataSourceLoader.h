/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface REDataSourceLoader : NSObject <NSCopying> {

	NSArray* _cachedDataSources;
	NSArray* _cachedBundleConfigurations;

}
+(id)dataSourceLoaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2 ;
+(id)dataSourceLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)arg1 ;
+(id)dataSourceLoaderWithDirectories:(id)arg1 ;
+(id)disabledDataSourceLoader;
+(id)defaultDataSourceLoader;
+(id)dataSourceLoaderWithDirectory:(id)arg1 ;
-(void)prewarm;
-(void)_loadClassesUsingBlock:(/*^block*/id)arg1 ;
-(void)_loadBundleConfigurationsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateBundleConfigurations:(/*^block*/id)arg1 ;
-(void)enumerationDataSourceClassesWithBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

