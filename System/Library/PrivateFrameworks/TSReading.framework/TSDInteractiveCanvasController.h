/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDCanvasDelegate.h>
#import <TSReading/TSDErrorPresenter.h>
#import <TSReading/TSDModalOperationPresenter.h>
#import <TSReading/TSKChangeSourceObserver.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <TSReading/TSKScrollViewDelegate.h>
#import <TSReading/TSDBackgroundLayoutAndRenderStateDelegate.h>
#import <TSReading/TSDRepTrackerDelegateCreation.h>
#import <TSReading/TSDTilingLayerDelegate.h>

@protocol TSDInteractiveCanvasControllerDelegate, TSDCanvasLayerHosting, TSDCanvasEditor, TSDRulerController, TSDEditor, TSDImageHUDController, TSDAnnotationHosting, TSDAnnotationPopoverController, TSDRepDirectLayerHostProvider;
@class TSDCanvas, CALayer, TSDEditorController, TSDGuideController, NSObject, TSDTextInputResponder, NSFormatter, NSMutableArray, TSDCanvasAnimation, TSDTrackerManipulatorCoordinator, TSDDynamicOperationController, TSDGestureDispatcher, TSDBackgroundLayoutAndRenderState, NSMutableSet, NSArray, TSDTileStorage, TSDDisplayLinkDispatch, NSRecursiveLock, TSDTrackingController, NSSet, TSKDocumentRoot, TSPObjectContext, TSKChangeNotifier, TSKAccessController, TSDContainerRep, TSDCanvasView, TSDCanvasLayer, TSDGuideStorage, TSDLayoutController, NSString;

@interface TSDInteractiveCanvasController : NSObject <TSDCanvasDelegate, TSDErrorPresenter, TSDModalOperationPresenter, TSKChangeSourceObserver, NSCoding, TSKScrollViewDelegate, TSDBackgroundLayoutAndRenderStateDelegate, TSDRepTrackerDelegateCreation, TSDTilingLayerDelegate> {

	id<TSDInteractiveCanvasControllerDelegate> mDelegate;
	TSDCanvas* mCanvas;
	id<TSDCanvasLayerHosting> mLayerHost;
	CFDictionaryRef mContainerLayersByRep;
	CFDictionaryRef mRepLayersByRep;
	CFDictionaryRef mRepsByRepLayer;
	CFDictionaryRef mRepsByContainerLayer;
	CFDictionaryRef mDirectLayerHostsByRep;
	CALayer* mRepContainerLayer;
	TSDEditorController* mEditorController;
	TSDGuideController* mGuideController;
	NSObject*<TSDCanvasEditor> mCanvasEditor;
	BOOL mHasBeenTornDown;
	BOOL mHadLayerHost;
	BOOL mLayerHostHasBeenTornDown;
	TSDTextInputResponder* mTextInputResponder;
	TSDInteractiveCanvasController* mTextInputResponderSource;
	unsigned long long mTextInputResponderShareCount;
	NSFormatter* mUnitFormatter;
	BOOL mResizeCanvasOnLayout;
	BOOL mCreateRepsForOffscreenLayouts;
	BOOL mShouldAutoscrollToSelectionAfterLayout;
	BOOL mSuppressAutozoomToSelectionAfterLayout;
	BOOL mShouldAnimateAutoscroll;
	BOOL mShouldCenterSelectionWhenAutoscrolling;
	CALayer* mOverlayLayer;
	BOOL mOverlayLayerSuppressed;
	CALayer* mPopoutLayer;
	NSMutableArray* mDecorators;
	BOOL mShowGrayOverlay;
	BOOL mInDynamicOperation;
	int mDynamicOperationCounter;
	BOOL mInReadMode;
	BOOL mInVersionBrowsingMode;
	CGColorRef mSelectionHighlightColor;
	BOOL mShowInvisibleObjects;
	TSDCanvasAnimation* mCurrentAnimation;
	TSDTrackerManipulatorCoordinator* mTMCoordinator;
	TSDDynamicOperationController* mDynOpController;
	NSObject*<TSDRulerController> mRulerController;
	TSDGestureDispatcher* mGestureDispatcher;
	BOOL mInspectorModeEnabled;
	NSMutableArray* mInspectorGestureRecognizersToReenable;
	/*^block*/id mInspectorSingleTapBlock;
	CGPoint mLastTapPoint;
	CGRect mVisibleBoundsRectForTiling;
	CGRect mVisibleUnscaledRect;
	CGRect mUnobscuredScrollViewFrame;
	TSDBackgroundLayoutAndRenderState* mBackgroundLayoutAndRenderState;
	BOOL mStaticLayoutAndRenderOnThread;
	BOOL mLayoutAndRenderOnThreadDuringScroll;
	BOOL mNestedCanvasAllowLayoutAndRenderOnThread;
	BOOL mTemporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
	BOOL mCurrentlyScrolling;
	BOOL mAnimatingScroll;
	BOOL mSuppressedAutozoom;
	BOOL mTextGesturesInFlight;
	BOOL _orbTextGesturesInFlight;
	id<TSDEditor> mSelectionChangeNotificationDeferredEditor;
	BOOL mShouldAutoscrollToSelectionAfterGestures;
	BOOL mSuspendedLowPriorityThreadDispatcher;
	BOOL mCurrentlyWaitingOnThreadedLayoutAndRender;
	int mDisableThreadedLayoutAndRender;
	unsigned mEmbeddedCanvasScrolling;
	NSMutableArray* mHiddenTopLevelLayers;
	BOOL mShouldSuppressRendering;
	BOOL mSupportsBackgroundTileRendering;
	NSMutableSet* mNotificationsToPostWithValidLayouts;
	NSArray* mLayersWithZoomFadeAnimation;
	BOOL mDynamicallyZooming;
	double mDynamicViewScale;
	BOOL mUsesAlternateDrawableSelectionHighlight;
	double mTargetPointSize;
	BOOL mAnimatingViewScale;
	BOOL mSuppressingKeyboard;
	NSObject*<TSDImageHUDController> mImageHUDController;
	long long mImageHUDLock;
	NSObject*<TSDImageHUDController> mIAHUDController;
	long long mIAHUDLock;
	BOOL mIgnoreContentOffsetChanges;
	TSDTileStorage* mTileStorage;
	CGPoint mZoomCenterInBounds;
	NSMutableArray* mBackgroundRenderingObjects;
	id<TSDAnnotationHosting> mDisplayedAnnotation;
	id<TSDAnnotationPopoverController> mAnnotationPopoverController;
	BOOL mShouldClipThemeContentToCanvas;
	NSMutableArray* mNextLayoutBlocks;
	BOOL mShowUserDefinedGuides;
	BOOL mTeardownOnBackgroundThread;
	TSDDisplayLinkDispatch* mDisplayLinkDispatch;
	BOOL mRepViewsNeedUpdating;
	NSRecursiveLock* mSelfSync;
	BOOL mPreventSettingNilEditorOnTextResponder;
	BOOL mForceTilingLayoutOnThreadWhenScrolling;
	id<TSDRepDirectLayerHostProvider> _directLayerHostProvider;
	TSDTrackingController* mTrackingController;
	NSSet* mCachedTopLevelTilingLayers;

}

@property (nonatomic,readonly) SCD_Struct_TS69 screenTopContentPlacement; 
@property (nonatomic,readonly) SCD_Struct_TS69 screenBottomContentPlacement; 
@property (nonatomic,readonly) SCD_Struct_TS69 touchContentPlacement; 
@property (nonatomic,readonly) SCD_Struct_TS69 centerPlusMovementContentPlacement; 
@property (assign) CGRect p_visibleBoundsRectForTiling; 
@property (assign) CGRect p_visibleUnscaledRect; 
@property (copy) NSSet * p_cachedTopLevelTilingLayers; 
@property (assign,nonatomic) CGRect unobscuredScrollViewFrame; 
@property (nonatomic,retain) id<TSDRepDirectLayerHostProvider> directLayerHostProvider;                        //@synthesize directLayerHostProvider=_directLayerHostProvider - In the implementation block
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (assign,nonatomic) id<TSDCanvasLayerHosting> layerHost; 
@property (assign,nonatomic) id<TSDInteractiveCanvasControllerDelegate> delegate; 
@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (nonatomic,readonly) id<TSKDocumentRootProvider> documentRootProvider; 
@property (nonatomic,readonly) TSPObjectContext * objectContext; 
@property (nonatomic,readonly) TSKChangeNotifier * changeNotifier; 
@property (nonatomic,readonly) TSKAccessController * accessController; 
@property (assign,nonatomic) BOOL resizeCanvasOnLayout; 
@property (nonatomic,readonly) CGSize defaultMinimumUnscaledCanvasSize; 
@property (assign,nonatomic) NSObject*<TSDRulerController> rulerController; 
@property (nonatomic,readonly) TSDContainerRep * topLevelContainerRepForEditing; 
@property (nonatomic,readonly) BOOL inspectorModeEnabled; 
@property (nonatomic,readonly) BOOL animatingViewScale; 
@property (nonatomic,readonly) TSDEditorController * editorController; 
@property (nonatomic,readonly) TSDTextInputResponder * textInputResponder; 
@property (assign,nonatomic) BOOL preventSettingNilEditorOnTextResponder; 
@property (nonatomic,retain) NSObject*<TSDCanvasEditor> canvasEditor; 
@property (assign,nonatomic) BOOL createRepsForOffscreenLayouts; 
@property (assign,nonatomic) BOOL allowLayoutAndRenderOnThread; 
@property (assign,nonatomic) BOOL nestedCanvasAllowLayoutAndRenderOnThread; 
@property (assign,nonatomic) BOOL forceTilingLayoutOnThreadWhenScrolling; 
@property (assign,nonatomic) BOOL staticLayoutAndRenderOnThread; 
@property (nonatomic,readonly) BOOL currentlyWaitingOnThreadedLayoutAndRender; 
@property (nonatomic,readonly) BOOL currentlyScrolling; 
@property (assign,nonatomic) BOOL shouldAutoscrollToSelectionAfterLayout; 
@property (assign,nonatomic) BOOL suppressAutozoomToSelectionAfterLayout; 
@property (assign,nonatomic) BOOL textGesturesInFlight; 
@property (assign,nonatomic) BOOL orbTextGesturesInFlight;                                                     //@synthesize orbTextGesturesInFlight=_orbTextGesturesInFlight - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressRendering; 
@property (nonatomic,readonly) TSDCanvasView * canvasView; 
@property (nonatomic,readonly) TSDCanvasLayer * canvasLayer; 
@property (nonatomic,readonly) double defaultViewScale; 
@property (assign,nonatomic) double viewScale; 
@property (nonatomic,readonly) double currentViewScale; 
@property (nonatomic,readonly) double fitWidthViewScale; 
@property (nonatomic,readonly) CGSize canvasScrollingOutset; 
@property (nonatomic,readonly) CGSize sizeOfScrollViewEnclosingCanvas; 
@property (assign,nonatomic) BOOL shouldClipThemeContentToCanvas; 
@property (assign,nonatomic) BOOL shouldShowUserDefinedGuides; 
@property (nonatomic,readonly) TSDGuideStorage * guideStorage; 
@property (nonatomic,copy) NSArray * infosToDisplay; 
@property (assign,nonatomic) CGColorRef selectionHighlightColor; 
@property (nonatomic,readonly) CGRect visibleBoundsRect; 
@property (nonatomic,readonly) CGRect visibleBoundsRectClippedToWindow; 
@property (nonatomic,readonly) CGRect visibleBoundsRectForTiling; 
@property (nonatomic,readonly) CGRect visibleBoundsRectUsingSizeOfEnclosingScrollView; 
@property (nonatomic,readonly) CGRect visibleUnscaledRect; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectForCanvasUI; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectForAutoscroll; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectValidWhileZooming; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectForScrollingAutomatically; 
@property (nonatomic,readonly) TSDLayoutController * layoutController; 
@property (nonatomic,readonly) CALayer * repContainerLayer; 
@property (nonatomic,readonly) NSArray * additionalLayersUnderRepLayers; 
@property (nonatomic,readonly) NSArray * additionalLayersOverRepLayers; 
@property (assign,nonatomic) BOOL usesAlternateDrawableSelectionHighlight; 
@property (nonatomic,readonly) CALayer * overlayLayer; 
@property (assign,nonatomic) BOOL overlayLayerSuppressed; 
@property (assign,nonatomic) BOOL showGrayOverlay; 
@property (assign,nonatomic) BOOL showInvisibleObjects; 
@property (assign,nonatomic) BOOL showsComments; 
@property (nonatomic,retain,readonly) TSDDynamicOperationController * dynamicOperationController; 
@property (nonatomic,retain,readonly) TSDTrackerManipulatorCoordinator * tmCoordinator; 
@property (assign,nonatomic) BOOL inReadMode; 
@property (assign,nonatomic) BOOL inVersionBrowsingMode; 
@property (nonatomic,retain,readonly) TSDGestureDispatcher * gestureDispatcher; 
@property (assign,nonatomic) BOOL supportsBackgroundTileRendering; 
@property (assign,nonatomic) CGPoint lastTapPoint; 
@property (nonatomic,readonly) id canvasReferenceController; 
@property (nonatomic,retain) TSDTrackingController * trackingController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)selectorIsActionMethod:(SEL)arg1 ;
+(double)smallRepOutsetForHitTesting;
+(id)keyPathsForValuesAffectingDocumentRoot;
+(id)keyPathsForValuesAffectingEditorController;
+(id)keyPathsForValuesAffectingViewScale;
+(id)keyPathsForValuesAffectingCurrentViewScale;
-(id)gestureWithKind:(id)arg1 ;
-(void)disableAllGestures;
-(void)disableNormalGestures;
-(void)enableGestureKinds:(id)arg1 ;
-(void)disableGestureKinds:(id)arg1 ;
-(id)gestureRecognizerWithKind:(id)arg1 ;
-(CALayer *)overlayLayer;
-(TSKAccessController *)accessController;
-(TSKChangeNotifier *)changeNotifier;
-(TSKDocumentRoot *)documentRoot;
-(double)viewScale;
-(void)setViewScale:(double)arg1 ;
-(CGPoint)scrollView:(id)arg1 restrictContentOffset:(CGPoint)arg2 ;
-(void)scrollView:(id)arg1 willAnimateToContentOffset:(CGPoint)arg2 ;
-(void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(id<TSKDocumentRootProvider>)documentRootProvider;
-(void)backgroundLayoutAndRenderState:(id)arg1 performWorkInBackgroundTilingOnly:(BOOL)arg2 ;
-(BOOL)backgroundLayoutAndRenderState:(id)arg1 shouldDispatchBackgroundWork:(/*^block*/id)arg2 ;
-(void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(id)arg1 ;
-(void)p_commonInit;
-(void)p_rulerUnitsDidChangeNotification:(id)arg1 ;
-(void)p_iccWillBecomeFirstResponderNotification:(id)arg1 ;
-(void)p_iccWillResignFirstResponderNotification:(id)arg1 ;
-(void)p_textGesturesWillBeginNotification:(id)arg1 ;
-(void)p_textGesturesDidEndNotification:(id)arg1 ;
-(void)p_willEnterForeground:(id)arg1 ;
-(void)addCommonObservers;
-(void)setP_visibleBoundsRectForTiling:(CGRect)arg1 ;
-(void)setP_visibleUnscaledRect:(CGRect)arg1 ;
-(void)removeCommonObservers;
-(TSDEditorController *)editorController;
-(void)i_viewScrollingEnded;
-(void)i_syncWithLayoutThread;
-(void)teardownBackgroundRendering;
-(void)setTrackingController:(TSDTrackingController *)arg1 ;
-(void)teardownCanvasEditor;
-(TSDGestureDispatcher *)gestureDispatcher;
-(void)p_updateViewsFromRepsForceUpdate:(BOOL)arg1 ;
-(void)p_recursivelyClearLayerDelegate:(id)arg1 ;
-(TSDCanvasView *)canvasView;
-(BOOL)isPrinting;
-(BOOL)isCanvasInteractive;
-(TSDCanvasLayer *)canvasLayer;
-(void)p_postNotificationOnMainThreadWithValidLayouts:(id)arg1 ;
-(BOOL)resizeCanvasOnLayout;
-(void)p_updateCanvasSizeFromLayouts;
-(void)p_updateLayersFromReps;
-(void)p_updateViewsFromReps;
-(void)p_acquireLockAndPerformAction:(/*^block*/id)arg1 ;
-(TSDTrackingController *)trackingController;
-(CGRect)visibleBoundsRect;
-(NSObject*<TSDCanvasEditor>)canvasEditor;
-(TSDDynamicOperationController *)dynamicOperationController;
-(void)presentError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentErrors:(id)arg1 withLocalizedDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)p_editorControllerDidChangeTextInputEditor:(id)arg1 ;
-(void)p_editorControllerDidChangeCurrentEditors:(id)arg1 ;
-(void)p_editorControllerSelectionDidChange:(id)arg1 ;
-(void)p_editorControllerSelectionDidChangeAndWantsKeyboard:(id)arg1 ;
-(id)newCanvasEditor;
-(void)p_layoutWithReadLock;
-(id)repForInfo:(id)arg1 ;
-(id)beginEditingRep:(id)arg1 ;
-(BOOL)p_endEditingToBeginEditingRep:(id)arg1 ;
-(id)beginEditingRep:(id)arg1 clearingSelection:(BOOL)arg2 withEditorProvider:(/*^block*/id)arg3 ;
-(id)layoutForInfo:(id)arg1 ;
-(void)zoomWithAnimationToUnscaledRect:(CGRect)arg1 ;
-(CGRect)visibleUnscaledRect;
-(id)beginEditingRepForInfo:(id)arg1 ;
-(id)infoForModel:(id)arg1 withSelection:(id)arg2 ;
-(void)scrollToSelection:(id)arg1 onModel:(id)arg2 ;
-(void)p_scrollModelToVisible:(id)arg1 withSelection:(id)arg2 ;
-(id)infoToScrollToForModel:(id)arg1 withSelection:(id)arg2 ;
-(id)layoutForInfoNearestVisibleRect:(id)arg1 intersectingSelection:(id)arg2 ;
-(id)validatedLayoutForInfo:(id)arg1 ;
-(void)scrollRectToVisibleWithSelectionOutset:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)layoutInvalidated;
-(id)p_setSelection:(id)arg1 onInfo:(id)arg2 withFlags:(unsigned long long)arg3 ;
-(void)scrollToSelection:(id)arg1 onModel:(id)arg2 scrollImmediately:(BOOL)arg3 ;
-(CGRect)scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2 ;
-(void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(BOOL)arg3 focusRect:(CGRect)arg4 scrollImmediately:(BOOL)arg5 skipZoom:(BOOL)arg6 ;
-(void)p_scrollToPrimarySelectionForEditor:(id)arg1 skipZoom:(BOOL)arg2 ;
-(void)scrollToPrimarySelectionForEditor:(id)arg1 ;
-(void)invalidateReps;
-(BOOL)p_currentlyScrolling;
-(id)p_backgroundLayoutAndRenderState;
-(void)invalidateVisibleBounds;
-(void)invalidateLayers;
-(void)setShouldSuppressRendering:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)p_currentlyScrollingIncludeEmbeddedCanvasScrolling:(BOOL)arg1 ;
-(void)p_maybeSetTextResponderEditorTo:(id)arg1 ;
-(void)p_editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned long long)arg2 ;
-(void)p_editorDoneChangingSelection:(id)arg1 withFlags:(unsigned long long)arg2 ;
-(void)p_editorDoneChangingSelection:(id)arg1 ;
-(BOOL)shouldResizeCanvasToScrollView;
-(void)setViewScale:(double)arg1 contentOffset:(CGPoint)arg2 clampOffset:(BOOL)arg3 animationDuration:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)setViewScale:(double)arg1 contentOffset:(CGPoint)arg2 clampOffset:(BOOL)arg3 animationDuration:(double)arg4 forceAnimation:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(CGPoint)clampedUnscaledContentOffset:(CGPoint)arg1 forViewScale:(double)arg2 ;
-(void)animateToViewScale:(double)arg1 contentOffset:(CGPoint)arg2 duration:(double)arg3 forceAnimation:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)p_applyViewScale:(double)arg1 andContentOffset:(CGPoint)arg2 ;
-(CGPoint)clampedUnscaledContentOffset:(CGPoint)arg1 forViewScale:(double)arg2 scrollViewBoundsSize:(CGSize)arg3 ;
-(void)setViewScale:(double)arg1 andScrollViewFrame:(CGRect)arg2 maintainPosition:(BOOL)arg3 animated:(BOOL)arg4 ;
-(CGRect)unobscuredFrameOfView:(id)arg1 ;
-(void)setUnobscuredScrollViewFrame:(CGRect)arg1 ;
-(BOOL)wantsUpdatedScrollIndicatorInsets;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(CGRect)unobscuredScrollViewFrame;
-(CGRect)visibleUnscaledRectForScrollingAutomatically;
-(CGRect)p_outsetSelectionRect:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 clamp:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setContentOffset:(CGPoint)arg1 clamp:(BOOL)arg2 animated:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(CGPoint)convertUnscaledToBoundsPoint:(CGPoint)arg1 ;
-(CGPoint)convertBoundsToUnscaledPoint:(CGPoint)arg1 ;
-(double)viewScaleForZoomToFitRect:(CGRect)arg1 outset:(BOOL)arg2 fitWidthOnly:(BOOL)arg3 ;
-(void)setViewScale:(double)arg1 contentOffset:(CGPoint)arg2 clampOffset:(BOOL)arg3 animated:(BOOL)arg4 ;
-(CGSize)sizeOfScrollViewEnclosingCanvas;
-(CGColorRef)newDefaultSelectionHighlightColor;
-(void)i_invalidateSelectionHighlightLayers;
-(NSObject*<TSDRulerController>)rulerController;
-(BOOL)spellCheckingSupported;
-(BOOL)spellCheckingSuppressed;
-(BOOL)isPrintingCanvas;
-(BOOL)shouldShowTextOverflowGlyphs;
-(BOOL)shouldShowInstructionalText;
-(void)p_invalidateForBackgroundLayout;
-(BOOL)shouldShowUserDefinedGuides;
-(void)setShouldShowUserDefinedGuides:(BOOL)arg1 ;
-(NSArray *)infosToDisplay;
-(BOOL)p_shouldLayoutAndRenderOnThread;
-(id)layoutsForInfo:(id)arg1 ;
-(id)repForLayout:(id)arg1 ;
-(void)i_layout;
-(id)repForInfo:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)p_repForLayout:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)recreateAllLayoutsAndReps;
-(CGRect)p_visibleBoundsRectUsingSizeOfEnclosingScrollView:(BOOL)arg1 ;
-(CGRect)p_visibleBoundsRectForTiling;
-(CGRect)p_calculateVisibleBoundsRectForTiling;
-(CGRect)p_visibleUnscaledRect;
-(CGRect)p_calculateVisibleUnscaledRect;
-(CGRect)convertBoundsToUnscaledRect:(CGRect)arg1 ;
-(id)unitFormatter;
-(id)unitStringForAngle:(double)arg1 ;
-(void)performBlockNextFrame:(/*^block*/id)arg1 ;
-(id)topLevelRepsForHitTesting;
-(TSDContainerRep *)topLevelContainerRepForEditing;
-(id)hitRep:(CGPoint)arg1 withGesture:(id)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)p_recursiveHitKnobAtPoint:(CGPoint)arg1 inRep:(id)arg2 minDistance:(double*)arg3 hitKnob:(id*)arg4 hitRep:(id*)arg5 ;
-(TSDLayoutController *)layoutController;
-(id)layoutsForModel:(id)arg1 withSelection:(id)arg2 ;
-(id)layoutsForInfo:(id)arg1 intersectingSelection:(id)arg2 ;
-(BOOL)shouldPopKnobsOutsideEnclosingScrollView;
-(BOOL)showsComments;
-(void)setShowsComments:(BOOL)arg1 ;
-(BOOL)i_inPrintPreviewMode;
-(void)invalidateComments;
-(BOOL)hasAnnotations;
-(id)p_decorators;
-(id)hitRep:(CGPoint)arg1 ;
-(void)updateSelectionForTapOnSelectedRep:(id)arg1 ;
-(BOOL)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)updateSelectionForTapAtPoint:(CGPoint)arg1 extendingSelection:(BOOL)arg2 ;
-(BOOL)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(void)tappedCanvasBackgroundAtPoint:(CGPoint)arg1 ;
-(BOOL)currentlyScrolling;
-(void)p_drawLayerWithReadLock:(id)arg1 ;
-(CGRect)visibleBoundsRectForTiling;
-(BOOL)supportsBackgroundTileRendering;
-(BOOL)canDrawTilingLayerInBackground:(id)arg1 ;
-(void)didLayoutAndRenderOnThread;
-(void)p_viewScrollingEnded;
-(void)i_viewScrollDidChange;
-(void)p_invalidateTilingLayers;
-(void)i_viewScrollWillChange;
-(void)beginScrollingOperation;
-(void)p_scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)i_needsLayout;
-(id)repsForInfo:(id)arg1 ;
-(void)makeEditorPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)deselectAll:(id)arg1 ;
-(void)changeFirstResponderIfNecessary;
-(BOOL)keyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges;
-(void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3 ;
-(void)p_beginZoomingOperation;
-(void)p_endZoomingOperation;
-(void)endScrollingOperation;
-(void)p_setTargetPointSize:(double)arg1 ;
-(void)setNeedsDisplayOnLayer:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 onLayer:(id)arg2 ;
-(NSSet *)p_cachedTopLevelTilingLayers;
-(void)setP_cachedTopLevelTilingLayers:(NSSet *)arg1 ;
-(CGSize)defaultMinimumUnscaledCanvasSize;
-(CGSize)canvasScrollingOutset;
-(BOOL)isInDynamicOperation;
-(BOOL)p_allowUpdateViewsFromReps;
-(NSArray *)additionalLayersUnderRepLayers;
-(id)layerForRep:(id)arg1 ;
-(void)p_recursivelyUpdateLayerForRep:(id)arg1 accumulatingLayers:(id)arg2 andReps:(id)arg3 ;
-(BOOL)shouldClipThemeContentToCanvas;
-(void)p_discardLayer:(id)arg1 forRep:(id)arg2 ;
-(void)p_discardContainerLayer:(id)arg1 forRep:(id)arg2 ;
-(void)p_setupPopoutLayerForReps:(id)arg1 ;
-(BOOL)overlayLayerSuppressed;
-(id)p_overlayLayerForReps:(id)arg1 ;
-(NSArray *)additionalLayersOverRepLayers;
-(void)p_recursivelyUpdateLayerEdgeAntialiasingForLayer:(id)arg1 ;
-(void)i_drawRepWithReadLock:(id)arg1 inContext:(CGContextRef)arg2 forLayer:(id)arg3 ;
-(BOOL)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(BOOL)arg1 ;
-(void)invalidateVisibleBoundsInBackground;
-(void)scrollToPrimarySelection;
-(BOOL)p_shouldSuppressAutozoomForEditor:(id)arg1 ;
-(id)layoutForInfoNearestVisibleRect:(id)arg1 ;
-(BOOL)shouldZoomOnSelectionChange;
-(double)p_targetPointSize;
-(double)fitWidthViewScale;
-(CGRect)visibleUnscaledRectForAutoscroll;
-(BOOL)p_centerOnInitialSelection;
-(void)scrollRectToVisibleCenter:(CGRect)arg1 animated:(BOOL)arg2 onlyScrollNecessaryAxes:(BOOL)arg3 ;
-(void)animateToViewScale:(double)arg1 contentOffset:(CGPoint)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)i_viewWillBeginZooming;
-(void)viewDidEndZooming;
-(void)doubleTappedCanvasBackgroundAtPoint:(CGPoint)arg1 ;
-(CALayer *)repContainerLayer;
-(void)canvasLayoutInvalidated:(id)arg1 ;
-(void)canvasWillLayout:(id)arg1 ;
-(void)canvasDidValidateLayouts:(id)arg1 ;
-(void)canvasDidLayout:(id)arg1 ;
-(void)canvasDidValidateLayoutsWithDependencies:(id)arg1 ;
-(void)canvasDidUpdateVisibleBounds:(id)arg1 ;
-(void)canvasWillUpdateRepsFromLayouts:(id)arg1 ;
-(void)canvasDidUpdateRepsFromLayouts:(id)arg1 ;
-(CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1 ;
-(id)additionalVisibleInfosForCanvas:(id)arg1 ;
-(void)canvas:(id)arg1 willLayoutRep:(id)arg2 ;
-(void)canvas:(id)arg1 createdRep:(id)arg2 ;
-(id)canvas:(id)arg1 layoutGeometryProviderForLayout:(id)arg2 ;
-(BOOL)shouldLayoutTilingLayer:(id)arg1 ;
-(CGRect)visibleBoundsForTilingLayer:(id)arg1 ;
-(id)queueForDrawingTilingLayerInBackground:(id)arg1 ;
-(BOOL)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3 ;
-(void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2 ;
-(BOOL)mustDrawTilingLayerOnMainThread:(id)arg1 ;
-(void)i_layerHostHasBeenTornDown;
-(void)setLayerHost:(id<TSDCanvasLayerHosting>)arg1 ;
-(void)i_cvcWillBecomeFirstResponder;
-(void)i_cvcWillResignFirstResponder;
-(void)addBackgroundRenderingObject:(id)arg1 ;
-(void)removeBackgroundRenderingObject:(id)arg1 ;
-(TSPObjectContext *)objectContext;
-(BOOL)canZoomToCurrentSelection;
-(CGPoint)smartZoomCenterForNoSelection;
-(void)zoomToCurrentSelection;
-(void)scrollCurrentSelectionToVisible;
-(void)scrollSearchReferenceToVisible:(id)arg1 ;
-(void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3 ;
-(void)invalidateRepsIfSynced;
-(void)invalidateRepsInBackground;
-(void)invalidateLayoutInBackground:(id)arg1 ;
-(void)setShouldSuppressRendering:(BOOL)arg1 ;
-(void)setAllowLayoutAndRenderOnThread:(BOOL)arg1 ;
-(void)setStaticLayoutAndRenderOnThread:(BOOL)arg1 ;
-(void)setKeyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges:(BOOL)arg1 ;
-(void)reuseTextInputResponderFrom:(id)arg1 ;
-(void)resumeEditing;
-(BOOL)canvasViewShouldBecomeFirstResponder:(id)arg1 ;
-(double)defaultViewScale;
-(double)currentViewScale;
-(CGRect)canvasViewBoundsWithBounds:(CGRect)arg1 ;
-(void)setViewScale:(double)arg1 andScrollViewFrame:(CGRect)arg2 animated:(BOOL)arg3 ;
-(void)unobscuredFrameDidChange;
-(BOOL)zoomToFitRect:(CGRect)arg1 outset:(BOOL)arg2 fitWidthOnly:(BOOL)arg3 centerHorizontally:(BOOL)arg4 centerVertically:(BOOL)arg5 animated:(BOOL)arg6 ;
-(void)displayRulerWithSlowFade:(BOOL)arg1 ;
-(void)displayRulerForRect:(CGRect)arg1 ;
-(void)hideRuler;
-(id)replaceImageController;
-(CGRect)visibleUnscaledRectForCanvasUI;
-(void)pushThreadedLayoutAndRenderDisabled;
-(void)popThreadedLayoutAndRenderDisabled;
-(void)embeddedCanvasWillBeginScrolling;
-(void)embeddedCanvasDidEndScrolling;
-(void)forceStopScrolling;
-(void)forceBackgroundLayout;
-(void)toggleShouldShowUserDefinedGuides;
-(void)makeUserDefinedGuidesVisible;
-(TSDGuideStorage *)guideStorage;
-(id)infosForGuides;
-(CGRect)boundingRectForActiveGuidesForRect:(CGRect)arg1 ;
-(id)provideDynamicGuides;
-(id)provideUserDefinedGuides;
-(id)localizedPercentStringForAlignmentGuide:(id)arg1 ;
-(void)setInfosToDisplay:(NSArray *)arg1 ;
-(id)topLevelZOrderedSiblingsOfInfos:(id)arg1 ;
-(id)containerLayerForRep:(id)arg1 ;
-(id)repForLayer:(id)arg1 ;
-(id)repForContainerLayer:(id)arg1 ;
-(void)discardRepForClassChange:(id)arg1 ;
-(CGRect)visibleBoundsRectUsingSizeOfEnclosingScrollView;
-(CGRect)visibleBoundsRectClippedToWindow;
-(CGRect)visibleUnscaledRectValidWhileZooming;
-(BOOL)allowAutoscroll;
-(BOOL)allowNegativeAutoscroll;
-(CGSize)convertUnscaledToBoundsSize:(CGSize)arg1 ;
-(CGSize)convertBoundsToUnscaledSize:(CGSize)arg1 ;
-(CGSize)growUnscaledCanvasLayerSize:(CGSize)arg1 ;
-(id)unitStringForPoint:(CGPoint)arg1 ;
-(id)unitStringForSize:(CGSize)arg1 ;
-(id)unitStringForNumber:(double)arg1 ;
-(id)unitStringForAngle:(double)arg1 andLength:(double)arg2 ;
-(id)ancestorRepOfRep:(id)arg1 orDelegateConformingToProtocol:(id)arg2 ;
-(id)topLevelRepsForDragSelecting;
-(id)hitRepsAtPoint:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(id)hitKnobAtPoint:(CGPoint)arg1 returningRep:(id*)arg2 ;
-(id)layoutForModel:(id)arg1 withSelection:(id)arg2 ;
-(void)performBlockAfterNextLayout:(/*^block*/id)arg1 ;
-(BOOL)shouldEverShowPathHighlightOnInvisibleShapes;
-(BOOL)shouldShowPathHighlightOnUnselectedInvisibleShapes;
-(int)defaultKnobTypeForRep:(id)arg1 ;
-(BOOL)shouldShowOnRepHyperlinkUI;
-(id)actionGhostKnobForRep:(id)arg1 ;
-(void)setOverlayLayerSuppressed:(BOOL)arg1 ;
-(void)closeOverlays;
-(void)addDecorator:(id)arg1 ;
-(void)removeDecorator:(id)arg1 ;
-(void)showOrHideComments:(id)arg1 ;
-(BOOL)shouldDisplayCommentUIForInfo:(id)arg1 ;
-(BOOL)attachedCommentsAllowedForDrawable:(id)arg1 ;
-(void)toggleHyperlinkUIForRep:(id)arg1 ;
-(void)actionGhostKnobHitForRep:(id)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)beginPossiblyParallelInspectorDynamicOperation;
-(void)endPossiblyParallelInspectorDynamicOperation;
-(BOOL)isInInspectorDynamicOperation;
-(void)setInReadMode:(BOOL)arg1 ;
-(BOOL)usesAlternateDrawableSelectionHighlight;
-(void)setUsesAlternateDrawableSelectionHighlight:(BOOL)arg1 ;
-(void)setShowInvisibleObjects:(BOOL)arg1 ;
-(TSDTrackerManipulatorCoordinator *)tmCoordinator;
-(id)hitRepChromeAtUnscaledPoint:(CGPoint)arg1 ;
-(id)gestureTargetStack:(id)arg1 ;
-(BOOL)selectionContainsOnlyInfosOnCanvas:(id)arg1 model:(id)arg2 ;
-(BOOL)shouldResampleImages;
-(BOOL)canPerformInteractiveAction:(SEL)arg1 withSender:(id)arg2 ;
-(double)animationBeginTime;
-(void)setAnimationFilterBlock:(/*^block*/id)arg1 ;
-(void)setAnimationUseRepFiltering:(BOOL)arg1 ;
-(void)i_layoutRegistered:(id)arg1 ;
-(void)i_layoutUnregistered:(id)arg1 ;
-(void)i_viewIsZoomingAtPoint:(CGPoint)arg1 ;
-(void)i_viewDidZoomToViewScale:(double)arg1 ;
-(void)i_canvasContentsScaleDidChange;
-(void)i_canvasWideGamutValueDidChange;
-(void)i_viewScaleDidChange;
-(double)i_viewScaleForProposedViewScale:(double)arg1 originalViewScale:(double)arg2 ;
-(CGSize)i_canvasCenterOffsetForProposedViewScale:(double)arg1 originalViewScale:(double)arg2 ;
-(double)i_adjustViewScale:(double)arg1 ;
-(double)i_nextCanvasViewScaleDetentForProposedViewScale:(double)arg1 greater:(BOOL)arg2 ;
-(void)i_recordUserViewScale;
-(void)i_repNeedsDisplay:(id)arg1 ;
-(void)i_repNeedsDisplay:(id)arg1 inRect:(CGRect)arg2 ;
-(id)i_tileStorage;
-(id)i_currentAnimation;
-(id)i_descriptionForViewScale:(double)arg1 ;
-(CGRect)i_clippingBoundsForScrollViewEnclosingCanvas;
-(id)i_topLevelLayersForTiling;
-(void)disableThreadedLayoutAndRender;
-(void)enableThreadedLayoutAndRender;
-(BOOL)i_temporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
-(void)p_guideColorChanged:(id)arg1 ;
-(void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(BOOL)arg3 focusRect:(CGRect)arg4 ;
-(void)animateToViewScale:(double)arg1 contentOffset:(CGPoint)arg2 duration:(double)arg3 ;
-(id)viewWithTransferredLayers;
-(CGPoint)lastTapPoint;
-(id)canvasReferenceController;
-(void)setLastTapPoint:(CGPoint)arg1 ;
-(BOOL)inspectorModeEnabled;
-(BOOL)shouldSuppressRendering;
-(BOOL)animatingViewScale;
-(BOOL)textGesturesInFlight;
-(void)setTextGesturesInFlight:(BOOL)arg1 ;
-(BOOL)orbTextGesturesInFlight;
-(void)setOrbTextGesturesInFlight:(BOOL)arg1 ;
-(void)setRulerController:(NSObject*<TSDRulerController>)arg1 ;
-(id<TSDRepDirectLayerHostProvider>)directLayerHostProvider;
-(void)setDirectLayerHostProvider:(id<TSDRepDirectLayerHostProvider>)arg1 ;
-(void)setResizeCanvasOnLayout:(BOOL)arg1 ;
-(void)setCanvasEditor:(NSObject*<TSDCanvasEditor>)arg1 ;
-(TSDTextInputResponder *)textInputResponder;
-(BOOL)preventSettingNilEditorOnTextResponder;
-(void)setPreventSettingNilEditorOnTextResponder:(BOOL)arg1 ;
-(BOOL)createRepsForOffscreenLayouts;
-(void)setCreateRepsForOffscreenLayouts:(BOOL)arg1 ;
-(BOOL)allowLayoutAndRenderOnThread;
-(BOOL)staticLayoutAndRenderOnThread;
-(BOOL)nestedCanvasAllowLayoutAndRenderOnThread;
-(void)setNestedCanvasAllowLayoutAndRenderOnThread:(BOOL)arg1 ;
-(BOOL)forceTilingLayoutOnThreadWhenScrolling;
-(void)setForceTilingLayoutOnThreadWhenScrolling:(BOOL)arg1 ;
-(BOOL)currentlyWaitingOnThreadedLayoutAndRender;
-(BOOL)shouldAutoscrollToSelectionAfterLayout;
-(void)setShouldAutoscrollToSelectionAfterLayout:(BOOL)arg1 ;
-(BOOL)suppressAutozoomToSelectionAfterLayout;
-(void)setSuppressAutozoomToSelectionAfterLayout:(BOOL)arg1 ;
-(void)setShouldClipThemeContentToCanvas:(BOOL)arg1 ;
-(BOOL)showGrayOverlay;
-(void)setShowGrayOverlay:(BOOL)arg1 ;
-(BOOL)inVersionBrowsingMode;
-(void)setInVersionBrowsingMode:(BOOL)arg1 ;
-(BOOL)inReadMode;
-(BOOL)showInvisibleObjects;
-(void)setSupportsBackgroundTileRendering:(BOOL)arg1 ;
-(SCD_Struct_TS69)touchContentPlacement;
-(id)convertContentLocation:(id)arg1 fromPlacement:(SCD_Struct_TS69)arg2 toPlacement:(SCD_Struct_TS69)arg3 ;
-(SCD_Struct_TS69)centerPlusMovementContentPlacement;
-(id)clampContentLocation:(id)arg1 forPlacement:(SCD_Struct_TS69)arg2 ;
-(id)clampedCenterContentLocationForPoint:(CGPoint)arg1 withPlacement:(SCD_Struct_TS69)arg2 viewScale:(double)arg3 ;
-(SCD_Struct_TS69)screenTopContentPlacement;
-(SCD_Struct_TS69)screenBottomContentPlacement;
-(CGPoint)clampedCenterPointForPoint:(CGPoint)arg1 withPlacement:(SCD_Struct_TS69)arg2 viewScale:(double)arg3 ;
-(SCD_Struct_TS69)contentPlacementForPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setDelegate:(id<TSDInteractiveCanvasControllerDelegate>)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<TSDInteractiveCanvasControllerDelegate>)delegate;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)layoutIfNeeded;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setAnimationTimingFunction:(id)arg1 ;
-(void)teardown;
-(void)beginAnimations:(id)arg1 context:(void*)arg2 ;
-(void)setAnimationDelay:(double)arg1 ;
-(void)commitAnimations;
-(void)setAnimationDelegate:(id)arg1 ;
-(void)setAnimationDidStopSelector:(SEL)arg1 ;
-(CGColorRef)selectionHighlightColor;
-(void)setSelectionHighlightColor:(CGColorRef)arg1 ;
-(TSDCanvas *)canvas;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setAnimationWillStartSelector:(SEL)arg1 ;
-(void)endEditing;
-(void)forwardInvocation:(id)arg1 ;
-(void)setAnimationRepeatCount:(float)arg1 ;
-(void)setAnimationRepeatAutoreverses:(BOOL)arg1 ;
-(void)setAnimationCompletionBlock:(/*^block*/id)arg1 ;
-(id<TSDCanvasLayerHosting>)layerHost;
-(void)setAnimationStartDate:(id)arg1 ;
-(id)annotationController;
@end
