/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadtree : NSObject {

	GKCQuadTree<NSObject>* _cQuadTree;

}
+(id)quadtreeWithBoundingQuad:(GKQuadRef)arg1 minimumCellSize:(float)arg2 ;
-(id)initWithBoundingQuad:(GKQuadRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 ;
-(id)addElement:(id)arg1 withQuad:(GKQuadRef)arg2 ;
-(id)elementsAtPoint:;
-(id)elementsInQuad:(GKQuadRef)arg1 ;
-(BOOL)removeElement:(id)arg1 withNode:(id)arg2 ;
-(BOOL)removeElement:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
