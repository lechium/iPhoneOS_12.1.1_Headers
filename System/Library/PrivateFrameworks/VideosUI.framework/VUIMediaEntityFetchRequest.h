/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VUIMediaEntityType, NSPredicate, NSArray, NSSet, NSString, NSDictionary;

@interface VUIMediaEntityFetchRequest : NSObject <NSCopying> {

	VUIMediaEntityType* _mediaEntityType;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSSet* _properties;
	NSString* _groupingKeyPath;
	/*^block*/id _groupingSortComparator;
	NSDictionary* _options;
	NSString* _identifier;
	NSRange _range;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) VUIMediaEntityType * mediaEntityType;              //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (nonatomic,readonly) BOOL _isItemsFetch; 
@property (nonatomic,readonly) BOOL _isCollectionsFetch; 
@property (nonatomic,readonly) BOOL _isShowsFetch; 
@property (nonatomic,readonly) BOOL _isSeasonsFetch; 
@property (nonatomic,copy) NSPredicate * predicate;                           //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                         //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy) NSSet * properties;                                //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) NSRange range;                                   //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) NSString * groupingKeyPath;                        //@synthesize groupingKeyPath=_groupingKeyPath - In the implementation block
@property (nonatomic,copy) id groupingSortComparator;                         //@synthesize groupingSortComparator=_groupingSortComparator - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                            //@synthesize options=_options - In the implementation block
+(id)_finalizedSortDescriptorsFromSortDescriptors:(id)arg1 mediaEntityKind:(id)arg2 ;
+(id)_finalizedSortDescriptorFromSortDescriptor:(id)arg1 mediaEntityKind:(id)arg2 ;
+(id)mediaEntityFetchRequestWithIdentifier:(id)arg1 ;
+(id)_identifierPredicateWithIdentifier:(id)arg1 ;
+(id)_minimalPropertiesFetchRequestWithType:(id)arg1 ;
+(id)_minimalMoviesPropertiesFetchRequest;
+(id)_minimalMovieRentalsPropertiesFetchRequest;
+(id)_minimalShowsPropertiesFetchRequest;
+(id)_seasonsFetchRequestWithShowIdentifier:(id)arg1 ;
+(id)_seasonsFetchRequestWithSeasonIdentifier:(id)arg1 ;
+(id)_episodesFetchRequestWithSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2 ;
+(id)_addedDateSortDescriptor;
+(id)_addedToDateSortDescriptor;
+(id)_anyHDRColorCapabilityPredicate;
+(id)_any4KResolutionPredicate;
+(id)_predicateWithSubpredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2 ;
+(id)_isLocalPredicate;
+(id)_includeSortIndexesOptions;
+(id)_titleSortDescriptor;
+(id)_showIdentifierPredicateWithIdentifier:(id)arg1 ;
+(id)_seasonNumberSortDescriptor;
+(id)_seasonIdentifierPredicateWithIdentifier:(id)arg1 ;
+(id)_episodeNumberSortDescriptor;
+(id)_resolutionPredicateWithResolution:(id)arg1 ;
+(id)_HLSResolutionPredicateWithResolution:(id)arg1 ;
+(id)homeVideosFetchRequest;
+(id)moviesFetchRequest;
+(id)movieRentalsFetchRequest;
+(id)showsFetchRequest;
+(id)seasonsFetchRequest;
+(id)seasonsFetchRequestWithShowIdentifier:(id)arg1 ;
+(id)seasonsFetchRequestWithSeasonIdentifier:(id)arg1 ;
+(id)episodesFetchRequest;
+(id)episodesFetchRequestWithSeasonIdentifier:(id)arg1 ;
+(id)episodesGroupedBySeasonIdentifierFetchRequestWithShowIdentifier:(id)arg1 ;
+(id)_releaseYearSortDescriptor;
+(id)_releaseDateSortDescriptor;
+(id)_showTitleSortDescriptor;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setProperties:(NSSet *)arg1 ;
-(NSSet *)properties;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(VUIMediaEntityType *)mediaEntityType;
-(void)_didUpdateRequestProperties;
-(id)initWithMediaEntityType:(id)arg1 ;
-(NSString *)groupingKeyPath;
-(id)groupingSortComparator;
-(BOOL)_isItemsFetch;
-(BOOL)_shouldGenerateSortIndexes;
-(void)setGroupingKeyPath:(NSString *)arg1 ;
-(void)setGroupingSortComparator:(id)arg1 ;
-(BOOL)_isCollectionsFetch;
-(BOOL)_isShowsFetch;
-(BOOL)_isSeasonsFetch;
-(id)_sortIndexPropertyKeyWithMediaEntityKind:(id)arg1 ;
-(BOOL)_shouldGenerateGroupingSortIndexes;
-(id)_manualSortDescriptorsWithMediaEntityKind:(id)arg1 propertiesRequiredForSort:(id*)arg2 ;
-(void)setMediaEntityType:(VUIMediaEntityType *)arg1 ;
-(void)addIsLocalPredicate;
-(void)_addPredicate:(id)arg1 ;
-(void)addSortIndexesOption;
-(void)addGroupingSortIndexesOption;
-(void)addRecentlyAddedSortDescriptorWithLimit:(unsigned long long)arg1 ;
-(void)addHDRColorCapabilityPredicate;
-(void)add4KResolutionPredicate;
-(void)addHDRColorCapabilityOr4KResolutionPredicate;
@end

