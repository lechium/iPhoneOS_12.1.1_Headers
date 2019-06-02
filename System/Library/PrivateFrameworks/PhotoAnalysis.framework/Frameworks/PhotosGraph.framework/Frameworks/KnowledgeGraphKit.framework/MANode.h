/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MAElement.h>

@class NSMutableArray;

@interface MANode : MAElement {

	NSMutableArray* _edges;

}
-(id)propertiesToTestForUniqueness;
-(unsigned long long)_memoryFootprint:(id)arg1 ;
-(id)fetchPropertiesExceptPropertyKeys:(id)arg1 ;
-(id)loadPropertyForKey:(id)arg1 ;
-(BOOL)isNode;
-(void)_removePersistentStorePropertyForKey:(id)arg1 ;
-(void)_removeAllPersistentStoreProperties;
-(void)_setPersistentStorePropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setPersistentStoreProperties:(id)arg1 ;
-(void)_updatePersistentStoreElement;
-(void)_loadPersistentStoreProperties;
-(id)identifyingPropertyKeys;
-(id)visualString;
-(BOOL)hasEdge:(id)arg1 isIn:(BOOL*)arg2 ;
-(BOOL)_hasEdgesWithOppositeNode:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_edgesWithOppositeNode:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_anyEdgeWithOppositeNode:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumerateEdgesOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)visualStringWithName:(id)arg1 ;
-(id)visualStringWithName:(id)arg1 andPropertiesKeys:(id)arg2 ;
-(BOOL)isOrphan;
-(BOOL)conformsToNodeSchema:(id)arg1 ;
-(BOOL)isUnique;
-(id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)hasEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyEdgeTowardNode:(id)arg1 ;
-(unsigned long long)countOfEdgesWithLabel:(id)arg1 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1 ;
-(void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)anyEdgeFromNode:(id)arg1 ;
-(unsigned long long)edgesCount;
-(unsigned long long)outEdgesCount;
-(void)enumerateNeighborNodesThroughOutEdgesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)countOfEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)associatedNodesForRemoval;
-(id)anyEdgeWithLabel:(id)arg1 ;
-(id)anyNeighborNodeThroughOutEdges;
-(unsigned long long)inEdgesCount;
-(void)enumerateNeighborNodesThroughInEdgesUsingBlock:(/*^block*/id)arg1 ;
-(id)anyNeighborNodeThroughOutEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNeighborNodeThroughInEdges;
-(void)enumerateInEdgesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)edgesFromNode:(id)arg1 ;
-(void)enumerateOutEdgesUsingBlock:(/*^block*/id)arg1 ;
-(id)edgesTowardNode:(id)arg1 ;
-(id)anyEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 ;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateNeighborNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateSiblingNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)hasEdgeWithLabel:(id)arg1 ;
-(void)enumerateEdgesUsingBlock:(/*^block*/id)arg1 ;
-(id)anyNeighborNodeThroughInEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)init;
-(id)description;
-(void)_addEdge:(id)arg1 ;
-(void)_removeEdge:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)hasEdgeTowardNode:(id)arg1 ;
-(BOOL)hasEdgeFromNode:(id)arg1 ;
-(void)enumerateNeighborNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)shortDescription;
@end

