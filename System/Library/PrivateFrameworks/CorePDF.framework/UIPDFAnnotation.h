/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, UIPDFAnnotationView, UIPDFAnnotationController, NSMutableArray, CALayer, UIPDFSelection, UIPDFPopupAnnotation, UIPDFPage;

@interface UIPDFAnnotation : NSObject {

	CGPDFDictionaryRef _dictionary;
	CGColorRef _color;
	void* _appearanceStream;
	CGPDFStringRef _pdfContents;
	NSString* _annotationID;
	BOOL _hidden;
	UIPDFAnnotationView* _annotationView;
	UIPDFAnnotationController* _annotationController;
	NSMutableArray* _quadPoints;
	CALayer* _drawingLayer;
	UIPDFSelection* _selection;
	BOOL editable;
	id data;
	NSString* _contents;
	long long _index;
	UIPDFPopupAnnotation* _popup;
	NSString* _associatedAnnotationID;
	UIPDFPage* _page;
	unsigned long long _tag;

}

@property (nonatomic,retain) CALayer * drawingLayer;                                        //@synthesize drawingLayer=_drawingLayer - In the implementation block
@property (nonatomic,retain) UIPDFAnnotationView * annotationView;                          //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) UIPDFPage * page;                                              //@synthesize page=_page - In the implementation block
@property (assign,nonatomic) UIPDFAnnotationController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
@property (nonatomic,readonly) BOOL recognizeGestures; 
@property (assign,nonatomic) BOOL editable; 
@property (assign,nonatomic) UIPDFSelection * selection; 
@property (nonatomic,retain) id data; 
@property (nonatomic,retain) NSString * contents;                                           //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) long long index;                                               //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) UIPDFPopupAnnotation * popup;                                  //@synthesize popup=_popup - In the implementation block
@property (nonatomic,retain) NSString * associatedAnnotationID;                             //@synthesize associatedAnnotationID=_associatedAnnotationID - In the implementation block
@property (assign,nonatomic) unsigned long long tag;                                        //@synthesize tag=_tag - In the implementation block
+(id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2 ;
-(CALayer *)drawingLayer;
-(void)setPageView:(id)arg1 ;
-(void)setAnnotationID:(id)arg1 ;
-(void)setAssociatedAnnotationID:(NSString *)arg1 ;
-(void)setDrawingLayer:(CALayer *)arg1 ;
-(id)newSelection;
-(id)annotationID;
-(CGRect)rectIn:(CGPDFArrayRef)arg1 ;
-(void)makeQuadpointsFrom:(id)arg1 ;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
-(id)getImageNamed:(id)arg1 ofType:(id)arg2 ;
-(BOOL)hasPopUp;
-(const char*)pdfContents;
-(CGRect)popUpAnnotationRect;
-(id)descriptionHOLD;
-(NSString *)associatedAnnotationID;
-(CGPathRef)newPathFromQuadPoints;
-(BOOL)recognizeGestures;
-(UIPDFAnnotationView *)annotationView;
-(void)setAnnotationView:(UIPDFAnnotationView *)arg1 ;
-(UIPDFPopupAnnotation *)popup;
-(void)setPopup:(UIPDFPopupAnnotation *)arg1 ;
-(void)setAnnotationController:(UIPDFAnnotationController *)arg1 ;
-(int)annotationType;
-(id)archive;
-(id)init;
-(void)dealloc;
-(CGRect)bounds;
-(CGRect)frame;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setTag:(unsigned long long)arg1 ;
-(unsigned long long)tag;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(id)data;
-(UIPDFPage *)page;
-(void)setPage:(UIPDFPage *)arg1 ;
-(void)setData:(id)arg1 ;
-(UIPDFSelection *)selection;
-(Class)viewClass;
-(BOOL)hidden;
-(void)setSelection:(UIPDFSelection *)arg1 ;
-(BOOL)editable;
-(UIPDFAnnotationController *)annotationController;
-(CGRect)Rect;
@end

