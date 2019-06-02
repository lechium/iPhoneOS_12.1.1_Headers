/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString, NSData, NSManagedObjectModel, NSMutableDictionary, NSDictionary, NSArray, NSExpression;

@interface NSEntityDescription : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration> {

	int _cd_rc;
	id _snapshotClass;
	NSString* _versionHashModifier;
	NSData* _versionHash;
	NSManagedObjectModel* _model;
	NSString* _classNameForEntity;
	Class _instanceClass;
	NSString* _name;
	NSEntityDescription* _rootentity;
	NSEntityDescription* _superentity;
	NSMutableDictionary* _subentities;
	NSMutableDictionary* _properties;
	id _propertyMapping;
	NSRange* _propertyRanges;
	struct {
		unsigned _isAbstract : 1;
		unsigned _shouldValidateOnSave : 1;
		unsigned _isImmutable : 1;
		unsigned _isFlattened : 1;
		unsigned _skipValidation : 1;
		unsigned _hasPropertiesIndexedBySpotlight : 1;
		unsigned _hasPropertiesStoredInTruthFile : 1;
		unsigned _rangesAreInDataBlob : 1;
		unsigned _hasAttributesWithExternalDataReferences : 1;
		unsigned _hasNonstandardPrimitiveProperties : 2;
		unsigned _hasUniqueProperties : 1;
		unsigned _validationUniqueProperties : 1;
		unsigned _isPersistentHistoryEntity : 1;
		unsigned _hasAttributesWithFileBackedFutures : 1;
		unsigned _reservedEntityDescription : 17;
	}  _entityDescriptionFlags;
	void* _extraIvars;
	NSMutableDictionary* _userInfo;
	id _flattenedSubentities;
	id* _kvcPropertyAccessors;
	long long _modelsReferenceIDForEntity;

}

@property (readonly) NSManagedObjectModel * managedObjectModel; 
@property (copy) NSString * managedObjectClassName; 
@property (copy) NSString * name; 
@property (getter=isAbstract) BOOL abstract; 
@property (copy,readonly) NSDictionary * subentitiesByName; 
@property (retain) NSArray * subentities; 
@property (readonly) NSEntityDescription * superentity; 
@property (copy,readonly) NSDictionary * propertiesByName; 
@property (retain) NSArray * properties; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (copy,readonly) NSDictionary * attributesByName; 
@property (copy,readonly) NSDictionary * relationshipsByName; 
@property (copy,readonly) NSData * versionHash; 
@property (copy) NSString * versionHashModifier; 
@property (copy) NSString * renamingIdentifier; 
@property (copy) NSArray * indexes; 
@property (retain) NSArray * uniquenessConstraints; 
@property (retain) NSArray * compoundIndexes; 
@property (nonatomic,retain) NSExpression * coreSpotlightDisplayNameExpression; 
+(id)_MOClassName;
+(id)entityForName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertNewObjectForEntityForName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)_hasAttributesWithFileBackedFutures;
-(NSRange*)_propertyRangesByType;
-(id)knownKeysMappingStrategy;
-(id)_propertyNamed:(id)arg1 ;
-(id)_relationshipNamed:(id)arg1 ;
-(void)_nukeMOClassName__;
-(id)_rootEntity;
-(NSDictionary *)subentitiesByName;
-(void)_setIsEditable:(BOOL)arg1 ;
-(NSString *)renamingIdentifier;
-(BOOL)_isSchemaEqual:(id)arg1 ;
-(id)_uniquenessConstraints;
-(BOOL)_subentitiesIncludes:(id)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(long long)_modelsReferenceID;
-(NSExpression *)coreSpotlightDisplayNameExpression;
-(BOOL)_hasPropertiesIndexedBySpotlight;
-(id)_propertySearchMapping;
-(Class)_entityClass;
-(BOOL)isAbstract;
-(NSString *)versionHashModifier;
-(id)_oldCompoundIndexStyleIndexes;
-(id)_indexElementFromJSONArray:(id)arg1 ;
-(id)_indexDescriptionFromJSONArray:(id)arg1 ;
-(void)_addSupplementalIndexes:(id)arg1 ;
-(void)_setIndexes:(id)arg1 ;
-(void)setRenamingIdentifier:(NSString *)arg1 ;
-(void)setCompoundIndexes:(NSArray *)arg1 ;
-(void)setUniquenessConstraints:(NSArray *)arg1 ;
-(void)_setIndexesFromJSONObject:(id)arg1 supplemental:(BOOL)arg2 ;
-(void)_setSubentities:(id)arg1 preserveIndices:(BOOL)arg2 ;
-(void)_setProperties:(id)arg1 preserveIndices:(BOOL)arg2 ;
-(void)setCoreSpotlightDisplayNameExpression:(NSExpression *)arg1 ;
-(id)_propertiesOfType:(unsigned long long)arg1 ;
-(void)_dropIndexes;
-(void)_removeSubentity:(id)arg1 ;
-(void)_addSubentity:(id)arg1 ;
-(void)_removeProperty:(id)arg1 ;
-(void)_addProperty:(id)arg1 ;
-(BOOL)_isFlattened;
-(id)_subentityNamed:(id)arg1 ;
-(id)_versionHashInStyle:(unsigned long long)arg1 ;
-(void)_validateIndexNameChangeFrom:(id)arg1 to:(id)arg2 ;
-(id)_attributeNamed:(id)arg1 ;
-(void)_validateIndex:(id)arg1 ;
-(id)_propertiesOnlySubsetFromIndexes:(id)arg1 ;
-(BOOL)_hasIndexForProperty:(id)arg1 ;
-(NSArray *)uniquenessConstraints;
-(id)_checkForNonCascadeNoInverses;
-(void)setSubentities:(NSArray *)arg1 ;
-(id)relationshipsWithDestinationEntity:(id)arg1 ;
-(void)setAbstract:(BOOL)arg1 ;
-(id)_newVersionHashInStyle:(unsigned long long)arg1 ;
-(void)setVersionHashModifier:(NSString *)arg1 ;
-(void)setIndexes:(NSArray *)arg1 ;
-(NSArray *)compoundIndexes;
-(Class)_snapshotClass;
-(id)_flattenedSubentities;
-(id)_keypathsToPrefetchForDeletePropagation;
-(void)_setSuperentity:(id)arg1 ;
-(void)setElementID:(id)arg1 ;
-(id)keypathsToPrefetchForDeletePropagation;
-(id)_constraintAsIndex:(id)arg1 ;
-(id)_keypathsToPrefetchForDeletePropagationPrefixedWith:(id)arg1 toDepth:(long long)arg2 processedEntities:(id)arg3 ;
-(id)_relationshipNamesByType:(BOOL)arg1 ;
-(id)_localRelationshipNamed:(id)arg1 ;
-(void)_flattenProperties;
-(id)_collectSubentities;
-(BOOL)_isInheritedPropertyNamed:(id)arg1 ;
-(id)_newMappingForPropertiesOfRange:(unsigned)arg1 ;
-(BOOL)_hasUniquePropertiesUncached;
-(void)_commonCachesAndOptimizedState;
-(void)_removePropertyNamed:(id)arg1 ;
-(void)_setIsFlattened:(BOOL)arg1 ;
-(void)_stripForMigration;
-(void)_restoreValidation;
-(BOOL)_hasUniquePropertiesDownInheritanceHiearchy;
-(BOOL)_constraintIsExtension:(id)arg1 ;
-(id)_uniquenessConstraintsAsFetchIndexes;
-(id)_propertyWithRenamingIdentifier:(id)arg1 ;
-(id)_keypathsForDeletions;
-(void)_setManagedObjectModel:(id)arg1 ;
-(id)toManyRelationshipKeys;
-(id)toOneRelationshipKeys;
-(id)inverseForRelationshipKey:(id)arg1 ;
-(BOOL)_hasCustomPrimitiveProperties;
-(id)_localPropertyDescriptionNamed:(id)arg1 ;
-(BOOL)_hasPotentialHashSkew;
-(unsigned long long)_offsetRelationshipIndex:(unsigned long long)arg1 fromSuperEntity:(id)arg2 andIsToMany:(BOOL)arg3 ;
-(id)_allPropertyNames;
-(void*)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned long long)arg1 ;
-(void*)_leopardStyleRelationshipsByName;
-(void*)_leopardStyleAttributesByName;
-(id)_new_implicitlyObservedKeys;
-(void)_setModelsReferenceID:(long long)arg1 ;
-(id)_sortedSubentities;
-(BOOL)_skipValidation;
-(BOOL)_hasAttributesWithExternalDataReferences;
-(BOOL)_hasPropertiesStoredInTruthFile;
-(void)_addIndexForProperty:(id)arg1 ;
-(void)_removeIndexForProperty:(id)arg1 ;
-(void)_finalizeIndexes;
-(BOOL)_isPathologicalForConstraintMerging:(id*)arg1 ;
-(BOOL)_hasUniqueProperties;
-(id)_extensionsOfParentConstraint:(id)arg1 ;
-(BOOL)_hasUniquedAttributeWithName:(id)arg1 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7 ;
-(id)attributeKeys;
-(NSDictionary *)attributesByName;
-(NSDictionary *)relationshipsByName;
-(NSString *)managedObjectClassName;
-(NSDictionary *)propertiesByName;
-(BOOL)isKindOfEntity:(id)arg1 ;
-(NSEntityDescription *)superentity;
-(NSArray *)subentities;
-(void)setManagedObjectClassName:(NSString *)arg1 ;
-(NSData *)versionHash;
-(id)elementID;
-(BOOL)_isEditable;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(oneway void)release;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)retain;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)indexes;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setProperties:(NSArray *)arg1 ;
-(NSArray *)properties;
-(id)_initWithName:(id)arg1 ;
@end

