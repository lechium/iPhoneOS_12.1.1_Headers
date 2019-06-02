/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PLLocalUUIDConverter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSManagedObjectID, PHPhotoLibrary;

@interface PHObject : NSObject <PLLocalUUIDConverter, NSCopying> {

	BOOL _deleted;
	NSString* _uuid;
	NSManagedObjectID* _objectID;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _propertyHint;

}

@property (readonly) NSManagedObjectID * objectID;                           //@synthesize objectID=_objectID - In the implementation block
@property (readonly) PHPhotoLibrary * photoLibrary;                          //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) id identifier; 
@property (getter=isDeleted,readonly) BOOL deleted;                          //@synthesize deleted=_deleted - In the implementation block
@property (assign) unsigned long long propertyHint;                          //@synthesize propertyHint=_propertyHint - In the implementation block
@property (readonly) NSString * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (getter=isTransient,readonly) BOOL transient; 
@property (nonatomic,copy,readonly) NSString * localIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)managedEntityName;
+(id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(/*^block*/id)arg2 ;
+(unsigned long long)propertyFetchHintsForPropertySets:(id)arg1 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)identifierCode;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)identifierPropertiesToFetch;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)propertyKeyForEntityKey:(id)arg1 ;
+(id)identifierCodeFromLocalIdentifier:(id)arg1 ;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2 ;
+(void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2 ;
+(id)propertySetsForPropertyFetchHints:(unsigned long long)arg1 ;
+(BOOL)managedObjectSupportsHiddenState;
+(BOOL)managedObjectSupportsVisibilityState;
+(BOOL)managedObjectSupportsBursts;
+(BOOL)managedObjectSupportsSavedAssetType;
+(BOOL)managedObjectSupportsMontage;
+(Class)propertySetClassForPropertySet:(id)arg1 ;
+(id)propertySetAccessorsByPropertySet;
+(BOOL)managedObjectSupportsPersonFilters;
+(BOOL)managedObjectSupportsKeyFaces;
+(id)localIdentifierExpressionForFetchRequests;
+(BOOL)managedObjectSupportsFaceState;
+(BOOL)managedObjectSupportsMomentShareTrashedState;
+(BOOL)managedObjectSupportsMomentShareExpiredState;
+(id)fetchType;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)uuidFromLocalIdentifier:(id)arg1 ;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(void)setPropertyHint:(unsigned long long)arg1 ;
-(unsigned long long)propertyHint;
-(BOOL)hasLoadedPropertySet:(id)arg1 ;
-(id)_shortObjectIDURI;
-(BOOL)isTransient;
-(BOOL)isDeleted;
-(NSManagedObjectID *)objectID;
-(PHPhotoLibrary *)photoLibrary;
-(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localIdentifier;
@end
