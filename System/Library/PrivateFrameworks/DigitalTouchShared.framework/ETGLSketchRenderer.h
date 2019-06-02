/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ETGLSketchRendererDelegate;
#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
@class EAGLContext, CAEAGLLayer;

@interface ETGLSketchRenderer : NSObject {

	BOOL _useThisRendererOnlyForWarmup;
	BOOL _isDying;
	BOOL _renderingOffscreen;
	BOOL _useFastVerticalWisp;
	float _currentTimeClock;
	float _currentTimeIndex;
	int _vertexBufferCount;
	int _vertexBufferBegin;
	float _deathTime;
	float _lastBirth;
	unsigned _shaderProgram;
	unsigned _vboVertLineId;
	unsigned _vaoLineID;
	unsigned _viewRenderbuffer;
	unsigned _viewFramebuffer;
	unsigned _backingWidth;
	unsigned _backingHeight;
	unsigned _allocatedWidth;
	unsigned _allocatedHeight;
	double _wispDelay;
	id<ETGLSketchRendererDelegate> _delegate;
	double _lineWidthScaleFactor;
	compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _allVertices;
	unsigned long long _vertexCount;
	double _cometScaleFactor;
	EAGLContext* _context;
	CAEAGLLayer* _cachedLayer;
	/*^block*/id _completionBlock;
	 _brushColorForInitialColor;
	 _brushColorForFinalColor;

}

@property (assign,nonatomic) compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* allVertices;              //@synthesize allVertices=_allVertices - In the implementation block
@property (assign,nonatomic) int vertexBufferCount;                                                                                                                                   //@synthesize vertexBufferCount=_vertexBufferCount - In the implementation block
@property (assign,nonatomic) int vertexBufferBegin;                                                                                                                                   //@synthesize vertexBufferBegin=_vertexBufferBegin - In the implementation block
@property (assign,nonatomic) unsigned long long vertexCount;                                                                                                                          //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) float deathTime;                                                                                                                                         //@synthesize deathTime=_deathTime - In the implementation block
@property (assign,nonatomic) float lastBirth;                                                                                                                                         //@synthesize lastBirth=_lastBirth - In the implementation block
@property (assign,nonatomic)  brushColorForInitialColor;                                                                                                                              //@synthesize brushColorForInitialColor=_brushColorForInitialColor - In the implementation block
@property (assign,nonatomic)  brushColorForFinalColor;                                                                                                                                //@synthesize brushColorForFinalColor=_brushColorForFinalColor - In the implementation block
@property (assign,nonatomic) unsigned shaderProgram;                                                                                                                                  //@synthesize shaderProgram=_shaderProgram - In the implementation block
@property (assign,nonatomic) unsigned vboVertLineId;                                                                                                                                  //@synthesize vboVertLineId=_vboVertLineId - In the implementation block
@property (assign,nonatomic) unsigned vaoLineID;                                                                                                                                      //@synthesize vaoLineID=_vaoLineID - In the implementation block
@property (assign,nonatomic) unsigned viewRenderbuffer;                                                                                                                               //@synthesize viewRenderbuffer=_viewRenderbuffer - In the implementation block
@property (assign,nonatomic) unsigned viewFramebuffer;                                                                                                                                //@synthesize viewFramebuffer=_viewFramebuffer - In the implementation block
@property (assign,nonatomic) unsigned backingWidth;                                                                                                                                   //@synthesize backingWidth=_backingWidth - In the implementation block
@property (assign,nonatomic) unsigned backingHeight;                                                                                                                                  //@synthesize backingHeight=_backingHeight - In the implementation block
@property (assign,nonatomic) double cometScaleFactor;                                                                                                                                 //@synthesize cometScaleFactor=_cometScaleFactor - In the implementation block
@property (assign,nonatomic) unsigned allocatedWidth;                                                                                                                                 //@synthesize allocatedWidth=_allocatedWidth - In the implementation block
@property (assign,nonatomic) unsigned allocatedHeight;                                                                                                                                //@synthesize allocatedHeight=_allocatedHeight - In the implementation block
@property (assign,nonatomic) EAGLContext * context;                                                                                                                                   //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) CAEAGLLayer * cachedLayer;                                                                                                                               //@synthesize cachedLayer=_cachedLayer - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                                                                                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) float currentTimeClock;                                                                                                                                //@synthesize currentTimeClock=_currentTimeClock - In the implementation block
@property (nonatomic,readonly) float currentTimeIndex;                                                                                                                                //@synthesize currentTimeIndex=_currentTimeIndex - In the implementation block
@property (assign,nonatomic) BOOL isDying;                                                                                                                                            //@synthesize isDying=_isDying - In the implementation block
@property (assign,nonatomic) double wispDelay;                                                                                                                                        //@synthesize wispDelay=_wispDelay - In the implementation block
@property (assign,nonatomic,__weak) id<ETGLSketchRendererDelegate> delegate;                                                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL renderingOffscreen;                                                                                                                                 //@synthesize renderingOffscreen=_renderingOffscreen - In the implementation block
@property (assign,nonatomic) double lineWidthScaleFactor;                                                                                                                             //@synthesize lineWidthScaleFactor=_lineWidthScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL useFastVerticalWisp;                                                                                                                                //@synthesize useFastVerticalWisp=_useFastVerticalWisp - In the implementation block
+(void)warmupShaders;
-(BOOL)isDying;
-(void)setVertexCount:(unsigned long long)arg1 ;
-(unsigned)backingWidth;
-(unsigned)backingHeight;
-(void)render;
-(id)initWithContext:(id)arg1 andDrawable:(id)arg2 ;
-(void)setUseFastVerticalWisp:(BOOL)arg1 ;
-(void)setLineWidthScaleFactor:(double)arg1 ;
-(void)setWispDelay:(double)arg1 ;
-(void)setRenderingOffscreen:(BOOL)arg1 ;
-(void)setFinalDrawingColor:(1*)arg1 ;
-(void)setInitialDrawingColor:(1*)arg1 ;
-(void)updateGLWithTime:(float)arg1 ;
-(CGImageRef)createRenderedFrameImageUsingAlpha:(BOOL)arg1 ;
-(void)setIsDying:(BOOL)arg1 ;
-(void)erase;
-(BOOL)resizeFromLayer:(id)arg1 ;
-(void)appendPointArray:(1*)arg1 length:(unsigned long long)arg2 ;
-(void)appendDualPointArray:(1*)arg1 length:(unsigned long long)arg2 controlPoint:(4*)arg3 alternatePoints:(unsigned long long)arg4 alternateLength:(float)arg5 alternateControlPoint:(unsigned long long)arg6 unitSize:(unsigned long long)arg7 ;
-(double)wispDelay;
-(BOOL)useFastVerticalWisp;
-(void)setupFBOs:(id)arg1 ;
-(void)setupShaders;
-(void)setupTexture;
-(int)loadOneShaderOfType:(unsigned)arg1 withCString:(const char*)arg2 length:(int)arg3 ;
-(int)linkProgramWithVShader:(int)arg1 FShader:(int)arg2 ;
-(BOOL)resizeFromCachedLayer;
-(void)updateVertexBufferWithVertexCount:(unsigned long long)arg1 ;
-(void)_warmupShaders;
-(void)updateGLWithCurrentTime;
-(float)currentTimeClock;
-(float)currentTimeIndex;
-(BOOL)renderingOffscreen;
-(double)lineWidthScaleFactor;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >*)allVertices;
-(void)setAllVertices:(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >*)arg1 ;
-(int)vertexBufferCount;
-(void)setVertexBufferCount:(int)arg1 ;
-(int)vertexBufferBegin;
-(void)setVertexBufferBegin:(int)arg1 ;
-(float)deathTime;
-(void)setDeathTime:(float)arg1 ;
-(float)lastBirth;
-(void)setLastBirth:(float)arg1 ;
-()brushColorForInitialColor;
-(void)setBrushColorForInitialColor:;
-()brushColorForFinalColor;
-(void)setBrushColorForFinalColor:;
-(unsigned)shaderProgram;
-(void)setShaderProgram:(unsigned)arg1 ;
-(unsigned)vboVertLineId;
-(void)setVboVertLineId:(unsigned)arg1 ;
-(unsigned)vaoLineID;
-(void)setVaoLineID:(unsigned)arg1 ;
-(unsigned)viewRenderbuffer;
-(void)setViewRenderbuffer:(unsigned)arg1 ;
-(unsigned)viewFramebuffer;
-(void)setViewFramebuffer:(unsigned)arg1 ;
-(void)setBackingWidth:(unsigned)arg1 ;
-(void)setBackingHeight:(unsigned)arg1 ;
-(double)cometScaleFactor;
-(void)setCometScaleFactor:(double)arg1 ;
-(unsigned)allocatedWidth;
-(void)setAllocatedWidth:(unsigned)arg1 ;
-(unsigned)allocatedHeight;
-(void)setAllocatedHeight:(unsigned)arg1 ;
-(CAEAGLLayer *)cachedLayer;
-(void)setCachedLayer:(CAEAGLLayer *)arg1 ;
-(void)setupVAOs;
-(void)dealloc;
-(void)setDelegate:(id<ETGLSketchRendererDelegate>)arg1 ;
-(id<ETGLSketchRendererDelegate>)delegate;
-(void)setContext:(EAGLContext *)arg1 ;
-(EAGLContext *)context;
-(void)reset;
-(unsigned long long)vertexCount;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
@end

