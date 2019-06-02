/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <OpusKit/OpusKit-Structs.h>
@class NSMutableDictionary, OFReachability, NSObject, NSOperationQueue;

@interface OKProducerManager : NSObject {

	NSMutableDictionary* _extentionClassNames;
	NSMutableDictionary* _installedPlugins;
	NSMutableDictionary* _installedContents;
	OFReachability* _reachability;
	long long _reachabilityStatus;
	NSObject*<OS_dispatch_queue> _serialCloudServicePreparationQueue;
	BOOL _cloudServicePreparing;
	BOOL _cloudServicePrepared;
	BOOL _cloudServiceAutomaticUpdates;
	NSOperationQueue* _cloudServiceOperationQueue;
	long long _minimumNetworkStatusForDownloads;
	NSObject*<OS_dispatch_queue> _producerAccessQueue;

}

@property (assign,nonatomic) BOOL cloudServiceAutomaticUpdates;                       //@synthesize cloudServiceAutomaticUpdates=_cloudServiceAutomaticUpdates - In the implementation block
@property (assign,nonatomic) long long minimumNetworkStatusForDownloads;              //@synthesize minimumNetworkStatusForDownloads=_minimumNetworkStatusForDownloads - In the implementation block
+(id)defaultManager;
-(void)_reachabilityChanged:(id)arg1 ;
-(BOOL)hasPluginWithIdentifier:(id)arg1 ;
-(id)installedPluginWithIdentifier:(id)arg1 ;
-(id)allPluginsIdentifiers;
-(Class)registeredClassFromString:(id)arg1 ;
-(id)localizedNameForPluginIdentifier:(id)arg1 ;
-(id)audioURLsForPluginIdentifier:(id)arg1 ;
-(id)backgroundColorForPluginIdentifier:(id)arg1 ;
-(BOOL)hasInstalledPluginAndContentWithIdentifier:(id)arg1 ;
-(void)registerOpusKitClasses;
-(void)refreshInstalledPlugins;
-(void)refreshInstalledContents;
-(void)prepareCloudServiceIfNeeded;
-(void)_performAsynchronousProducerAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)userLibraryPlugInsDirectoryURL;
-(id)_installedURLsInDirectoryURL:(id)arg1 withExtension:(id)arg2 ;
-(id)_pluginFromURL:(id)arg1 ;
-(void)registerExtensionClassName:(id)arg1 forPluginIdentifier:(id)arg2 ;
-(id)_contentFromURL:(id)arg1 ;
-(void)unregisterExtensionClassName:(id)arg1 forPluginIdentifier:(id)arg2 ;
-(id)_allBundlesURLsWithExtention:(id)arg1 ;
-(id)installedContentWithIdentifier:(id)arg1 ;
-(BOOL)hasInstalledContentWithIdentifier:(id)arg1 ;
-(BOOL)hasInstalledPluginWithIdentifier:(id)arg1 ;
-(id)_contentWithIdentifier:(id)arg1 progressBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)addPluginFromURL:(id)arg1 ;
-(id)addContentFromURL:(id)arg1 ;
-(void)pluginWithIdentifier:(id)arg1 progressBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)performAsynchronousProducerAccessUsingBlock:(/*^block*/id)arg1 ;
-(void)createPresentationWithPluginIdentifier:(id)arg1 guidelines:(id)arg2 mediaFeeder:(id)arg3 mediaItemLookupDelegate:(id)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)createDocumentAtFileURL:(id)arg1 withPluginIdentifier:(id)arg2 guidelines:(id)arg3 mediaURLs:(id)arg4 mediaItemLookupDelegate:(id)arg5 flattenMedia:(BOOL)arg6 flattenProducer:(BOOL)arg7 prepareCaches:(BOOL)arg8 format:(unsigned long long)arg9 keepOpen:(BOOL)arg10 documentClass:(Class)arg11 progressBlock:(/*^block*/id)arg12 completionBlock:(/*^block*/id)arg13 ;
-(void)_closeAndDeleteDocument:(id)arg1 fileURL:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_closeDocument:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_saveDocument:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_openDocument:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_saveDocument:(id)arg1 toFileURL:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)libraryPlugInsDirectoryURL;
-(id)allInstalledPlugins;
-(id)allInstalledContents;
-(id)installedPluginsNames;
-(id)installedPluginAtURL:(id)arg1 ;
-(id)installedContentAtURL:(id)arg1 ;
-(id)installedPluginWithName:(id)arg1 ;
-(id)installedPluginsWithFamily:(unsigned long long)arg1 ;
-(id)loadedPlugins;
-(id)loadedContents;
-(id)pluginWithLoadedClass:(Class)arg1 ;
-(void)setCloudServiceAutomaticUpdates:(BOOL)arg1 ;
-(void)waitUntilCloudServicePrepared:(double)arg1 ;
-(id)allContentsIdentifiers;
-(double)versionForPluginIdentifier:(id)arg1 ;
-(double)versionForContentIdentifier:(id)arg1 ;
-(CGImageRef)previewImageRefForPluginIdentifier:(id)arg1 ;
-(BOOL)hasContentWithIdentifier:(id)arg1 ;
-(void)contentWithIdentifier:(id)arg1 progressBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)installPluginAtURL:(id)arg1 overwrite:(BOOL)arg2 error:(id*)arg3 ;
-(id)installContentAtURL:(id)arg1 overwrite:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)uninstallPluginWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)uninstallContentWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)createPresentationWithPreset:(id)arg1 guidelines:(id)arg2 mediaFeeder:(id)arg3 mediaItemLookupDelegate:(id)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)createDocumentAtDirectoryURL:(id)arg1 withPluginIdentifier:(id)arg2 guidelines:(id)arg3 mediaURLs:(id)arg4 mediaItemLookupDelegate:(id)arg5 flattenMedia:(BOOL)arg6 flattenProducer:(BOOL)arg7 prepareCaches:(BOOL)arg8 format:(unsigned long long)arg9 keepOpen:(BOOL)arg10 documentClass:(Class)arg11 progressBlock:(/*^block*/id)arg12 completionBlock:(/*^block*/id)arg13 ;
-(void)authorDocument:(id)arg1 withPluginIdentifier:(id)arg2 guidelines:(id)arg3 flattenMedia:(BOOL)arg4 flattenProducer:(BOOL)arg5 progressBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(BOOL)cloudServiceAutomaticUpdates;
-(long long)minimumNetworkStatusForDownloads;
-(void)setMinimumNetworkStatusForDownloads:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

