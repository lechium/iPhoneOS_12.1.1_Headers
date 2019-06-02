/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface CPLEngineDerivativesCache : NSObject {

	NSURL* _cacheMappingURL;
	BOOL _tryCreatingCacheFolder;
	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _cacheURL;
	Class _derivativeGeneratorClass;

}

@property (nonatomic,copy,readonly) NSURL * cacheURL;                     //@synthesize cacheURL=_cacheURL - In the implementation block
@property (nonatomic,retain) Class derivativeGeneratorClass;              //@synthesize derivativeGeneratorClass=_derivativeGeneratorClass - In the implementation block
-(void)discardCache;
-(Class)derivativeGeneratorClass;
-(id)_cacheKeyForReferenceResource:(id)arg1 adjustments:(id)arg2 ;
-(id)_folderNameForReferenceResource:(id)arg1 adjustment:(id)arg2 ;
-(id)_tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2 ;
-(void)_createCacheFolderIfNecessary;
-(id)_finalFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2 ;
-(BOOL)_checkResource:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(id)cachedResourcesForReferenceResource:(id)arg1 adjustment:(id)arg2 ;
-(void)_updateChange:(id*)arg1 fromOldChange:(id)arg2 withResources:(id)arg3 ;
-(id)tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2 ;
-(void)noteGeneratedResouces:(id)arg1 haveBeenGeneratedForReferenceResource:(id)arg2 adjustment:(id)arg3 ;
-(BOOL)_isUnsupportedFormatError:(id)arg1 ;
-(BOOL)_checkGeneratedResources:(id)arg1 error:(id*)arg2 ;
-(void)generateDerivativesForChange:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDerivativeGeneratorClass:(Class)arg1 ;
-(NSURL *)cacheURL;
-(id)initWithCacheURL:(id)arg1 ;
@end
