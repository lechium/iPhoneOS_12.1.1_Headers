/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@class NSMutableDictionary;

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {

	NSMutableDictionary* mNodeInfoMap;
	BOOL mIsLayered;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5 ;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setUpLayers;
-(void)copyInfoForNode:(id)arg1 depth:(int)arg2 ;
-(ODIHRangeVector*)mapRangesForNode:(id)arg1 ;
-(CGRect)mapLogicalBoundsWithXRanges:(const ODIHRangeVector*)arg1 ;
-(void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 index:(unsigned long long)arg4 ;
-(void)mapLayerNodes:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6 ;
-(void)mapNode:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6 ;
-(id)infoForNode:(id)arg1 ;
-(CGRect)boundsForNode:(id)arg1 ;
@end

