/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKSelectionDelegate
@required
-(CGAffineTransform*)imageTransform;
-(CGPoint*)pointInStrokeSpace:(CGPoint)arg1 inDrawing:(id)arg2;
-(CGRect*)visibleOnscreenBoundsForDrawing:(id)arg1;
-(void)selectionRefreshWithChangeToDrawings:(id)arg1;
-(CGPoint*)selectionOffsetForDrawing:(id)arg1;
-(CGAffineTransform*)selectionDrawingTransform;
-(id)drawingUndoTarget;
-(SEL)drawingUndoSelector;
-(void)toggleSelectedStrokes:(id)arg1 hide:(BOOL)arg2 inDrawing:(id)arg3 isErasing:(BOOL)arg4;
-(void)scrollContent:(CGPoint)arg1;
-(BOOL)canModifyWhitespace;
-(id)selectionTopView;
-(id)visibleStrokesOnscreen:(id)arg1 forDrawing:(id)arg2;
-(id)drawingForUUID:(id)arg1;
-(id)drawingForSelectionRect:(CGRect)arg1;
-(CGPoint*)closestPointForPastedSelectionRect:(CGRect)arg1 withDrawing:(id*)arg2;
-(BOOL)isValidDropPointForStrokes:(CGPoint)arg1;
-(void)didBeginDraggingSelection;
-(BOOL)liveDrawingIsAtEndOfDocument;
-(id)drawingForLiveAttachment;
-(void)applyCommand:(id)arg1 toDrawing:(id)arg2;
-(void)resetSelectedStrokeStateForRenderer;
-(id)undoManager;

@end

