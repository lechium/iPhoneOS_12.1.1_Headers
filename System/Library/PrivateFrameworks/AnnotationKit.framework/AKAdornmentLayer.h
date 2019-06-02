/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class AKAnnotation, AKPageController, CALayer;

@interface AKAdornmentLayer : CALayer {

	BOOL _isObservingAnnotation;
	BOOL _isObservingEventHandling;
	AKAnnotation* _annotation;
	AKPageController* _pageController;
	double _currentScaleFactor;
	CALayer* _handleContainerLayer;

}

@property (retain) AKAnnotation * annotation;                      //@synthesize annotation=_annotation - In the implementation block
@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
@property (assign) BOOL isObservingAnnotation;                     //@synthesize isObservingAnnotation=_isObservingAnnotation - In the implementation block
@property (retain) CALayer * handleContainerLayer;                 //@synthesize handleContainerLayer=_handleContainerLayer - In the implementation block
@property (assign) double currentScaleFactor;                      //@synthesize currentScaleFactor=_currentScaleFactor - In the implementation block
@property (assign) BOOL isObservingEventHandling;                  //@synthesize isObservingEventHandling=_isObservingEventHandling - In the implementation block
+(Class)_adornmentClassForAnnotation:(id)arg1 ;
+(id)newAdornmentLayerForAnnotation:(id)arg1 withPageController:(id)arg2 ;
-(void)updateAdornmentElements;
-(void)updateSublayersWithScale:(double)arg1 ;
-(unsigned long long)currentlyDraggedArea;
-(BOOL)needsUpdateWhenDraggingStartsOrEnds;
-(id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2 ;
-(void)_startObservingAnnotation;
-(void)_stopObservingAnnotation;
-(BOOL)isObservingAnnotation;
-(void)setIsObservingAnnotation:(BOOL)arg1 ;
-(void)updatePixelAlignment;
-(void)setCurrentScaleFactor:(double)arg1 ;
-(void)setHandleContainerLayer:(CALayer *)arg1 ;
-(CALayer *)handleContainerLayer;
-(void)_startObservingAnnotationEventHandlers;
-(void)_stopObservingAnnotationEventHandlers;
-(void)_addHandleSublayerAtPoint:(CGPoint)arg1 withStyle:(unsigned long long)arg2 ;
-(BOOL)isObservingEventHandling;
-(void)setIsObservingEventHandling:(BOOL)arg1 ;
-(double)currentScaleFactor;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)teardown;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(AKAnnotation *)annotation;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(id)actionForKey:(id)arg1 ;
@end

