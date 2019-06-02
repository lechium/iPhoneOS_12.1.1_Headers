/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PGIncompleteLocationResolver;

@interface PGLocationsFilterer : NSObject {

	NSArray* _sortedMomentNodes;
	NSArray* _locationNodes;
	PGIncompleteLocationResolver* _incompleteLocationResolver;
	NSArray* _filteredLocationNodes;
	unsigned long long _filteringType;

}

@property (readonly) NSArray * sortedMomentNodes;                                            //@synthesize sortedMomentNodes=_sortedMomentNodes - In the implementation block
@property (readonly) NSArray * locationNodes;                                                //@synthesize locationNodes=_locationNodes - In the implementation block
@property (readonly) PGIncompleteLocationResolver * incompleteLocationResolver;              //@synthesize incompleteLocationResolver=_incompleteLocationResolver - In the implementation block
@property (assign,nonatomic) unsigned long long filteringType;                               //@synthesize filteringType=_filteringType - In the implementation block
@property (nonatomic,readonly) NSArray * filteredLocationNodes;                              //@synthesize filteredLocationNodes=_filteredLocationNodes - In the implementation block
-(id)initWithSortedMomentNodes:(id)arg1 locationNodes:(id)arg2 incompleteLocationResolver:(id)arg3 ;
-(NSArray *)filteredLocationNodes;
-(NSArray *)locationNodes;
-(id)_filteredSignificantLocationNodes;
-(NSArray *)sortedMomentNodes;
-(PGIncompleteLocationResolver *)incompleteLocationResolver;
-(unsigned long long)filteringType;
-(void)setFilteringType:(unsigned long long)arg1 ;
@end

