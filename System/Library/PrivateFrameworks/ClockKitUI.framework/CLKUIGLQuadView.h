/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <ClockKitUI/CLKUIQuadView.h>

@class EAGLContext, CLKUIGLQuadRenderer;

@interface CLKUIGLQuadView : CLKUIQuadView {

	EAGLContext* _context;
	CLKUIGLQuadRenderer* _renderer;
	CGSize _layoutSize;
	unsigned _defaultFramebuffer;
	unsigned _colorRenderbuffer;
	unsigned _depthRenderbuffer;
	int _backingWidth;
	int _backingHeight;
	unsigned _isDepthBufferRequired : 1;
	unsigned _isTimeoutFixRequired : 1;

}
+(Class)layerClass;
-(void)_setupGL;
-(void)_resizeFramebuffer;
-(void)addQuadsFromArray:(id)arg1 ;
-(void)removeQuad:(id)arg1 ;
-(id)_snapshotInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 ;
-(void)_handleQuadArrayChange:(id)arg1 ;
-(void)_discardContents;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(void)removeAllQuads;
-(void)addQuad:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setOpaque:(BOOL)arg1 ;
-(void)_display;
@end

