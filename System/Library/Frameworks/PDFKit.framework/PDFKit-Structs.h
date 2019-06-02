/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGPDFDictionary* CGPDFDictionaryRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPDFAnnotation* CGPDFAnnotationRef;

typedef struct CGPDFForm* CGPDFFormRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPDFString* CGPDFStringRef;

typedef struct __CFString* CFStringRef;

typedef struct CGContext* CGContextRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGImage* CGImageRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	UIEdgeInsets contentInset;
	UIEdgeInsets safeAreaInsets;
	UIEdgeInsets expandedContentInsetPortrait;
	UIEdgeInsets collapsedContentInsetPortrait;
	UIEdgeInsets expandedContentInsetLandscape;
	UIEdgeInsets collapsedContentInsetLandscape;
	UIEdgeInsets endRotationContentInset;
	BOOL contentInsetIsExpandedDuringRotation;
} SCD_Struct_PD17;

typedef struct CGPDFArray* CGPDFArrayRef;

typedef struct CGColor* CGColorRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	BOOL isOnFirstPage;
	BOOL isOnLastPage;
	CGRect firstPageRect;
	CGRect lastPageRect;
} SCD_Struct_PD21;

typedef const struct __CFArray* CFArrayRef;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct __DDScanner* DDScannerRef;

typedef struct CGDataConsumer* CGDataConsumerRef;

typedef struct __CFData* CFDataRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct CGPDFLayout* CGPDFLayoutRef;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct CGPDFFont* CGPDFFontRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGPDFSelection* CGPDFSelectionRef;

