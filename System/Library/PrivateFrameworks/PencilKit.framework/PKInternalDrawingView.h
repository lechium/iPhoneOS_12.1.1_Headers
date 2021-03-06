/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKControllerDelegate.h>
#import <libobjc.A.dylib/PKDrawingGestureTarget.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKInternalDrawingViewDelegate;
@class CADisplayLink, NSMutableOrderedSet, PKDrawing, PKSelectionController, PKInk, PKDrawingGestureRecognizer, PKFreeTransformGestureRecognizer, PKController, PKMetalView, PKOpenGLESView, NSTimer, NSString;

@interface PKInternalDrawingView : UIView <PKControllerDelegate, PKDrawingGestureTarget, UIGestureRecognizerDelegate> {

	CADisplayLink* _displayLink;
	BOOL _shouldPause;
	CGAffineTransform _imageTransform;
	BOOL _didCancelSelection;
	BOOL _isSelecting;
	CGPoint _drawingBeganLocation;
	BOOL _isErasingObjects;
	CGPoint _oldEraseLocation;
	unsigned long long _maxNumPredictionPoints;
	NSMutableOrderedSet* _strokesToErase;
	BOOL _shouldPresentInDidMoveToWindow;
	/*^block*/id _purgeResourcesBlock;
	PKDrawing* _drawingAboutToBeSet;
	unsigned long long _numSkippedDoubleBufferedFrames;
	BOOL _isDrawing;
	BOOL _disableWideGamut;
	BOOL _zooming;
	BOOL _allowLiveInteraction;
	BOOL _editable;
	BOOL _pinchingFromSmallestState;
	BOOL _pinchValid;
	BOOL _fullySetup;
	BOOL _layerFixedPixelSize;
	PKDrawing* _drawing;
	PKSelectionController* _selectionController;
	id<PKInternalDrawingViewDelegate> _delegate;
	long long _cachedOrientation;
	PKInk* _ink;
	PKDrawingGestureRecognizer* _drawingGestureRecognizer;
	PKFreeTransformGestureRecognizer* _pinchGestureRecognizer;
	PKController* _drawingController;
	id _undoTarget;
	SEL _undoSelector;
	double _minimumZoomScale;
	double _maximumZoomScale;
	double _drawingStartTimestamp;
	PKMetalView* _metalView;
	PKOpenGLESView* _glView;
	NSTimer* _imageTransformTimer;
	double _initialDrawingBoundsYOrigin;
	id _pkaxOpenGLView;
	CGSize _drawingSize;
	CGAffineTransform _strokeTransform;
	CGAffineTransform _pinchStartAffineTransform;

}

@property (nonatomic,readonly) PKMetalView * metalView;                                              //@synthesize metalView=_metalView - In the implementation block
@property (nonatomic,readonly) PKOpenGLESView * glView;                                              //@synthesize glView=_glView - In the implementation block
@property (nonatomic,retain) NSTimer * imageTransformTimer;                                          //@synthesize imageTransformTimer=_imageTransformTimer - In the implementation block
@property (assign,nonatomic) double initialDrawingBoundsYOrigin;                                     //@synthesize initialDrawingBoundsYOrigin=_initialDrawingBoundsYOrigin - In the implementation block
@property (assign,nonatomic) BOOL isDrawing;                                                         //@synthesize isDrawing=_isDrawing - In the implementation block
@property (assign,nonatomic) BOOL pinchingFromSmallestState;                                         //@synthesize pinchingFromSmallestState=_pinchingFromSmallestState - In the implementation block
@property (assign,nonatomic) CGAffineTransform pinchStartAffineTransform;                            //@synthesize pinchStartAffineTransform=_pinchStartAffineTransform - In the implementation block
@property (assign,nonatomic) BOOL pinchValid;                                                        //@synthesize pinchValid=_pinchValid - In the implementation block
@property (assign,nonatomic) BOOL fullySetup;                                                        //@synthesize fullySetup=_fullySetup - In the implementation block
@property (assign,nonatomic) BOOL didCancelSelection;                                                //@synthesize didCancelSelection=_didCancelSelection - In the implementation block
@property (assign,nonatomic) BOOL layerFixedPixelSize;                                               //@synthesize layerFixedPixelSize=_layerFixedPixelSize - In the implementation block
@property (nonatomic,readonly) id pkaxOpenGLView;                                                    //@synthesize pkaxOpenGLView=_pkaxOpenGLView - In the implementation block
@property (nonatomic,__weak,readonly) PKSelectionController * selectionController;                   //@synthesize selectionController=_selectionController - In the implementation block
@property (assign,nonatomic,__weak) id<PKInternalDrawingViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGAffineTransform imageTransform; 
@property (assign,nonatomic) CGAffineTransform strokeTransform;                                      //@synthesize strokeTransform=_strokeTransform - In the implementation block
@property (assign,nonatomic) long long cachedOrientation;                                            //@synthesize cachedOrientation=_cachedOrientation - In the implementation block
@property (assign,nonatomic) CGSize drawingSize;                                                     //@synthesize drawingSize=_drawingSize - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                                    //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,retain) PKInk * ink;                                                            //@synthesize ink=_ink - In the implementation block
@property (nonatomic,readonly) BOOL isRendering; 
@property (assign,nonatomic) BOOL disableWideGamut;                                                  //@synthesize disableWideGamut=_disableWideGamut - In the implementation block
@property (nonatomic,retain) PKDrawingGestureRecognizer * drawingGestureRecognizer;                  //@synthesize drawingGestureRecognizer=_drawingGestureRecognizer - In the implementation block
@property (nonatomic,retain) PKFreeTransformGestureRecognizer * pinchGestureRecognizer;              //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL zooming;                                                           //@synthesize zooming=_zooming - In the implementation block
@property (assign,nonatomic) BOOL allowLiveInteraction;                                              //@synthesize allowLiveInteraction=_allowLiveInteraction - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                        //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) PKController * drawingController;                                     //@synthesize drawingController=_drawingController - In the implementation block
@property (assign,nonatomic,__weak) id undoTarget;                                                   //@synthesize undoTarget=_undoTarget - In the implementation block
@property (assign,nonatomic) SEL undoSelector;                                                       //@synthesize undoSelector=_undoSelector - In the implementation block
@property (assign,nonatomic) double minimumZoomScale;                                                //@synthesize minimumZoomScale=_minimumZoomScale - In the implementation block
@property (assign,nonatomic) double maximumZoomScale;                                                //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) BOOL shouldPause;                                                       //@synthesize shouldPause=_shouldPause - In the implementation block
@property (assign) double drawingStartTimestamp;                                                     //@synthesize drawingStartTimestamp=_drawingStartTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setupDefaults;
+(void)initialize;
-(void)setPinchGestureRecognizer:(PKFreeTransformGestureRecognizer *)arg1 ;
-(void)performUndo:(id)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)imageTransform;
-(void)setAllowLiveInteraction:(BOOL)arg1 ;
-(void)setNeedsDrawingDisplay;
-(CGAffineTransform)strokeTransform;
-(PKDrawing *)drawing;
-(void)drawingChanged:(id)arg1 ;
-(PKInk *)ink;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(void)setInk:(PKInk *)arg1 ;
-(void)setUndoTarget:(id)arg1 ;
-(void)setUndoSelector:(SEL)arg1 ;
-(PKDrawingGestureRecognizer *)drawingGestureRecognizer;
-(BOOL)isDrawing;
-(void)performUndoModifyStrokesCommand:(id)arg1 ;
-(void)performUndoSelectionCommand:(id)arg1 ;
-(double)layerContentScale;
-(void)setStrokeTransform:(CGAffineTransform)arg1 ;
-(CGRect)visibleOnscreenBoundsForDrawing:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 editable:(BOOL)arg2 pixelSize:(CGSize)arg3 drawingScale:(double)arg4 layerFixedPixelSize:(BOOL)arg5 selectionController:(id)arg6 ;
-(void)setDrawingSize:(CGSize)arg1 ;
-(void)setupFullScreenTransform;
-(CGSize)drawingSize;
-(void)resizeBackingBuffersForPixelSize:(CGSize)arg1 drawingScale:(double)arg2 ;
-(void)setDrawing:(id)arg1 image:(id)arg2 imageDrawing:(id)arg3 completion:(/*^block*/id)arg4 fullyRenderedCompletionBlock:(/*^block*/id)arg5 ;
-(BOOL)isRendering;
-(void)setDisableWideGamut:(BOOL)arg1 ;
-(BOOL)disableWideGamut;
-(void)drawStrokeWithPath:(CGPathRef)arg1 ;
-(void)drawStrokeWithPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)eraseAll;
-(PKController *)drawingController;
-(void)_drawingDisplay:(double)arg1 ;
-(id)undoTarget;
-(SEL)undoSelector;
-(void)simulateHIDPoints:(id)arg1 ;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 ;
-(void)replaceWithStrokesFromDrawing:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(void)setIsDrawing:(BOOL)arg1 ;
-(void)drawingCancelled;
-(void)setupViewWithPixelSize:(CGSize)arg1 drawingSize:(CGSize)arg2 ;
-(void)setupMetalViewForWideGamut:(BOOL)arg1 withPixelSize:(CGSize)arg2 ;
-(void)setupOpenGLViewForWideGamut:(BOOL)arg1 withPixelSize:(CGSize)arg2 ;
-(void)adjustedPixelSize:(CGSize*)arg1 drawingSize:(CGSize*)arg2 ;
-(PKMetalView *)metalView;
-(void)handleDrawingShouldPause:(BOOL)arg1 ;
-(double)drawingStartTimestamp;
-(PKOpenGLESView *)glView;
-(void)delayCompletionBlockUntilPresentation:(/*^block*/id)arg1 ;
-(void)setDrawingStartTimestamp:(double)arg1 ;
-(SCD_Struct_PK6)drawingInputPoint:(CGPoint)arg1 forTouch:(id)arg2 predicted:(BOOL)arg3 ;
-(void)registerUndoForStroke:(id)arg1 ;
-(void)eraseStrokesForPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2 ;
-(void)dismissEditMenuIfNecessary;
-(BOOL)_isLassoAddingSpace:(id)arg1 ;
-(void)_closeLassoForTouch:(id)arg1 ;
-(void)_addSpaceBelowDrawingForStroke:(id)arg1 touch:(id)arg2 ;
-(void)selectionBegan:(id)arg1 ;
-(void)toggleEditMenuAtLocation:(CGPoint)arg1 ;
-(void)drawingBegan:(id)arg1 ;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)drawingEnded:(id)arg1 ;
-(void)drawingEstimatedPropertiesUpdated:(id)arg1 ;
-(void)setDrawingGestureRecognizer:(PKDrawingGestureRecognizer *)arg1 ;
-(BOOL)allowLiveInteraction;
-(void)pinchGesture:(id)arg1 ;
-(void)updateZoomScaleCaps;
-(void)setImageTransform:(CGAffineTransform)arg1 animated:(BOOL)arg2 ;
-(BOOL)layerFixedPixelSize;
-(void)_rebuildMetalView;
-(NSTimer *)imageTransformTimer;
-(void)setImageTransformTimer:(NSTimer *)arg1 ;
-(CGAffineTransform)scaledStrokeTransform;
-(CGAffineTransform)fitTransform;
-(void)setupFullScreenTransform:(CGAffineTransform)arg1 toViewOrientation:(CGAffineTransform)arg2 animated:(BOOL)arg3 ;
-(void)rotateIfNeeded;
-(void)setImageTransformFrom:(CGAffineTransform)arg1 toTransform:(CGAffineTransform)arg2 animated:(BOOL)arg3 duration:(double)arg4 ;
-(BOOL)enableUserActionButton;
-(BOOL)canPerformUserAction;
-(void)updateImageTransform:(id)arg1 ;
-(long long)cachedOrientation;
-(CGAffineTransform)fitTransformForOrientation:(long long)arg1 ;
-(void)setCachedOrientation:(long long)arg1 ;
-(void)eraseStrokesForPoint:(CGPoint)arg1 ;
-(void)postDrawingBeganAnnouncementFor:(id)arg1 ;
-(void)_didFinishErasingStrokes;
-(void)_handleSelectionForTouch:(id)arg1 stroke:(id)arg2 drawing:(id)arg3 ;
-(void)postDrawingEndedAnnouncementFor:(id)arg1 ;
-(double)offsetForCenteringRangeMin:(double)arg1 size:(double)arg2 inSize:(double)arg3 ;
-(CGAffineTransform)pinchStartAffineTransform;
-(CGPoint)translationOffsetForTransform:(CGAffineTransform)arg1 ;
-(void)setPinchingFromSmallestState:(BOOL)arg1 ;
-(void)setPinchStartAffineTransform:(CGAffineTransform)arg1 ;
-(void)setPinchValid:(BOOL)arg1 ;
-(void)setZooming:(BOOL)arg1 ;
-(BOOL)pinchValid;
-(CGAffineTransform)pinchTransform:(id)arg1 elasticity:(double)arg2 ;
-(id)pkaxMetalView;
-(void)drawNowIfNeeded;
-(BOOL)canEraseAll;
-(void)rotate:(id)arg1 ;
-(void)cancelNonDrawingGestures;
-(void)setIsDrawingForRecap:(BOOL)arg1 ;
-(void)setDisplayLinkPaused:(BOOL)arg1 ;
-(double)initialDrawingBoundsYOrigin;
-(void)setInitialDrawingBoundsYOrigin:(double)arg1 ;
-(BOOL)pinchingFromSmallestState;
-(BOOL)fullySetup;
-(void)setFullySetup:(BOOL)arg1 ;
-(BOOL)didCancelSelection;
-(void)setDidCancelSelection:(BOOL)arg1 ;
-(void)setLayerFixedPixelSize:(BOOL)arg1 ;
-(id)pkaxOpenGLView;
-(void)drawingBeganForHIDPoint:(id)arg1 ;
-(void)drawingMovedForHIDPoint:(id)arg1 ;
-(void)drawingEndedForHIDPoint:(id)arg1 ;
-(SCD_Struct_PK6)drawingInputPoint:(CGPoint)arg1 forHIDEvent:(id)arg2 predicted:(BOOL)arg3 ;
-(void)setShouldPause:(BOOL)arg1 ;
-(void)setupGestures;
-(void)duplicate:(id)arg1 ;
-(BOOL)zooming;
-(BOOL)shouldPause;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityElementsHidden;
-(id)accessibilityElements;
-(void)setDelegate:(id<PKInternalDrawingViewDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id<PKInternalDrawingViewDelegate>)delegate;
-(void)setOpaque:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)didMoveToWindow;
-(void)setBackgroundImage:(CGImageRef)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(BOOL)isEditable;
-(void)setupDisplayLink;
-(void)done;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)minimumZoomScale;
-(double)maximumZoomScale;
-(void)delete:(id)arg1 ;
-(BOOL)canUndo;
-(BOOL)canRedo;
-(PKSelectionController *)selectionController;
-(PKFreeTransformGestureRecognizer *)pinchGestureRecognizer;
@end

