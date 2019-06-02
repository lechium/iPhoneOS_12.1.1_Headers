/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOPlaceDataDBWriter, GEOPlaceDataDBReader, NSObject;

@interface GEOPlaceDataComponentCache : NSObject {

	GEOPlaceDataDBWriter* _writer;
	GEOPlaceDataDBReader* _reader;
	NSObject*<OS_dispatch_queue> _queue;
	int _resultProviderID;

}

@property (nonatomic,readonly) int resultProviderID;              //@synthesize resultProviderID=_resultProviderID - In the implementation block
-(void)shrinkBySize:(unsigned long long)arg1 callback:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(unsigned long long)muidForPhoneNumber:(unsigned long long)arg1 ;
-(id)placeDataForMUID:(unsigned long long)arg1 ;
-(id)placeDataForKey:(GEOTileKey)arg1 ;
-(id)placeDataForPhoneNumber:(unsigned long long)arg1 ;
-(id)allCacheEntries;
-(int)resultProviderID;
-(void)deletePhoneNumberMapping;
-(void)flushPendingWritesSynchronously;
-(void)rememberPlaceData:(id)arg1 ;
-(void)evictPlaceDataForMUID:(unsigned long long)arg1 ;
-(void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2 ;
-(void)evictPlaceDataForKey:(GEOTileKey)arg1 ;
-(void)setPlaceData:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(id)componentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(id)initWithPath:(id)arg1 resultProviderID:(int)arg2 ;
-(void)rememberComponent:(id)arg1 forKey:(_GEOPlaceDataComponentKey)arg2 ;
-(void)forgetComponentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(void)componentsForKeys:(id)arg1 finished:(/*^block*/id)arg2 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)evictAllEntries;
-(void)tearDown;
-(id)init;
@end

