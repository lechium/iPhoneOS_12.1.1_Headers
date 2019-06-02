/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, PGIncompleteLocationResolver;

@interface PGLocationTripTitleUtility : NSObject {

	BOOL _filterMomentsAndCities;
	NSString* _title;
	NSSet* _usedLocationNodes;
	NSSet* _momentNodes;
	PGIncompleteLocationResolver* _incompleteLocationResolver;

}

@property (nonatomic,retain) NSSet * momentNodes;                                                    //@synthesize momentNodes=_momentNodes - In the implementation block
@property (assign,nonatomic) BOOL filterMomentsAndCities;                                            //@synthesize filterMomentsAndCities=_filterMomentsAndCities - In the implementation block
@property (nonatomic,retain) PGIncompleteLocationResolver * incompleteLocationResolver;              //@synthesize incompleteLocationResolver=_incompleteLocationResolver - In the implementation block
@property (nonatomic,retain) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSSet * usedLocationNodes;                                              //@synthesize usedLocationNodes=_usedLocationNodes - In the implementation block
+(void)_cityStateAndCountryNodesForLocationNodes:(id)arg1 result:(/*^block*/id)arg2 ;
+(BOOL)_visitedLocationNodeMoreThanOnce:(id)arg1 withReferenceMomentNodes:(id)arg2 ;
+(id)_filteredCityNodesByNameForCityNodes:(id)arg1 ;
+(void)_aoiTitleWithLocationNodes:(id)arg1 momentNodes:(id)arg2 result:(/*^block*/id)arg3 ;
+(id)_locationTitleWithLocationNode:(id)arg1 addressNode:(id)arg2 countryNode:(id)arg3 allowSecondPart:(BOOL)arg4 ;
-(NSSet *)momentNodes;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(void)setUsedLocationNodes:(NSSet *)arg1 ;
-(NSSet *)usedLocationNodes;
-(PGIncompleteLocationResolver *)incompleteLocationResolver;
-(void)setIncompleteLocationResolver:(PGIncompleteLocationResolver *)arg1 ;
-(void)_generateLocationTitle;
-(void)_generateTitleForMoments:(id)arg1 resolvedMoments:(id)arg2 resolvedLocations:(id)arg3 ;
-(void)_resolveMomentNodes:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_cityTitleWithCityNode:(id)arg1 countryNode:(id)arg2 visitedCountryOnlyOnce:(BOOL)arg3 momentNodes:(id)arg4 result:(/*^block*/id)arg5 ;
-(id)_cityNodesFromMomentNodes:(id)arg1 ;
-(id)_bestAddressNodeForCityNodes:(id)arg1 inMomentNodes:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 filterMomentsAndCities:(BOOL)arg2 ;
-(BOOL)filterMomentsAndCities;
-(void)setFilterMomentsAndCities:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

