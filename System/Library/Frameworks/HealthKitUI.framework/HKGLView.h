/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class EAGLContext, UIScreen, CADisplayLink;

@interface HKGLView : UIView {

	EAGLContext* _context;
	UIScreen* _screen;
	CADisplayLink* _displayLink;
	BOOL _displayLinkPaused;
	BOOL _viewWillMoveToWindow;
	double _lastUpdateTime;
	unsigned _latestDrawError;
	int _drawableWidth;
	int _drawableHeight;
	BOOL _shouldDeleteFramebuffer;
	unsigned _resolveColorRenderbuffer;
	unsigned _multisampleFramebuffer;
	unsigned _multisampleColorRenderbuffer;
	unsigned _resolveFramebuffer;
	unsigned _depthRenderbuffer;
	BOOL _contextPushed;
	BOOL _viewSnapshottingActive;
	BOOL _synchronizesWithCA;
	BOOL _use4XMSAA;
	BOOL _shouldBypassApplicationStateChecking;
	BOOL _viewIsVisible;
	float _preferredFramesPerSecond;
	int _drawableDepthFormat;

}

@property (assign,nonatomic) BOOL synchronizesWithCA;                                //@synthesize synchronizesWithCA=_synchronizesWithCA - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) float preferredFramesPerSecond;                         //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign,nonatomic) BOOL use4XMSAA;                                         //@synthesize use4XMSAA=_use4XMSAA - In the implementation block
@property (assign,nonatomic) int drawableDepthFormat;                                //@synthesize drawableDepthFormat=_drawableDepthFormat - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassApplicationStateChecking;              //@synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking - In the implementation block
@property (nonatomic,readonly) double timeSinceLastUpdate; 
@property (nonatomic,readonly) BOOL viewIsVisible;                                   //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
+(void)clearCachedProgramForVertexShader:(id)arg1 fragmentShader:(id)arg2 ;
+(Class)layerClass;
-(int)drawableDepthFormat;
-(void)_updateScreenIfChanged;
-(void)_createDisplayLinkForScreen:(id)arg1 ;
-(double)timeSinceLastUpdate;
-(float)preferredFramesPerSecond;
-(void)_deleteFramebuffer;
-(BOOL)viewIsVisible;
-(void)setShouldBypassApplicationStateChecking:(BOOL)arg1 ;
-(void)_invalidateLastUpdateTime;
-(void)_updateGLLayerIsAsynchronous;
-(void)_pauseByNotification:(id)arg1 ;
-(void)_resumeByNotification:(id)arg1 ;
-(void)_viewSnapshottingWillBegin;
-(void)_viewSnapshottingDidEnd;
-(BOOL)_isLastUpdateTimeValid;
-(id)_context_generateSnapshot;
-(BOOL)_shouldAllowRendering;
-(void)_context_displayAndPresentFramebuffer:(BOOL)arg1 ;
-(void)_context_checkAndRepairFramebuffer;
-(void)_context_deleteFramebuffer;
-(BOOL)_context_createFramebuffer;
-(void)_context_prepareFramebuffer:(BOOL*)arg1 ;
-(void)_context_drawRect:(CGRect)arg1 ;
-(void)_context_resolveAndDiscardFramebuffer;
-(BOOL)_context_presentFramebuffer;
-(void)setUse4XMSAA:(BOOL)arg1 ;
-(void)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 inBundle:(id)arg3 forProgram:(unsigned*)arg4 cache:(BOOL)arg5 ;
-(BOOL)synchronizesWithCA;
-(BOOL)use4XMSAA;
-(BOOL)shouldBypassApplicationStateChecking;
-(void)setSynchronizesWithCA:(BOOL)arg1 ;
-(void)loadVertexShaderSource:(id)arg1 fragmentShaderSource:(id)arg2 forProgram:(unsigned*)arg3 ;
-(unsigned)drawInRect:(CGRect)arg1 withContext:(id)arg2 ;
-(void)performWithContext:(/*^block*/id)arg1 ;
-(void)_displayLinkFired;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)update;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(BOOL)_canDrawContent;
-(id)snapshot;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)_update;
-(void)setPreferredFramesPerSecond:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)setDrawableDepthFormat:(int)arg1 ;
-(BOOL)isPaused;
-(BOOL)_controlsOwnScaleFactor;
@end

