/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper {

	float mScale;
	BOOL mCircularArrows;
	int mDiagramType;
	int mArrowShapeType;

}
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5 ;
-(CGRect)circumscribedBounds;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(CGSize)nodeSize;
-(CGRect)nodeBoundsWithIndex:(unsigned long long)arg1 ;
-(void)mapTransitionPointAt:(id)arg1 index:(unsigned)arg2 withState:(id)arg3 ;
-(void)mapTransitionArrowsAt:(id)arg1 index:(unsigned)arg2 withState:(id)arg3 ;
@end
