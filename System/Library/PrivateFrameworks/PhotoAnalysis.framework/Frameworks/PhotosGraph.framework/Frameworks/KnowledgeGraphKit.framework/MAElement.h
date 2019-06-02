/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableSet, MAGraph, NSString;

@interface MAElement : NSObject <NSCopying> {

	unsigned _identifier;
	unsigned short _domain;
	unsigned short _label;
	NSMutableDictionary* _properties;
	NSMutableSet* _keysOfNullProperties;
	MAGraph* _graph;
	float _weight;
	BOOL _hasFetchedAllProperties;

}

@property (assign,nonatomic) unsigned identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) MAGraph * graph;               //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) id _labelKey; 
@property (nonatomic,readonly) unsigned short _label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) float weight;                         //@synthesize weight=_weight - In the implementation block
@property (readonly) BOOL isAbstract; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,readonly) unsigned short domain;              //@synthesize domain=_domain - In the implementation block
+(id)faultCountDictionary;
+(void)reportPropertyFaultsWithTriggeringPropertyKey:(id)arg1 ;
+(long long)recordPropertyFault:(id)arg1 ;
+(BOOL)areProperties:(id)arg1 similarToOtherProperties:(id)arg2 ;
+(void)initialize;
-(BOOL)isAbstract;
-(MAGraph *)graph;
-(void)setGraph:(MAGraph *)arg1 ;
-(unsigned long long)propertiesCount;
-(id)propertyDictionary;
-(id)propertiesToTestForUniqueness;
-(id)_labelKey;
-(id)initWithLabel:(unsigned short)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(unsigned long long)_memoryFootprint:(id)arg1 ;
-(BOOL)hasEqualPropertiesToElement:(id)arg1 ;
-(id)fetchPropertiesExceptPropertyKeys:(id)arg1 ;
-(void)mergeLocalPropertiesFrom:(id)arg1 ;
-(void)fetchMissingPropertiesIfNeeded;
-(id)loadPropertyForKey:(id)arg1 ;
-(BOOL)isNode;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2 ;
-(void)_removePersistentStorePropertyForKey:(id)arg1 ;
-(void)_removeAllPersistentStoreProperties;
-(void)_removeAllLocalProperties;
-(void)_setPersistentStorePropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setLocalProperties:(id)arg1 ;
-(void)_setPersistentStoreProperties:(id)arg1 ;
-(id)propertiesKeys;
-(BOOL)isEqualToElement:(id)arg1 ;
-(BOOL)matchesElement:(id)arg1 includingProperties:(BOOL)arg2 ;
-(unsigned short)labelAsInteger;
-(void)_setLabelString:(id)arg1 ;
-(void)_updatePersistentStoreElement;
-(void)_loadPersistentStoreProperties;
-(BOOL)hasPropertyForKey:(id)arg1 ;
-(BOOL)hasPropertyForKey:(id)arg1 kindOfClass:(Class)arg2 ;
-(BOOL)hasPropertiesForKeys:(id)arg1 ;
-(id)identifyingPropertyKeys;
-(void)purgeLocalPropertiesForKeys:(id)arg1 ;
-(void)setNullPropertyForKey:(id)arg1 ;
-(void)setNullPropertyForKeys:(id)arg1 ;
-(void)mergeLocalProperty:(id)arg1 key:(id)arg2 ;
-(id)propertiesVisualStringForKeys:(id)arg1 ;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)invalidateMemoryCaches;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(unsigned short)_label;
-(unsigned short)domain;
-(NSString *)label;
-(void)setProperties:(id)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(void)removeAllProperties;
-(id)shortDescription;
-(float)weight;
-(void)setWeight:(float)arg1 ;
@end

