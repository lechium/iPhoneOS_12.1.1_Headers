/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AEPackageTransport.h>
#import <libobjc.A.dylib/AEPhotosAssetPackageFinalizer.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AEChatKitTransport : AEPackageTransport <AEPhotosAssetPackageFinalizer> {

	NSObject*<OS_dispatch_group> __packagePreparationGroup;
	NSObject*<OS_dispatch_queue> __urlSidetableIsolationQueue;
	NSMutableDictionary* __alternateURLsByIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> _packagePreparationGroup;                 //@synthesize _packagePreparationGroup=__packagePreparationGroup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _urlSidetableIsolationQueue;              //@synthesize _urlSidetableIsolationQueue=__urlSidetableIsolationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _alternateURLsByIdentifier;                      //@synthesize _alternateURLsByIdentifier=__alternateURLsByIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<AEChatKitTransportDelegate> delegate; 
-(id)_workQueue;
-(void)unstagePackageWithIdentifier:(id)arg1 andNotify:(BOOL)arg2 ;
-(void)commitPackage:(id)arg1 ;
-(void)stagePackage:(id)arg1 ;
-(void)stagePackages:(id)arg1 ;
-(void)unstagePackagesWithIdentifiers:(id)arg1 ;
-(id)_persistedURLsFromURLs:(id)arg1 inBaseDirectory:(id)arg2 outError:(out id*)arg3 ;
-(NSObject*<OS_dispatch_group>)_packagePreparationGroup;
-(NSObject*<OS_dispatch_queue>)_urlSidetableIsolationQueue;
-(NSMutableDictionary *)_alternateURLsByIdentifier;
-(void)_evictPersistedURLs:(id)arg1 ;
-(id)_preparePackageForCommit:(id)arg1 inBaseDirectory:(id)arg2 outError:(out id*)arg3 ;
-(void)_beginStagingWorkForPackage:(id)arg1 ;
-(void)unstagePackagesWithIdentifiers:(id)arg1 evictFiles:(BOOL)arg2 ;
-(id)_chatkitPackageForIdentifer:(id)arg1 ;
-(id)finalizePackage:(id)arg1 error:(out id*)arg2 ;
-(void)stagePersistedPayloads:(id)arg1 ;
-(id)orderedStagedPayloads;
-(id)init;
@end

