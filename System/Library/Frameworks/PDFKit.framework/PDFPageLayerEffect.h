/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

@interface PDFPageLayerEffect : CALayer {

	PDFPageLayerEffectPrivate* _private;

}
+(id)createPDFSelectionLayerEffectsForSelection:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFCoachmarkLayerEffectsWithFrame:(CGRect)arg1 withLayer:(id)arg2 ;
+(id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3 ;
-(void)enableTextSelectionHandles;
-(void)clearTextSelectionHandles;
-(CGRect)pageFrame;
-(BOOL)shouldRotateContent;
-(void)clearTextSelectionMagnifier;
-(void)setTextSelectionMagnifierPagePoint:(CGPoint)arg1 ;
-(void)clearLollipopMagnifier;
-(void)setLollipopMagnifierPagePoint:(CGPoint)arg1 ;
-(id)initWithPDFPageLayer:(id)arg1 ;
-(void)setPageFrame:(CGRect)arg1 ;
-(id)UUID;
-(void)update;
-(id)annotation;
-(id)selection;
-(void)setSelection:(id)arg1 ;
@end

