/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxyDelegate.h>

@protocol GEOResourceManifestServerProxy, OS_dispatch_source;
@class NSHashTable, GEOActiveTileGroup, NSLock, NSDictionary, NSSet, NSMutableArray, GEOLocalizationRegionsInfo, GEOResourceManifestConfiguration, NSObject, NSString;

@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate> {

	id<GEOResourceManifestServerProxy> _serverProxy;
	NSHashTable* _serverProxyObservers;
	GEOActiveTileGroup* _activeTileGroup;
	NSLock* _activeTileGroupLock;
	NSDictionary* _resourceNamesToPaths;
	NSSet* _allResourceNames;
	NSSet* _allRegionalResourceNames;
	BOOL _needsToLoadTileGroupFromDisk;
	NSMutableArray* _tileGroupObservers;
	NSLock* _tileGroupObserversLock;
	NSLock* _closedCountLock;
	long long _closedCount;
	BOOL _constantlyChangeTileGroup;
	GEOLocalizationRegionsInfo* _localizationRegionsInfo;
	NSMutableArray* _networkActivityHandlers;
	BOOL _isUpdatingManifest;
	BOOL _isLoadingResources;
	NSLock* _resourceNamesToPathsLock;
	GEOResourceManifestConfiguration* _configuration;
	NSObject*<OS_dispatch_source> _cachedResourceInfoPurgeTimer;
	unsigned long long _handle;

}

@property (nonatomic,readonly) id<GEOResourceManifestServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTileGroup; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setServerProxyClass:(Class)arg1 ;
+(id)modernManagerForConfiguration:(id)arg1 ;
+(id)modernManager;
+(void)useRemoteProxy;
+(void)useLocalProxy;
+(void)disableServerConnection;
+(os_state_data_s*)stateDataForDictionary:(id)arg1 title:(id)arg2 ;
+(void)setHiDPI:(BOOL)arg1 ;
+(id)modernManagerForTileGroupIdentifier:(unsigned)arg1 ;
+(id)sharedManager;
-(BOOL)useProxyAuthForTileKey:(const GEOTileKey*)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)addTileGroupObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeTileGroupObserver:(id)arg1 ;
-(GEOActiveTileGroup *)activeTileGroup;
-(BOOL)isDisputedBordersWhitelistedForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(void)updateManifest:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)closeServerConnection;
-(void)openServerConnection;
-(BOOL)hasActiveTileGroup;
-(void)updateManifest:(/*^block*/id)arg1 ;
-(id)authToken;
-(id)pathForResourceWithName:(id)arg1 ;
-(id)allResourceNames;
-(void)startObservingDevResources;
-(void)_registerHandlerForStateCapture;
-(void)stopObservingDevResources;
-(void)_unregisterHandlerForStateCapture;
-(void)_scheduleCachedResourceInfoPurgeTimer;
-(id)_loadActiveTileGroupIfNecessary:(BOOL)arg1 ;
-(void)closeServerConnection:(BOOL)arg1 ;
-(void)_purgeCachedResourceInfo;
-(int)mapMatchingTileSetStyle;
-(id)baseURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(int)requestStyleForTileKey:(const GEOTileKey*)arg1 ;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(void)_buildResourceNamesToPaths;
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1 ;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1 ;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1 ;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1 ;
-(void)fakeTileGroupChange;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3 ;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg1 ;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)updateProgress;
-(void)cancelCurrentManifestUpdate;
-(void)activateResourceScale:(int)arg1 ;
-(void)activateResourceScenario:(int)arg1 ;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(BOOL)hasResourceManifest;
-(id)_detailedDescriptionDictionaryRepresentationForTileGroup:(id)arg1 ;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 ;
-(void)resetActiveTileGroup;
-(void)_notifyObserversOfResourcesChange;
-(void)devResourcesFolderDidChange;
-(os_state_data_s*)_stateCapture;
-(void)addServerProxyObserver:(id)arg1 ;
-(void)removeServerProxyObserver:(id)arg1 ;
-(unsigned)mapMatchingZoomLevel;
-(id)_activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)localizationURLStringIfNecessaryForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(id)disputedBordersQueryItemsForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(unsigned long long)_fromgeod_maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(id)allRegionalResourceNames;
-(id)allResourcePaths;
-(void)addNetworkActivityHandler:(/*^block*/id)arg1 ;
-(void)setConstantlyChangeTileGroup:(BOOL)arg1 ;
-(void)updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(unsigned)activeTileGroupIdentifier;
-(void)forceUpdate;
-(void)removeDevResources;
-(id<GEOResourceManifestServerProxy>)serverProxy;
-(id)init;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
@end
