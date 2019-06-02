/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSMutableSet, NSPredicate, NSArray, NSString, NSSet, PHPhotoLibrary;

@interface PHFetchOptions : NSObject <NSCopying> {

	NSNumber* _includeHiddenAssetsNumber;
	NSNumber* _includeAllBurstAssetsNumber;
	NSNumber* _includeAssetSourceTypesNumber;
	NSNumber* _fetchLimitNumber;
	NSNumber* _fetchOffsetNumber;
	NSNumber* _curationTypeNumber;
	NSNumber* _wantsIncrementalChangeDetailsNumber;
	NSNumber* _chunkSizeForFetchNumber;
	NSNumber* _cacheSizeForFetchNumber;
	NSNumber* _reverseSortOrderNumber;
	NSNumber* _includeDuplicateAssetsNumber;
	NSNumber* _includePendingMemoriesNumber;
	NSNumber* _includeRejectedMemoriesNumber;
	NSNumber* _personContextNumber;
	NSNumber* _includeTrashedAssetsNumber;
	NSNumber* _includeTrashedMomentSharesNumber;
	NSNumber* _includeExpiredMomentSharesNumber;
	NSNumber* _includeFavoriteMemoriesCollectionListNumber;
	NSNumber* _includePlacesSmartAlbumNumber;
	NSNumber* _excludeMontageAssetsNumber;
	NSNumber* _minimumVerifiedFaceCountNumber;
	NSNumber* _minimumUnverifiedFaceCountNumber;
	NSNumber* _includeNonvisibleFacesNumber;
	NSNumber* _includeOnlyPersonsWithVisibleKeyFacesNumber;
	NSNumber* _includeOnlyFacesNeedingFaceCropNumber;
	NSNumber* _includeOnlyFacesWithFaceprintsNumber;
	NSNumber* _includeOnlyFacesInFaceGroupsNumber;
	NSNumber* _isExclusivePredicateNumber;
	NSMutableSet* _propertySets;
	NSNumber* _shouldPrefetchCountNumber;
	NSNumber* _sharingStreamNumber;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSArray* _customObjectIDSortOrder;
	NSString* _transientIdentifier;
	NSPredicate* _internalPredicate;
	NSArray* _internalSortDescriptors;
	NSPredicate* _internalInclusionPredicate;
	NSSet* _verifiedPersonTypes;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSSet * fetchPropertySetsAsSet; 
@property (nonatomic,retain) NSArray * customObjectIDSortOrder;                          //@synthesize customObjectIDSortOrder=_customObjectIDSortOrder - In the implementation block
@property (nonatomic,retain) NSArray * fetchPropertySets; 
@property (assign,nonatomic) long long chunkSizeForFetch; 
@property (assign,nonatomic) long long cacheSizeForFetch; 
@property (nonatomic,retain) NSString * transientIdentifier;                             //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,retain) NSPredicate * internalPredicate;                            //@synthesize internalPredicate=_internalPredicate - In the implementation block
@property (assign,nonatomic) BOOL isExclusivePredicate; 
@property (nonatomic,retain) NSArray * internalSortDescriptors;                          //@synthesize internalSortDescriptors=_internalSortDescriptors - In the implementation block
@property (nonatomic,retain) NSPredicate * internalInclusionPredicate;                   //@synthesize internalInclusionPredicate=_internalInclusionPredicate - In the implementation block
@property (assign,nonatomic) BOOL reverseSortOrder; 
@property (assign,nonatomic) BOOL includeDuplicateAssets; 
@property (assign,nonatomic) BOOL includePendingMemories; 
@property (assign,nonatomic) BOOL includeRejectedMemories; 
@property (assign,nonatomic) BOOL includeFavoriteMemoriesCollectionList; 
@property (assign,nonatomic) BOOL includePlacesSmartAlbum; 
@property (assign,nonatomic) unsigned long long minimumVerifiedFaceCount; 
@property (assign,nonatomic) unsigned long long minimumUnverifiedFaceCount; 
@property (assign,nonatomic) long long curationType; 
@property (assign,nonatomic) BOOL includeNonvisibleFaces; 
@property (assign,nonatomic) BOOL includeOnlyFacesNeedingFaceCrop; 
@property (assign,nonatomic) BOOL includeOnlyFacesWithFaceprints; 
@property (assign,nonatomic) BOOL includeOnlyFacesInFaceGroups; 
@property (assign,nonatomic) long long personContext; 
@property (assign,nonatomic) BOOL includeOnlyPersonsWithVisibleKeyFaces; 
@property (nonatomic,copy) NSSet * verifiedPersonTypes;                                  //@synthesize verifiedPersonTypes=_verifiedPersonTypes - In the implementation block
@property (assign,nonatomic) BOOL excludeMontageAssets; 
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL shouldPrefetchCount; 
@property (assign,nonatomic) BOOL includeTrashedAssets; 
@property (assign,nonatomic) BOOL includeTrashedMomentShares; 
@property (assign,nonatomic) BOOL includeExpiredMomentShares; 
@property (assign,nonatomic) unsigned long long sharingStream; 
@property (assign,nonatomic) unsigned long long fetchOffset; 
@property (nonatomic,retain) NSPredicate * predicate;                                    //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                  //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenAssets; 
@property (assign,nonatomic) BOOL includeAllBurstAssets; 
@property (assign,nonatomic) unsigned long long includeAssetSourceTypes; 
@property (assign,nonatomic) unsigned long long fetchLimit; 
@property (assign,nonatomic) BOOL wantsIncrementalChangeDetails; 
+(id)effectivePhotoLibraryForFetchOptions:(id)arg1 ;
+(id)fetchOptionsWithInclusiveDefaults;
-(void)setFetchOffset:(unsigned long long)arg1 ;
-(unsigned long long)fetchOffset;
-(NSSet *)fetchPropertySetsAsSet;
-(void)setCustomObjectIDSortOrder:(NSArray *)arg1 ;
-(NSPredicate *)internalInclusionPredicate;
-(NSArray *)internalSortDescriptors;
-(void)setTransientIdentifier:(NSString *)arg1 ;
-(NSArray *)customObjectIDSortOrder;
-(NSSet *)verifiedPersonTypes;
-(void)setVerifiedPersonTypes:(NSSet *)arg1 ;
-(unsigned long long)minimumVerifiedFaceCount;
-(void)setMinimumVerifiedFaceCount:(unsigned long long)arg1 ;
-(unsigned long long)minimumUnverifiedFaceCount;
-(BOOL)includeOnlyFacesNeedingFaceCrop;
-(void)setIncludeOnlyFacesNeedingFaceCrop:(BOOL)arg1 ;
-(BOOL)wantsIncrementalChangeDetails;
-(BOOL)includeAllBurstAssets;
-(BOOL)includeHiddenAssets;
-(long long)chunkSizeForFetch;
-(long long)cacheSizeForFetch;
-(unsigned long long)includeAssetSourceTypes;
-(BOOL)includeDuplicateAssets;
-(void)setIncludeDuplicateAssets:(BOOL)arg1 ;
-(BOOL)includePendingMemories;
-(BOOL)includeRejectedMemories;
-(long long)personContext;
-(BOOL)includeTrashedAssets;
-(BOOL)includeTrashedMomentShares;
-(BOOL)includeExpiredMomentShares;
-(void)setIncludeExpiredMomentShares:(BOOL)arg1 ;
-(BOOL)includeFavoriteMemoriesCollectionList;
-(BOOL)includePlacesSmartAlbum;
-(BOOL)excludeMontageAssets;
-(BOOL)shouldPrefetchCount;
-(BOOL)isExclusivePredicate;
-(void)setIsExclusivePredicate:(BOOL)arg1 ;
-(void)mergeWithFetchOptions:(id)arg1 ;
-(BOOL)includeNonvisibleFaces;
-(void)setIncludeNonvisibleFaces:(BOOL)arg1 ;
-(BOOL)includeOnlyPersonsWithVisibleKeyFaces;
-(BOOL)includeOnlyFacesWithFaceprints;
-(void)setIncludeOnlyFacesWithFaceprints:(BOOL)arg1 ;
-(BOOL)includeOnlyFacesInFaceGroups;
-(void)setIncludeOnlyFacesInFaceGroups:(BOOL)arg1 ;
-(void)setIncludePendingMemories:(BOOL)arg1 ;
-(void)setPersonContext:(long long)arg1 ;
-(void)setIncludeOnlyPersonsWithVisibleKeyFaces:(BOOL)arg1 ;
-(void)setMinimumUnverifiedFaceCount:(unsigned long long)arg1 ;
-(void)setFetchPropertySets:(NSArray *)arg1 ;
-(void)setIncludeRejectedMemories:(BOOL)arg1 ;
-(unsigned long long)fetchLimit;
-(void)setChunkSizeForFetch:(long long)arg1 ;
-(void)setCurationType:(long long)arg1 ;
-(void)setSharingStream:(unsigned long long)arg1 ;
-(unsigned long long)sharingStream;
-(NSArray *)fetchPropertySets;
-(void)setIncludeTrashedMomentShares:(BOOL)arg1 ;
-(long long)curationType;
-(BOOL)reverseSortOrder;
-(void)setInternalInclusionPredicate:(NSPredicate *)arg1 ;
-(void)setCacheSizeForFetch:(long long)arg1 ;
-(void)setIncludeAllBurstAssets:(BOOL)arg1 ;
-(void)setInternalPredicate:(NSPredicate *)arg1 ;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)addFetchPropertySets:(id)arg1 ;
-(void)setIncludeTrashedAssets:(BOOL)arg1 ;
-(void)setInternalSortDescriptors:(NSArray *)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setIncludeAssetSourceTypes:(unsigned long long)arg1 ;
-(void)setIncludeHiddenAssets:(BOOL)arg1 ;
-(void)setShouldPrefetchCount:(BOOL)arg1 ;
-(void)setIncludeFavoriteMemoriesCollectionList:(BOOL)arg1 ;
-(void)setIncludePlacesSmartAlbum:(BOOL)arg1 ;
-(NSString *)transientIdentifier;
-(void)setWantsIncrementalChangeDetails:(BOOL)arg1 ;
-(void)setReverseSortOrder:(BOOL)arg1 ;
-(NSPredicate *)internalPredicate;
-(void)setExcludeMontageAssets:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
@end

