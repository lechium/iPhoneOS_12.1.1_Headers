/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPMediaLibrary, MPMediaQueryCriteria, NSArray, MPMediaPlaylist, MPMediaItemCollection, NSSet, NSDictionary, MPMediaQuerySectionInfo, NSString;

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSSecureCoding, NSCopying> {

	MPMediaLibrary* _mediaLibrary;
	MPMediaQueryCriteria* _criteria;
	int _isFilteringDisabled;
	NSArray* _staticEntities;
	long long _staticEntityType;

}

@property (nonatomic,readonly) MPMediaPlaylist * containingPlaylist; 
@property (nonatomic,readonly) MPMediaItemCollection * collectionByJoiningCollections; 
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary; 
@property (nonatomic,copy) NSSet * itemPropertiesToFetch; 
@property (nonatomic,copy) NSSet * collectionPropertiesToFetch; 
@property (setter=_setOrderingProperties:,getter=_orderingProperties,nonatomic,copy) NSArray * orderingProperties; 
@property (setter=_setOrderingDirectionMappings:,getter=_orderingDirectionMappings,nonatomic,copy) NSDictionary * orderingDirectionMappings; 
@property (assign,nonatomic) BOOL sortItems; 
@property (assign,nonatomic) BOOL useSections; 
@property (assign,nonatomic) unsigned long long entityLimit; 
@property (nonatomic,readonly) BOOL _hasItems; 
@property (nonatomic,readonly) BOOL _hasCollections; 
@property (nonatomic,readonly) unsigned long long _countOfItems; 
@property (nonatomic,readonly) unsigned long long _countOfCollections; 
@property (nonatomic,readonly) BOOL _hasStaticEntities; 
@property (nonatomic,readonly) NSArray * itemPersistentIdentifiers; 
@property (nonatomic,readonly) NSArray * collectionPersistentIdentifiers; 
@property (nonatomic,readonly) MPMediaQuerySectionInfo * itemSectionInfo; 
@property (nonatomic,readonly) MPMediaQuerySectionInfo * collectionSectionInfo; 
@property (nonatomic,readonly) BOOL excludesEntitiesWithBlankNames; 
@property (assign,nonatomic) BOOL includeEntitiesWithBlankNames; 
@property (nonatomic,readonly) BOOL specifiesPlaylistItems; 
@property (assign,nonatomic) BOOL shouldIncludeNonLibraryEntities; 
@property (nonatomic,readonly) BOOL willGroupEntities; 
@property (assign,nonatomic) BOOL ignoreSystemFilterPredicates; 
@property (assign,nonatomic) BOOL ignoreRestrictionsPredicates; 
@property (nonatomic,readonly) MPMediaItemCollection * _representativeCollection; 
@property (nonatomic,readonly) long long _representativeCollectionGroupingType; 
@property (getter=isPlaylistItemsQuery,nonatomic,readonly) BOOL playlistItemsQuery; 
@property (nonatomic,retain) NSSet * filterPredicates; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * collections; 
@property (assign,nonatomic) long long groupingType; 
@property (nonatomic,readonly) NSArray * itemSections; 
@property (nonatomic,readonly) NSArray * collectionSections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initFilteringDisabled;
+(id)playlistsQuery;
+(BOOL)isFilteringDisabled;
+(id)artistsQuery;
+(id)songsQuery;
+(id)podcastsQuery;
+(id)ITunesUQuery;
+(id)ITunesUAudioQuery;
+(id)videoITunesUQuery;
+(id)audibleAudiobooksQuery;
+(id)compilationsQuery;
+(id)composersQuery;
+(id)genresQuery;
+(id)albumArtistsQuery;
+(id)videosQuery;
+(id)musicVideosQuery;
+(id)tvShowsQuery;
+(id)homeVideosQuery;
+(id)moviesQuery;
+(id)audioPodcastsQuery;
+(id)videoPodcastsQuery;
+(id)geniusMixesQuery;
+(id)playlistsRecentlyAddedQuery;
+(id)playbackHistoryPlaylist;
+(id)activeGeniusPlaylist;
+(id)currentDevicePurchasesPlaylist;
+(void)setFilteringDisabled:(BOOL)arg1 ;
+(id)movieRentalsQuery;
+(id)albumsQuery;
+(id)audiobooksQuery;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(long long)groupingType;
-(void)setGroupingType:(long long)arg1 ;
-(long long)_representativeCollectionGroupingType;
-(BOOL)_hasStaticEntities;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)criteria;
-(void)_enumerateCollectionPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_countOfItems;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(id)initWithFilterPredicates:(id)arg1 ;
-(void)setShouldIncludeNonLibraryEntities:(BOOL)arg1 ;
-(unsigned long long)_countOfCollections;
-(MPMediaItemCollection *)_representativeCollection;
-(void)setEntityLimit:(unsigned long long)arg1 ;
-(void)setIgnoreRestrictionsPredicates:(BOOL)arg1 ;
-(void)setFilterPredicates:(NSSet *)arg1 ;
-(BOOL)_isFilteringDisabled;
-(id)initWithCriteria:(id)arg1 library:(id)arg2 ;
-(void)setStaticEntities:(id)arg1 entityType:(long long)arg2 ;
-(NSSet *)filterPredicates;
-(id)protobufferEncodableObject;
-(void)setSortItems:(BOOL)arg1 ;
-(void)_setOrderingProperties:(id)arg1 ;
-(void)_setOrderingDirectionMappings:(id)arg1 ;
-(id)predicateForProperty:(id)arg1 ;
-(void)_getRepresentativeCollectionGrouping:(long long*)arg1 propertyPredicate:(id*)arg2 ;
-(BOOL)excludesEntitiesWithBlankNames;
-(BOOL)specifiesPlaylistItems;
-(unsigned long long)groupingThreshold;
-(MPMediaQuerySectionInfo *)itemSectionInfo;
-(MPMediaQuerySectionInfo *)collectionSectionInfo;
-(id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(long long)arg3 ;
-(void)_enumerateItemsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateItemPersistentIDsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateCollectionsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateCollectionPersistentIDsInOrder:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithEntities:(id)arg1 entityType:(long long)arg2 ;
-(id)copyByRemovingStaticEntities;
-(id)copyBySanitizingStaticEntities;
-(unsigned long long)entityLimit;
-(BOOL)shouldIncludeNonLibraryEntities;
-(BOOL)includeEntitiesWithBlankNames;
-(void)setIncludeEntitiesWithBlankNames:(BOOL)arg1 ;
-(BOOL)ignoreSystemFilterPredicates;
-(void)setIgnoreSystemFilterPredicates:(BOOL)arg1 ;
-(BOOL)ignoreRestrictionsPredicates;
-(NSSet *)itemPropertiesToFetch;
-(NSSet *)collectionPropertiesToFetch;
-(void)setCollectionPropertiesToFetch:(NSSet *)arg1 ;
-(BOOL)_hasItems;
-(BOOL)_hasCollections;
-(NSArray *)itemPersistentIdentifiers;
-(NSArray *)collectionPersistentIdentifiers;
-(id)_orderingProperties;
-(id)_orderingDirectionMappings;
-(BOOL)sortItems;
-(void)setUseSections:(BOOL)arg1 ;
-(BOOL)useSections;
-(BOOL)willGroupEntities;
-(NSArray *)itemSections;
-(NSArray *)collectionSections;
-(id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 ;
-(id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 ;
-(void)_enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateCollectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedCollectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isPlaylistItemsQuery;
-(unsigned long long)_playlistItemPersistentIDForItemPersistentID:(unsigned long long)arg1 ;
-(void)setCriteria:(id)arg1 ;
-(void)removePredicatesForProperty:(id)arg1 ;
-(void)setFilterPredicate:(id)arg1 forProperty:(id)arg2 ;
-(MPMediaPlaylist *)containingPlaylist;
-(void)setFilterPropertyPredicate:(id)arg1 ;
-(BOOL)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2 ;
-(MPMediaItemCollection *)collectionByJoiningCollections;
-(id)MPSD_mediaQueryForDownloadableEntities;
-(id)MPSD_mediaQueryForDownloadingEntities;
-(BOOL)MPSD_hasDownloadableEntities;
-(BOOL)MPSD_hasDownloadingEntities;
-(void)addFilterPredicate:(id)arg1 ;
-(void)_enumerateUnorderedItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeFilterPredicate:(id)arg1 ;
-(void)setItemPropertiesToFetch:(NSSet *)arg1 ;
-(NSArray *)collections;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
@end

