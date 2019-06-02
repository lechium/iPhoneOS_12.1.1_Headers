/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDEditor.h>

@class TSKSelection, NSSet, TSDInteractiveCanvasController, TSDMultiPaneController, TSDDrawableInfo, NSString;

@interface TSDDrawableEditor : NSObject <TSDEditor> {

	TSDInteractiveCanvasController* mICC;
	NSSet* mInfos;
	TSDMultiPaneController* mGraphicInspector;

}

@property (nonatomic,retain,readonly) TSDDrawableInfo * info; 
@property (nonatomic,readonly) TSDDrawableInfo * firstInfo; 
@property (nonatomic,retain) NSSet * infos; 
@property (nonatomic,readonly) NSSet * layouts; 
@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSKSelection * selection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingFill; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingStroke; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShadow; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingReflection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingOpacity; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingTextInset; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingConnectionLineAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingEndpoints; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingSmartShapeAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingResize; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShrinkTextToFit; 
+(id)keyPathsForValuesAffectingInfo;
+(id)keyPathsForValuesAffectingFirstInfo;
+(BOOL)shouldSuppressMultiselection;
+(id)keyPathsForValuesAffectingLayouts;
-(void)setInfos:(NSSet *)arg1 ;
-(NSSet *)infos;
-(id)documentRoot;
-(id)infosOfClass:(Class)arg1 ;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(id)topLevelInspectorAutosaveName;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canAddOrShowComment;
-(NSSet *)selectedObjectsSupportingFill;
-(NSSet *)selectedObjectsSupportingStroke;
-(NSSet *)selectedObjectsSupportingShadow;
-(NSSet *)selectedObjectsSupportingReflection;
-(NSSet *)selectedObjectsSupportingOpacity;
-(NSSet *)selectedObjectsSupportingTextInset;
-(NSSet *)selectedObjectsSupportingConnectionLineAttributes;
-(NSSet *)selectedObjectsSupportingEndpoints;
-(NSSet *)selectedObjectsSupportingSmartShapeAttributes;
-(NSSet *)selectedObjectsSupportingResize;
-(NSSet *)selectedObjectsSupportingShrinkTextToFit;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(NSSet *)layouts;
-(double)strokeWidthForNormalizedWidth:(double)arg1 ;
-(double)pictureFrameAssetScaleForNormalizedWidth:(double)arg1 ;
-(TSDDrawableInfo *)firstInfo;
-(id)selectedLayoutsSupportingRotation;
-(id)selectedLayoutsSupportingFlipping;
-(id)selectedLayoutsSupportingInspectorPositioning;
-(void)setStyleValue:(id)arg1 forStyleProperty:(int)arg2 ;
-(void)applyStylePresetWithIndex:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
-(void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2 ;
-(void)beginChangingStrokeWidth:(id)arg1 ;
-(void)didChangeStrokeWidth:(id)arg1 ;
-(void)endChangingStrokeWidth:(id)arg1 ;
-(id)strokeSwatches;
-(id)strokeColorPickerTitle;
-(void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2 ;
-(id)stylePresetKindForInspector;
-(void)presetSelected:(id)arg1 sender:(id)arg2 ;
-(id)viewControllerForMoreStyleOptions;
-(id)imageForPreset:(id)arg1 size:(CGSize)arg2 ;
-(void)dealloc;
-(TSDDrawableInfo *)info;
-(id)stroke;
-(void)setStrokeColor:(id)arg1 ;
-(int)canPerformAction:(SEL)arg1 ;
-(id)strokeColor;
@end

