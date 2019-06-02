/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFDocumentPageChangeDelegate, PDFAKControllerDelegateProtocol;
#import <PDFKit/PDFKit-Structs.h>
@class NSURL, NSMutableArray, NSMutableDictionary, NSDictionary, NSString, PDFOutline, NSOperationQueue, NSArray, PDFSelection, PDFForm, NSIndexSet, NSMutableIndexSet, PDFAKDocumentAdaptor, PDFRenderingProperties;

@interface PDFDocumentPrivate : NSObject {

	CGPDFDocumentRef document;
	NSURL* documentURL;
	NSMutableArray* pages;
	NSMutableDictionary* pageIndices;
	NSMutableDictionary* pageDictionaryIndices;
	BOOL subclassOverridesPageAtIndex;
	id delegate;
	BOOL respondsToDidUnlock;
	BOOL respondsToDidFindMatch;
	BOOL respondsToDidBeginDocumentFind;
	BOOL respondsToDidEndDocumentFind;
	BOOL respondsToDidBeginPageFind;
	BOOL respondsToDidEndPageFind;
	BOOL respondsToDidMatchString;
	BOOL respondsToPrintJobTitle;
	BOOL respondsToClassForPage;
	BOOL respondsToClassForAnnotationType;
	BOOL respondsToClassForAnnotationClass;
	unsigned long long pageCount;
	int majorVersion;
	int minorVersion;
	BOOL isEncrypted;
	BOOL isUnlocked;
	BOOL allowsPrinting;
	BOOL allowsCopying;
	BOOL allowsDocumentChanges;
	BOOL allowsDocumentAssembly;
	BOOL allowsContentAccessibility;
	BOOL allowsCommenting;
	BOOL allowsFormFieldEntry;
	long long permission;
	NSDictionary* attributes;
	NSString* password;
	PDFOutline* outline;
	NSOperationQueue* pageLayoutThreadQueue;
	NSOperationQueue* dataDetectorQueue;
	BOOL finding;
	int findModel;
	NSArray* findStrings;
	PDFSelection* findInstance;
	unsigned long long findOptions;
	long long findPageIndex;
	long long findCharIndex;
	long long lastFindPageIndex;
	long long lastFindCharIndex;
	NSMutableArray* findResults;
	PDFForm* formData;
	BOOL formDataLoaded;
	NSArray* documentCatalogMetadata;
	NSString* xmpNameSpace;
	NSString* xmpPrefix;
	NSString* xmpRootPath;
	id<PDFDocumentPageChangeDelegate> pageChangeDelegate;
	DDScannerRef dataDetector;
	BOOL documentChanged;
	BOOL documentHasBurnInAnnotations;
	BOOL pagesChanged;
	NSIndexSet* initialBookmarkedPageIndices;
	NSMutableIndexSet* bookmarkedPages;
	PDFAKDocumentAdaptor* akDocumentAdaptor;
	id<PDFAKControllerDelegateProtocol> pdfAKControllerDelegateForDeferredSetup;
	PDFRenderingProperties* renderingProperties;
	BOOL useTaggedPDF;
	BOOL limitedSearch;

}
@end

