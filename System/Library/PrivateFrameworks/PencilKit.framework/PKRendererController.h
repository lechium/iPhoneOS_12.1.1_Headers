/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKRendererVSyncControllerDelegate.h>
#import <libobjc.A.dylib/PKRendererControllerProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableArray, CAEAGLLayer, PKStrokeGenerator, PKLinedPaper, PKRenderer, NSString;

@interface PKRendererController : NSObject <PKRendererVSyncControllerDelegate, PKRendererControllerProtocol> {

	NSObject*<OS_dispatch_queue> _renderQueue;
	NSObject*<OS_dispatch_semaphore> _canBeginRenderSemaphore;
	atomic_flag _readyToBeginRender;
	Ad _lastFrameDuration;
	Ai _cancelAllRendering;
	Ai _cancelLongRunningRenderingCount;
	Ai _queuedRenders;
	NSMutableArray* _postPresentCallbacks;
	BOOL _isTorndown;
	unsigned _resolveFramebuffer;
	unsigned _resolveColorRenderbuffer;
	int renderbufferWidth;
	int renderbufferHeight;
	CAEAGLLayer* _presentationLayer;
	double _presentationCount;
	double _presentationDelay;
	double _presentationDelayGrowth;
	double _presentationMaxDelay;
	/*^block*/id _vSyncTimeoutBlock;
	PKStrokeGenerator* _inputController;
	PKLinedPaper* _linedPaper;
	PKRenderer* _renderer;
	double _inputScale;
	CGSize _actualSize;
	CGSize _pixelSize;
	CGRect _viewScissor;
	CGAffineTransform _strokeTransform;
	CGAffineTransform _paperTransform;
	CGAffineTransform _renderTransform;

}

@property (nonatomic,retain) PKRenderer * renderer;                                   //@synthesize renderer=_renderer - In the implementation block
@property (assign) CGAffineTransform renderTransform;                                 //@synthesize renderTransform=_renderTransform - In the implementation block
@property (assign) double inputScale;                                                 //@synthesize inputScale=_inputScale - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> renderQueue;              //@synthesize renderQueue=_renderQueue - In the implementation block
@property (assign,nonatomic) CGAffineTransform strokeTransform;                       //@synthesize strokeTransform=_strokeTransform - In the implementation block
@property (nonatomic,readonly) PKStrokeGenerator * inputController;                   //@synthesize inputController=_inputController - In the implementation block
@property (assign,nonatomic) double backboardPaperMultiply; 
@property (nonatomic,retain) PKLinedPaper * linedPaper;                               //@synthesize linedPaper=_linedPaper - In the implementation block
@property (assign,nonatomic) CGRect viewScissor;                                      //@synthesize viewScissor=_viewScissor - In the implementation block
@property (assign,nonatomic) CGAffineTransform paperTransform;                        //@synthesize paperTransform=_paperTransform - In the implementation block
@property (nonatomic,readonly) CGSize actualSize;                                     //@synthesize actualSize=_actualSize - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                                      //@synthesize pixelSize=_pixelSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGAffineTransform)renderTransform;
-(void)setup;
-(NSObject*<OS_dispatch_queue>)renderQueue;
-(double)inputScale;
-(void)setInputScale:(double)arg1 ;
-(id)initWithPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 renderQueue:(id)arg3 ;
-(void)cancelAllRendering;
-(void)enableRendering;
-(void)cancelLongRunningRenders;
-(void)disableRendering;
-(void)resumeLongRunningRenders;
-(void)renderTiles:(id)arg1 tileTransform:(CGAffineTransform)arg2 ;
-(void)drawImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 ;
-(CGAffineTransform)strokeTransform;
-(void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)drawImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 clippedToStrokeSpaceRect:(CGRect)arg3 ;
-(void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)renderTilesIntoTiles:(id)arg1 ;
-(BOOL)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3 ;
-(void)drawStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLinedPaper:(PKLinedPaper *)arg1 ;
-(void)setStrokeTransform:(CGAffineTransform)arg1 ;
-(void)setViewScissor:(CGRect)arg1 ;
-(void)setPaperTransform:(CGAffineTransform)arg1 ;
-(void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(CGAffineTransform)arg2 ;
-(PKLinedPaper *)linedPaper;
-(void)drawingCancelled;
-(void)setPresentationLayer:(id)arg1 ;
-(void)setBackboardPaperMultiply:(double)arg1 ;
-(void)setPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 ;
-(void)purgeOriginalBackFramebuffer;
-(void)cancelVSyncTimeoutBlock;
-(BOOL)prerenderWithTransform:(CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3 ;
-(void)didFinishRendering:(/*^block*/id)arg1 ;
-(void)changeRenderSize;
-(void)callBlockAfterPresenting:(/*^block*/id)arg1 ;
-(void)drawingBeganWithStroke:(id)arg1 ;
-(void)drawingEnded:(id)arg1 finishStrokeBlock:(/*^block*/id)arg2 ;
-(void)drawingCancelledWithCompletion:(/*^block*/id)arg1 ;
-(CGAffineTransform)paperTransform;
-(CGRect)viewScissor;
-(void)flushMemoryIfPossible;
-(BOOL)solidColorBackboard;
-(CGImageRef)newCGImageWithClipRect:(CGRect)arg1 ;
-(void)didTeardownTile;
-(void)setSolidColorBackboard:(BOOL)arg1 ;
-(double)backboardPaperMultiply;
-(CGSize)actualSize;
-(void)signalVSyncSemaphore:(double)arg1 presentationTime:(unsigned long long)arg2 ;
-(BOOL)isAllRenderingCancelled;
-(void)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 renderCompletion:(/*^block*/id)arg5 ;
-(void)buildRenderCacheForStrokes:(id)arg1 ;
-(BOOL)isLongRunningRenderingCancelled;
-(void)_renderAndPresent:(BOOL)arg1 withTransform:(CGAffineTransform)arg2 ;
-(void)_present:(double)arg1 ;
-(void)setRenderTransform:(CGAffineTransform)arg1 ;
-(void)_renderAheadWithTransform:(CGAffineTransform)arg1 at:(double)arg2 ;
-(void)_renderDrawPoints;
-(void)_renderLiveStrokeAndPresentWithTransform:(CGAffineTransform)arg1 at:(double)arg2 ;
-(void)resumeLongRunningRendersAfterAllWorkIsDone;
-(void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 imageClipRect:(CGRect)arg4 completion:(/*^block*/id)arg5 ;
-(void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyIntoTiles:(id)arg1 ;
-(void)_deleteFramebuffer;
-(void)_createFramebuffer;
-(void)_discard;
-(CGImageRef)newCGImage;
-(PKRenderer *)renderer;
-(void)setRenderer:(PKRenderer *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)teardown;
-(void)setBackgroundImage:(CGImageRef)arg1 ;
-(CGSize)pixelSize;
-(void)clear;
-(PKStrokeGenerator *)inputController;
@end

