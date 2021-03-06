/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKInternalDrawingView, CAMetalLayer;

@interface PKMetalView : UIView {

	BOOL _isWideGamut;
	BOOL _isFixedPixelSize;
	BOOL _doubleBuffered;
	PKInternalDrawingView* _drawingView;
	CGSize _fixedPixelSize;

}

@property (nonatomic,readonly) CAMetalLayer * metalLayer; 
@property (assign,nonatomic,__weak) PKInternalDrawingView * drawingView;              //@synthesize drawingView=_drawingView - In the implementation block
@property (nonatomic,readonly) BOOL isWideGamut;                                      //@synthesize isWideGamut=_isWideGamut - In the implementation block
@property (nonatomic,readonly) BOOL isFixedPixelSize;                                 //@synthesize isFixedPixelSize=_isFixedPixelSize - In the implementation block
@property (nonatomic,readonly) CGSize fixedPixelSize;                                 //@synthesize fixedPixelSize=_fixedPixelSize - In the implementation block
@property (assign,nonatomic) BOOL doubleBuffered;                                     //@synthesize doubleBuffered=_doubleBuffered - In the implementation block
@property (nonatomic,readonly) BOOL isDrawableAvailable; 
+(Class)layerClass;
-(CAMetalLayer *)metalLayer;
-(BOOL)isDrawableAvailable;
-(void)setDrawingView:(PKInternalDrawingView *)arg1 ;
-(PKInternalDrawingView *)drawingView;
-(id)initWithFrame:(CGRect)arg1 andPixelSize:(CGSize)arg2 isWideGamut:(BOOL)arg3 ;
-(void)flushDrawables;
-(BOOL)doubleBuffered;
-(void)setDoubleBuffered:(BOOL)arg1 ;
-(void)resizeDrawableIfNecessary;
-(BOOL)isWideGamut;
-(BOOL)isFixedPixelSize;
-(CGSize)fixedPixelSize;
-(void)initLayer;
-(id)initWithFrame:(CGRect)arg1 isWideGamut:(BOOL)arg2 ;
-(void)setFixedPixelSize:(CGSize)arg1 ;
@end

