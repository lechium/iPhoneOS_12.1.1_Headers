/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLTexture, MTLBuffer;
#import <PencilKit/PencilKit-Structs.h>
@class PKMetalRenderState, PKMetalFramebuffer, PKMetalResourceHandler, CIContext, PKMetalShader, PKLinedPaper;

@interface PKMetalRenderer : NSObject {

	PKMetalRenderState* _currentRenderState;
	unsigned long long _currentCacheSize;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	PKMetalFramebuffer* _originalBackFramebuffer;
	BOOL _shouldClearOriginalBackFramebuffer;
	PKMetalFramebuffer* _paintFramebuffer;
	PKMetalFramebuffer* _paintFramebufferAccumulator;
	PKMetalResourceHandler* _resourceHandler;
	CGSize _drawingPixelSize;
	CGColorRef _backgroundColor;
	CGSize _actualSize;
	double _fromStrokeSpaceScale;
	CGAffineTransform _strokeTransform;
	CGRect _viewScissor;
	BOOL _lastPointForEraserIsValid;
	PKStrokePoint _lastPointForEraser;
	vector<(anonymous namespace)::StrokeVertex, std::__1::allocator<(anonymous namespace)::StrokeVertex> >* _strokeBuffer;
	unsigned long long _strokeBufferCount;
	CIContext* _coreImageContext;
	id<MTLTexture> _backgroundImageTexture;
	unsigned long long _pixelFormat;
	unsigned long long _paintAndParticlePixelFormat;
	unsigned long long _stencilPixelFormat;
	vector<PKMetalParticleStrokePoint, std::__1::allocator<PKMetalParticleStrokePoint> >* _particleStrokePointBuffer;
	vector<PKMetalPaintStrokePoint, std::__1::allocator<PKMetalPaintStrokePoint> >* _paintStrokePointBuffer;
	vector<(anonymous namespace)::AnimatingStroke, std::__1::allocator<(anonymous namespace)::AnimatingStroke> >* _animatingStrokes;
	CGRect _paintFramebufferDirtyRect;
	PKMetalShader* _paintShader;
	PKMetalShader* _particleShader;
	PKMetalShader* _particleShaderWithAspectRatioSupport;
	id<MTLBuffer> _particleIndexBuffer;
	id<MTLBuffer> _randomNumberBuffer;
	BOOL _solidColorBackboard;
	PKLinedPaper* _linedPaper;
	double _backboardPaperMultiply;
	double _inputScale;
	double _eraserIndicatorAlpha;
	CGAffineTransform _paperTransform;

}

@property (nonatomic,retain) PKLinedPaper * linedPaper;                               //@synthesize linedPaper=_linedPaper - In the implementation block
@property (assign,nonatomic) CGAffineTransform paperTransform;                        //@synthesize paperTransform=_paperTransform - In the implementation block
@property (assign,nonatomic) CGColorRef backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL solidColorBackboard;                                //@synthesize solidColorBackboard=_solidColorBackboard - In the implementation block
@property (assign,nonatomic) CGRect viewScissor;                                      //@synthesize viewScissor=_viewScissor - In the implementation block
@property (assign,nonatomic) CGAffineTransform strokeTransform;                       //@synthesize strokeTransform=_strokeTransform - In the implementation block
@property (assign,nonatomic) CGSize actualSize;                                       //@synthesize actualSize=_actualSize - In the implementation block
@property (assign,nonatomic) double backboardPaperMultiply;                           //@synthesize backboardPaperMultiply=_backboardPaperMultiply - In the implementation block
@property (nonatomic,readonly) PKMetalResourceHandler * resourceHandler;              //@synthesize resourceHandler=_resourceHandler - In the implementation block
@property (assign,nonatomic) double inputScale;                                       //@synthesize inputScale=_inputScale - In the implementation block
@property (assign,nonatomic) double eraserIndicatorAlpha;                             //@synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha - In the implementation block
@property (nonatomic,readonly) BOOL isFinishedRendering; 
@property (nonatomic,readonly) double latestTimestamp; 
+(id)tileQueue;
+(BOOL)useBlitEncoder;
-(void)setup;
-(double)inputScale;
-(void)setInputScale:(double)arg1 ;
-(CGAffineTransform)strokeTransform;
-(void)setLinedPaper:(PKLinedPaper *)arg1 ;
-(void)setStrokeTransform:(CGAffineTransform)arg1 ;
-(void)setViewScissor:(CGRect)arg1 ;
-(void)setPaperTransform:(CGAffineTransform)arg1 ;
-(PKLinedPaper *)linedPaper;
-(void)drawingCancelled;
-(void)setBackboardPaperMultiply:(double)arg1 ;
-(void)purgeOriginalBackFramebuffer;
-(void)drawingBeganWithStroke:(id)arg1 ;
-(void)drawingEnded:(id)arg1 finishStrokeBlock:(/*^block*/id)arg2 ;
-(CGAffineTransform)paperTransform;
-(CGRect)viewScissor;
-(void)setActualSize:(CGSize)arg1 ;
-(void)flushMemoryIfPossible;
-(void)setupStrokeBufferIfNecessary;
-(double)eraserIndicatorAlpha;
-(CGRect)clipRectForVertices:(const StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 ;
-(BOOL)solidColorBackboard;
-(void)renderBrushIndicatorForStroke:(id)arg1 withTransform:(CGAffineTransform)arg2 mode:(long long)arg3 flipped:(BOOL)arg4 ;
-(void)drawNewPointsAt:(double)arg1 ;
-(void)clearPaintFramebuffers;
-(void)renderAnimatingStrokesWithTransform:(CGAffineTransform)arg1 renderBufferSize:(CGSize)arg2 ;
-(void)finishStroke;
-(void)finishRendering;
-(id)framebufferForTile:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(CGImageRef)newCGImageWithClipRect:(CGRect)arg1 ;
-(BOOL)applyStrokeSpaceClipRect:(CGRect)arg1 strokeTransform:(CGAffineTransform)arg2 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 ;
-(unsigned long long)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 stopBlock:(/*^block*/id)arg4 ;
-(unsigned long long)clearAndRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 stopBlock:(/*^block*/id)arg4 ;
-(unsigned long long)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 stopBlock:(/*^block*/id)arg4 ;
-(void)renderLiveStrokeWithTransform:(CGAffineTransform)arg1 renderBufferSize:(CGSize)arg2 ;
-(BOOL)isFinishedRendering;
-(void)getAndRenderNewPoints:(id)arg1 ;
-(double)latestTimestamp;
-(void)didTeardownTile;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 clippedToStrokeSpaceRect:(CGRect)arg3 ;
-(unsigned long long)renderStrokes:(id)arg1 stopBlock:(/*^block*/id)arg2 ;
-(void)setEraserIndicatorAlpha:(double)arg1 ;
-(void)setSolidColorBackboard:(BOOL)arg1 ;
-(double)backboardPaperMultiply;
-(CGSize)actualSize;
-(PKMetalResourceHandler *)resourceHandler;
-(id)initWithDrawingPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 device:(id)arg3 resourceHandler:(id)arg4 ;
-(void)buildRenderCacheForStrokes:(id)arg1 ;
-(void)clearTile:(id)arg1 waitUntilCompleted:(BOOL)arg2 ;
-(void)copyIntoTile:(id)arg1 tileTransform:(CGAffineTransform)arg2 waitUntilCompleted:(BOOL)arg3 ;
-(void)clearAndRenderTiles:(id)arg1 tileTransform:(CGAffineTransform)arg2 waitUntilCompleted:(BOOL)arg3 ;
-(void)renderTile:(id)arg1 intoTile:(id)arg2 waitUntilCompleted:(BOOL)arg3 ;
-(void)renderAheadWithTransform:(CGAffineTransform)arg1 onPaper:(BOOL)arg2 renderBufferSize:(CGSize)arg3 destinationTexture:(id)arg4 ;
-(void)cancelLiveStroke;
-(void)finishLiveStrokeAndPresentDrawable:(id)arg1 waitUntilScheduled:(BOOL)arg2 ;
-(void)teardownDrawingFramebuffers;
-(unsigned long long)renderStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 accumulating:(BOOL)arg3 combinedRendering:(BOOL)arg4 renderEncoder:(id)arg5 computeEncoder:(id)arg6 renderCache:(id)arg7 ;
-(void)disableClippingForRenderEncoder:(id)arg1 ;
-(void)setupRenderStateForStrokeRendering;
-(void)teardownRenderStateIfNecessary;
-(void)setupDrawingFramebuffersIfNecessaryLiveRendering:(BOOL)arg1 ;
-(id)renderCommandEncoderForCommandBuffer:(id)arg1 backBufferLoadAction:(unsigned long long)arg2 backBufferStoreAction:(unsigned long long)arg3 paintBufferLoadAction:(unsigned long long)arg4 accumulatorBufferLoadAction:(unsigned long long)arg5 accumulatorBufferStoreAction:(unsigned long long)arg6 destinationLoadAction:(unsigned long long)arg7 ;
-(void)setupRenderStateForStrokeRenderingNeedPaintBuffer:(BOOL)arg1 ;
-(BOOL)shouldAccumulateLiveStroke;
-(void)setupRenderStateForLiveRenderingDestinationTexture:(id)arg1 destinationLoadAction:(unsigned long long)arg2 accumLoadAction:(unsigned long long)arg3 accumStoreAction:(unsigned long long)arg4 ;
-(void)resetPaintFramebufferAccumulate:(BOOL)arg1 ;
-(void)renderWithTransform:(CGAffineTransform)arg1 animatingStroke:(AnimatingStroke*)arg2 mode:(long long)arg3 clipped:(BOOL)arg4 renderBufferSize:(CGSize)arg5 renderEncoder:(id)arg6 ;
-(void)purgePaintFramebuffers;
-(void)finishRenderingClippedToStrokeSpaceRect:(CGRect)arg1 forStroke:(AnimatingStroke*)arg2 renderEncoder:(id)arg3 ;
-(void)renderFullscreenQuadWithShader:(id)arg1 renderEncoder:(id)arg2 ;
-(void)renderStroke:(id)arg1 withTransform:(CGAffineTransform)arg2 mode:(long long)arg3 flipped:(BOOL)arg4 renderBufferSize:(CGSize)arg5 renderEncoder:(id)arg6 currentClipRect:(CGRect)arg7 ;
-(void)copyFromFramebuffer:(id)arg1 toFramebuffer:(id)arg2 clipRect:(CGRect)arg3 renderEncoder:(id)arg4 ;
-(void)setupForDefaultUberVertexShaderInRenderEncoder:(id)arg1 ;
-(void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 sourceRect:(CGRect)arg3 destinationRect:(CGRect)arg4 renderState:(id)arg5 ;
-(void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 sourceRect:(CGRect)arg3 destinationPosition:(CGPoint)arg4 renderState:(id)arg5 ;
-(id)CIImageFromTexture:(id)arg1 ;
-(BOOL)ensureOriginalBackFramebufferHasContents;
-(CGImageRef)newCGImageFromTexture:(id)arg1 clipRect:(CGRect)arg2 copyImage:(BOOL)arg3 ;
-(CGImageRef)newCGImageWithClipRect:(CGRect)arg1 copyImage:(BOOL)arg2 ;
-(void)setupUberVertexShaderWithTransform:(CGAffineTransform)arg1 paperTransform:(CGAffineTransform)arg2 renderEncoder:(id)arg3 ;
-(CGAffineTransform)strokeRenderTransformForFramebufferSize:(CGSize)arg1 flipped:(BOOL)arg2 ;
-(void)setupOriginalBackFramebufferIfNecessary;
-(void)setupCachedResourcesIfNecessary;
-(void)finishRenderingNoTeardownForStroke:(AnimatingStroke*)arg1 clippedToPixelSpaceRect:(CGRect)arg2 renderEncoder:(id)arg3 ;
-(void)clearPaintFramebuffersWithRenderEncoder:(id)arg1 ;
-(void)setPaperTextureOnRenderEncoder:(id)arg1 fragmentUniforms:(PKMetalUberFragmentUniforms*)arg2 ;
-(void)renderPaperTransform:(CGAffineTransform)arg1 paperTransform:(CGAffineTransform)arg2 flipped:(BOOL)arg3 multiply:(double)arg4 renderEncoder:(id)arg5 ;
-(void)renderLinesRenderBufferSize:(CGSize)arg1 renderEncoder:(id)arg2 ;
-(void)setupRenderEncoder:(id)arg1 forParticleStroke:(AnimatingStroke*)arg2 ;
-(void)setupRenderEncoder:(id)arg1 forPenStroke:(AnimatingStroke*)arg2 ;
-(unsigned long long)renderPaintRenderCache:(id)arg1 renderEncoder:(id)arg2 computeEncoder:(id)arg3 animatingStroke:(AnimatingStroke*)arg4 ;
-(unsigned long long)renderStrokeRenderCache:(id)arg1 renderEncoder:(id)arg2 animatingStroke:(AnimatingStroke*)arg3 indexed:(BOOL)arg4 ;
-(unsigned long long)renderPenStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 combinedRendering:(BOOL)arg3 renderEncoder:(id)arg4 ;
-(unsigned long long)renderParticleRenderCache:(id)arg1 renderEncoder:(id)arg2 computeEncoder:(id)arg3 animatingStroke:(AnimatingStroke*)arg4 ;
-(unsigned long long)renderParticleStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 starts:(BOOL)arg3 ends:(BOOL)arg4 combinedRendering:(BOOL)arg5 renderEncoder:(id)arg6 ;
-(void)setVertexBuffersForVertices:(const StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 renderEncoder:(id)arg3 ;
-(CGAffineTransform)strokeRenderTransform;
-(void)renderPenStrokeVertices:(const StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 renderEncoder:(id)arg3 ;
-(void)addBufferForRenderCache:(id)arg1 strokeVertices:(StrokeVertex*)arg2 numVertices:(unsigned long long)arg3 ;
-(void)renderParticleStrokeVertices:(const StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 renderEncoder:(id)arg3 ;
-(id)generateCacheForStroke:(AnimatingStroke*)arg1 points:(PKStrokePointSlice*)arg2 ;
-(void)clearNowWithStrokeSpaceClipRect:(CGRect)arg1 strokeTransform:(CGAffineTransform)arg2 ;
-(void)setShouldClearOriginalFramebuffer;
-(id)generateCacheForPenStroke:(AnimatingStroke*)arg1 points:(PKStrokePointSlice*)arg2 ;
-(id)generatePaintCacheForStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 ;
-(id)generateCacheForParticleStroke:(AnimatingStroke*)arg1 points:(PKStrokePointSlice*)arg2 startPt:(BOOL)arg3 endPt:(BOOL)arg4 ;
-(id)generateParticleCacheForStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 starts:(BOOL)arg3 ends:(BOOL)arg4 ;
-(void)clearFramebuffer:(id)arg1 waitUntilCompleted:(BOOL)arg2 ;
-(void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 clipRect:(CGRect)arg3 renderState:(id)arg4 ;
-(void)renderTile:(id)arg1 tileTransform:(CGAffineTransform)arg2 renderState:(id)arg3 ;
-(void)renderImage:(CGImageRef)arg1 intoFramebuffer:(id)arg2 clipRect:(CGRect)arg3 ;
-(unsigned long long)colorAttachmentIndexFromFramebuffer:(id)arg1 ;
-(void)copyIntoPaintFromTexture:(id)arg1 clipRect:(CGRect)arg2 renderEncoder:(id)arg3 ;
-(void)debugFramebuffers;
-(CGImageRef)newCGImage;
-(void)dealloc;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(void)setBackgroundImage:(CGImageRef)arg1 ;
-(void)clear;
@end
