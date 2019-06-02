/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShapeRep.h>
#import <libobjc.A.dylib/CALayerDelegate.h>
#import <TSReading/TSDContainerRep.h>
#import <TSReading/TSWPShapeLayoutDelegate.h>

@class CALayer, TSWPRep, NSString;

@interface TSWPShapeRep : TSDShapeRep <CALayerDelegate, TSDContainerRep, TSWPShapeLayoutDelegate> {

	BOOL _editingContainedRep;
	CALayer* _overflowGlyphLayer;
	TSWPRep* _containedRep;

}

@property (nonatomic,readonly) TSWPRep * containedRep;                                 //@synthesize containedRep=_containedRep - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
-(BOOL)isDraggable;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(id)childReps;
-(BOOL)canSelectChildRep:(id)arg1 ;
-(void)selectChildRep:(id)arg1 ;
-(NSObject*<TSDContainerInfo>)containerInfo;
-(BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg1 ;
-(void)willBeginEditingContainedRep;
-(void)willEndEditingContainedRep;
-(id)hitReps:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(id)hitRep:(CGPoint)arg1 ;
-(BOOL)wantsToHandleTapsWhenLocked;
-(BOOL)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(id)additionalLayersOverLayer;
-(id)overlayLayers;
-(BOOL)mustDrawTilingLayerOnMainThread:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(unsigned long long)enabledKnobMask;
-(BOOL)shouldShowKnobs;
-(BOOL)shouldShowSelectionHighlight;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)updateChildrenFromLayout;
-(BOOL)shouldIgnoreEditMenuTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2 ;
-(BOOL)wantsToHandleTapsOnContainingGroup;
-(int)dragTypeAtCanvasPoint:(CGPoint)arg1 ;
-(id)hyperlinkRegions;
-(BOOL)isInvisible;
-(BOOL)isEditingChildRep;
-(TSWPRep *)containedRep;
-(id)p_overflowKnobImage;
-(BOOL)p_shouldShowTextOverflowGlyph;
-(void)p_resetOverflowGlyphLayerIfNecessary;
-(BOOL)shapeLayoutShouldUpdateInstructionalText:(id)arg1 ;
-(void)shapeLayoutDidChangeContainedStorage:(id)arg1 ;
-(double)pParagraphAlignmentOffset;
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)willBeRemoved;
@end

