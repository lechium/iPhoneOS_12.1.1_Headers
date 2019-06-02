/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying> {

	NSMutableArray* _edges;
	NSMutableSet* _nodes;

}
+(id)pathWithEdges:(id)arg1 ;
+(id)path;
-(id)edgeAtIndex:(unsigned long long)arg1 ;
-(void)addLastEdge:(id)arg1 ;
-(double)edgesWeight;
-(BOOL)containsEdge:(id)arg1 ;
-(void)addFirstEdge:(id)arg1 ;
-(void)removeFirstEdge;
-(void)removeLastEdge;
-(void)removeAllEdges;
-(id)graphRepresentation;
-(unsigned long long)edgesCount;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)nodesCount;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqualToPath:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEdges:(id)arg1 ;
-(BOOL)isEmpty;
-(id)sourceNode;
-(id)targetNode;
-(id)nodesForLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(BOOL)containsNode:(id)arg1 ;
@end
