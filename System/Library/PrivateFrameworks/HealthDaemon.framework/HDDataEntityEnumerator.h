/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteQueryDescriptor.h>

@class HDProfile, NSMutableDictionary, HKObjectType, _HKFilter, NSSet, NSNumber, NSArray, NSString;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor {

	HDProfile* _profile;
	NSMutableDictionary* _encodingOptions;
	BOOL _useLeftJoin;
	BOOL _ignoreEntityClassAdditionalPredicateForEnumeration;
	BOOL _improveJoinOrderingForStartDateIndexSelection;
	HKObjectType* _objectType;
	_HKFilter* _filter;
	NSSet* _restrictedSourceEntities;
	/*^block*/id _authorizationFilter;
	NSNumber* _anchor;
	NSNumber* _deletedObjectsAnchor;
	NSArray* _sortDescriptors;
	NSString* _lastSQL;

}

@property (nonatomic,readonly) HKObjectType * objectType;                                          //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) _HKFilter * filter;                                                   //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSSet * restrictedSourceEntities;                                     //@synthesize restrictedSourceEntities=_restrictedSourceEntities - In the implementation block
@property (nonatomic,copy) id authorizationFilter;                                                 //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,retain) NSNumber * anchor;                                                    //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSNumber * deletedObjectsAnchor;                                      //@synthesize deletedObjectsAnchor=_deletedObjectsAnchor - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                                              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL ignoreEntityClassAdditionalPredicateForEnumeration;              //@synthesize ignoreEntityClassAdditionalPredicateForEnumeration=_ignoreEntityClassAdditionalPredicateForEnumeration - In the implementation block
@property (assign,nonatomic) BOOL improveJoinOrderingForStartDateIndexSelection;                   //@synthesize improveJoinOrderingForStartDateIndexSelection=_improveJoinOrderingForStartDateIndexSelection - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastSQL;                                            //@synthesize lastSQL=_lastSQL - In the implementation block
-(NSSet *)restrictedSourceEntities;
-(void)setRestrictedSourceEntities:(NSSet *)arg1 ;
-(void)setAuthorizationFilter:(id)arg1 ;
-(void)setEncodingOption:(id)arg1 forKey:(id)arg2 ;
-(BOOL)enumerateWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(HKObjectType *)objectType;
-(void)setImproveJoinOrderingForStartDateIndexSelection:(BOOL)arg1 ;
-(void)addEncodingOptionsFromDictionary:(id)arg1 ;
-(id)initWithObjectType:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3 ;
-(id)initWithEntityClass:(Class)arg1 profile:(id)arg2 ;
-(id)authorizationFilter;
-(void)setIgnoreEntityClassAdditionalPredicateForEnumeration:(BOOL)arg1 ;
-(void)setDeletedObjectsAnchor:(NSNumber *)arg1 ;
-(BOOL)enumerateIncludingDeletedObjects:(BOOL)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_enumerateObjectsOnDatabase:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setColumnNamesAndSortOrderingsOnDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)improveJoinOrderingForStartDateIndexSelection;
-(BOOL)_prepareDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)_joinClauseForProperties:(id)arg1 ;
-(id)encodingOptionForKey:(id)arg1 ;
-(NSNumber *)deletedObjectsAnchor;
-(BOOL)ignoreEntityClassAdditionalPredicateForEnumeration;
-(NSString *)lastSQL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_HKFilter *)filter;
-(void)setFilter:(_HKFilter *)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(NSNumber *)anchor;
-(void)setAnchor:(NSNumber *)arg1 ;
@end

