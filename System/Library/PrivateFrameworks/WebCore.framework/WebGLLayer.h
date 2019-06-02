/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@interface WebGLLayer : CAEAGLLayer {

	GraphicsContext3D* _context;
	float _devicePixelRatio;

}

@property (assign,nonatomic) GraphicsContext3D* context;              //@synthesize context=_context - In the implementation block
-(id)initWithGraphicsContext3D:(GraphicsContext3D*)arg1 ;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setContext:(GraphicsContext3D*)arg1 ;
-(GraphicsContext3D*)context;
-(void)display;
@end
