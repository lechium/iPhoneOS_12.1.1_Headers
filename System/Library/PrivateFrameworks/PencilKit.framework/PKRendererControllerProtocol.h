/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PKStrokeGenerator, PKLinedPaper;


@protocol PKRendererControllerProtocol <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> renderQueue; 
@property (assign,nonatomic) CGAffineTransform strokeTransform; 
@property (nonatomic,readonly) PKStrokeGenerator * inputController; 
@property (assign,nonatomic) double backboardPaperMultiply; 
@property (nonatomic,retain) PKLinedPaper * linedPaper; 
@property (assign,nonatomic) CGRect viewScissor; 
@property (assign,nonatomic) CGAffineTransform paperTransform; 
@property (nonatomic,readonly) CGSize actualSize; 
@property (nonatomic,readonly) CGSize pixelSize; 
@required
-(void)setup;
-(NSObject*<OS_dispatch_queue>)renderQueue;
-(id)initWithPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 renderQueue:(id)arg3;
-(void)cancelAllRendering;
-(void)enableRendering;
-(void)cancelLongRunningRenders;
-(void)disableRendering;
-(void)resumeLongRunningRenders;
-(void)renderTiles:(id)arg1 tileTransform:(CGAffineTransform)arg2;
-(void)drawImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2;
-(CGAffineTransform)strokeTransform;
-(void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)drawImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 clippedToStrokeSpaceRect:(CGRect)arg3;
-(void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3;
-(void)renderTilesIntoTiles:(id)arg1;
-(BOOL)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3;
-(void)drawStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)setLinedPaper:(id)arg1;
-(void)setStrokeTransform:(CGAffineTransform)arg1;
-(void)setViewScissor:(CGRect)arg1;
-(void)setPaperTransform:(CGAffineTransform)arg1;
-(void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(CGAffineTransform)arg2;
-(PKLinedPaper *)linedPaper;
-(void)drawingCancelled;
-(void)setBackboardPaperMultiply:(double)arg1;
-(void)setPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2;
-(void)purgeOriginalBackFramebuffer;
-(void)cancelVSyncTimeoutBlock;
-(BOOL)prerenderWithTransform:(CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3;
-(void)didFinishRendering:(/*^block*/id)arg1;
-(void)changeRenderSize;
-(void)callBlockAfterPresenting:(/*^block*/id)arg1;
-(void)drawingBeganWithStroke:(id)arg1;
-(void)drawingEnded:(id)arg1 finishStrokeBlock:(/*^block*/id)arg2;
-(void)drawingCancelledWithCompletion:(/*^block*/id)arg1;
-(CGAffineTransform)paperTransform;
-(CGRect)viewScissor;
-(CGImageRef)newCGImageWithClipRect:(CGRect)arg1;
-(void)didTeardownTile;
-(double)backboardPaperMultiply;
-(CGSize)actualSize;
-(void)buildRenderCacheForStrokes:(id)arg1;
-(void)resumeLongRunningRendersAfterAllWorkIsDone;
-(void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 imageClipRect:(CGRect)arg4 completion:(/*^block*/id)arg5;
-(void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3;
-(void)copyIntoTiles:(id)arg1;
-(CGImageRef)newCGImage;
-(void)setBackgroundColor:(CGColorRef)arg1;
-(void)teardown;
-(void)setBackgroundImage:(CGImageRef)arg1;
-(CGSize)pixelSize;
-(void)clear;
-(PKStrokeGenerator *)inputController;

@end
