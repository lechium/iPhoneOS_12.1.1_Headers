/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol GLKViewDelegate;
@class NSMutableDictionary, EAGLContext, UIImage;

@interface GLKView : UIView <NSCoding> {

	BOOL _inDraw;
	BOOL _shouldDeleteFramebuffer;
	BOOL _enableSetNeedsDisplay;
	unsigned _resolveFramebuffer;
	unsigned _resolveColorRenderbuffer;
	unsigned _multisampleFramebuffer;
	unsigned _multisampleColorRenderbuffer;
	unsigned _depthRenderbuffer;
	unsigned _stencilRenderbuffer;
	unsigned _depthStencilRenderbuffer;
	int _drawableColorFormat;
	int _drawableDepthFormat;
	int _drawableStencilFormat;
	int _drawableMultisample;
	NSMutableDictionary* _drawableProperties;
	double _viewContentScaleFactor;
	id<GLKViewDelegate> _delegate;
	EAGLContext* _context;
	long long _drawableWidth;
	long long _drawableHeight;
	/*function pointer*/void* _drawRectIMP;
	CGRect _viewBounds;

}

@property (assign,nonatomic) BOOL inDraw;                                           //@synthesize inDraw=_inDraw - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * drawableProperties;              //@synthesize drawableProperties=_drawableProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldDeleteFramebuffer;                          //@synthesize shouldDeleteFramebuffer=_shouldDeleteFramebuffer - In the implementation block
@property (assign,nonatomic) unsigned resolveFramebuffer;                           //@synthesize resolveFramebuffer=_resolveFramebuffer - In the implementation block
@property (assign,nonatomic) unsigned resolveColorRenderbuffer;                     //@synthesize resolveColorRenderbuffer=_resolveColorRenderbuffer - In the implementation block
@property (assign,nonatomic) unsigned multisampleFramebuffer;                       //@synthesize multisampleFramebuffer=_multisampleFramebuffer - In the implementation block
@property (assign,nonatomic) unsigned multisampleColorRenderbuffer;                 //@synthesize multisampleColorRenderbuffer=_multisampleColorRenderbuffer - In the implementation block
@property (assign,nonatomic) unsigned depthRenderbuffer;                            //@synthesize depthRenderbuffer=_depthRenderbuffer - In the implementation block
@property (assign,nonatomic) unsigned stencilRenderbuffer;                          //@synthesize stencilRenderbuffer=_stencilRenderbuffer - In the implementation block
@property (assign,nonatomic) unsigned depthStencilRenderbuffer;                     //@synthesize depthStencilRenderbuffer=_depthStencilRenderbuffer - In the implementation block
@property (assign,nonatomic) CGRect viewBounds;                                     //@synthesize viewBounds=_viewBounds - In the implementation block
@property (assign,nonatomic) double viewContentScaleFactor;                         //@synthesize viewContentScaleFactor=_viewContentScaleFactor - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* drawRectIMP;                 //@synthesize drawRectIMP=_drawRectIMP - In the implementation block
@property (assign,nonatomic) id<GLKViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EAGLContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long drawableWidth;                             //@synthesize drawableWidth=_drawableWidth - In the implementation block
@property (nonatomic,readonly) long long drawableHeight;                            //@synthesize drawableHeight=_drawableHeight - In the implementation block
@property (assign,nonatomic) int drawableColorFormat;                               //@synthesize drawableColorFormat=_drawableColorFormat - In the implementation block
@property (assign,nonatomic) int drawableDepthFormat;                               //@synthesize drawableDepthFormat=_drawableDepthFormat - In the implementation block
@property (assign,nonatomic) int drawableStencilFormat;                             //@synthesize drawableStencilFormat=_drawableStencilFormat - In the implementation block
@property (assign,nonatomic) int drawableMultisample;                               //@synthesize drawableMultisample=_drawableMultisample - In the implementation block
@property (readonly) UIImage * snapshot; 
@property (assign,nonatomic) BOOL enableSetNeedsDisplay;                            //@synthesize enableSetNeedsDisplay=_enableSetNeedsDisplay - In the implementation block
+(Class)layerClass;
-(void)_setFramebuffer:(BOOL*)arg1 ;
-(void)_resolveAndDiscard;
-(void)_display:(BOOL)arg1 ;
-(void)deleteDrawable;
-(int)drawableColorFormat;
-(int)drawableDepthFormat;
-(int)drawableStencilFormat;
-(int)drawableMultisample;
-(void)setDrawableMultisample:(int)arg1 ;
-(void)bindDrawable;
-(BOOL)enableSetNeedsDisplay;
-(BOOL)inDraw;
-(void)setInDraw:(BOOL)arg1 ;
-(BOOL)shouldDeleteFramebuffer;
-(void)setShouldDeleteFramebuffer:(BOOL)arg1 ;
-(unsigned)resolveFramebuffer;
-(void)setResolveFramebuffer:(unsigned)arg1 ;
-(unsigned)resolveColorRenderbuffer;
-(void)setResolveColorRenderbuffer:(unsigned)arg1 ;
-(unsigned)multisampleFramebuffer;
-(void)setMultisampleFramebuffer:(unsigned)arg1 ;
-(unsigned)multisampleColorRenderbuffer;
-(void)setMultisampleColorRenderbuffer:(unsigned)arg1 ;
-(unsigned)depthRenderbuffer;
-(void)setDepthRenderbuffer:(unsigned)arg1 ;
-(unsigned)stencilRenderbuffer;
-(void)setStencilRenderbuffer:(unsigned)arg1 ;
-(unsigned)depthStencilRenderbuffer;
-(void)setDepthStencilRenderbuffer:(unsigned)arg1 ;
-(CGRect)viewBounds;
-(void)setViewBounds:(CGRect)arg1 ;
-(double)viewContentScaleFactor;
-(void)setViewContentScaleFactor:(double)arg1 ;
-(/*function pointer*/void*)drawRectIMP;
-(void)setDrawRectIMP:(/*function pointer*/void*)arg1 ;
-(long long)drawableWidth;
-(long long)drawableHeight;
-(BOOL)_presentFramebuffer;
-(void)_deleteFramebuffer;
-(void)_createFramebuffer;
-(void)_initCommon;
-(void)setDrawableProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)drawableProperties;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GLKViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<GLKViewDelegate>)delegate;
-(void)setContext:(EAGLContext *)arg1 ;
-(EAGLContext *)context;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(BOOL)_canDrawContent;
-(UIImage *)snapshot;
-(id)initWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)setEnableSetNeedsDisplay:(BOOL)arg1 ;
-(void)setDrawableColorFormat:(int)arg1 ;
-(void)setDrawableDepthFormat:(int)arg1 ;
-(void)setDrawableStencilFormat:(int)arg1 ;
-(void)display;
-(BOOL)_controlsOwnScaleFactor;
@end

