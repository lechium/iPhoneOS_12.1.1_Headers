/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue;
@class MapsSuggestionsManager, NSObject, GEOAutomobileOptions, NSString;

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject> {

	MapsSuggestionsManager* _manager;
	NSObject*<OS_dispatch_queue> _optionsSerialQueue;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;

}

@property (assign,nonatomic) int mapType;                                           //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)defaultCachePath;
+(id)defaultEngine;
+(void)load;
-(id)initWithManager:(id)arg1 ;
-(void)setMapType:(int)arg1 ;
-(int)mapType;
-(id)currentLocation;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(BOOL)attachSink:(id)arg1 ;
-(BOOL)detachSink:(id)arg1 ;
-(BOOL)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(void)addAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(BOOL)saveStorageToFile:(id)arg1 ;
-(BOOL)loadStorageFromFile:(id)arg1 ;
-(BOOL)loadStorageFromFile:(id)arg1 callback:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)hintRefreshOfType:(long long)arg1 ;
-(id)fakeSource;
-(void)setFakeSource:(id)arg1 ;
-(NSArray*)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 ;
-(BOOL)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 callback:(/*^block*/id)arg5 onQueue:(id)arg6 ;
-(NSArray*)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 ;
-(void)startDemoMode;
-(id)strategy;
-(void)reset;
-(NSString *)uniqueName;
-(id)manager;
@end
