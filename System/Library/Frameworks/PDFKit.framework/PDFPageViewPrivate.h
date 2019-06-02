/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFPageLayerGeometryInterface;
#import <PDFKit/PDFKit-Structs.h>
@class NSObject, PDFRenderingProperties, PDFPage, PDFPageLayer, PDFPageLayerEffect, NSMutableArray, PDFAnnotation, UIView, CALayer, UIImage, UITextView;

@interface PDFPageViewPrivate : NSObject {

	NSObject*<PDFPageLayerGeometryInterface> geometryInterface;
	PDFRenderingProperties* renderingProperties;
	PDFPage* page;
	PDFPageLayer* pageLayer;
	PDFPageLayerEffect* searchLayer;
	PDFPageLayerEffect* selectionLayer;
	NSMutableArray* pageAnnotationEffects;
	PDFAnnotation* activeWidgetAnnotation;
	UIView* activeWidgetControl;
	NSMutableArray* pageSignatures;
	CALayer* backgroundLayer;
	UIImage* backgroundImage;
	int backgroundQuality;
	unsigned long long visibilityDelegateIndex;
	BOOL isPerformingUndo;
	CALayer* bookmarkLayer;
	CGSize bookmarkSize;
	UITextView* activeTextView;

}
@end

