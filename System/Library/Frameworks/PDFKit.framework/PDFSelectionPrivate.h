/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, NSMutableArray, UIColor, NSUUID;

@interface PDFSelectionPrivate : NSObject {

	PDFDocument* document;
	NSMutableArray* pageRanges;
	UIColor* activeColor;
	UIColor* inactiveColor;
	double cornerRadius;
	BOOL forceBreaks;
	CFArrayRef cgSelections;
	NSMutableArray* pages;
	NSUUID* pdfSelectionUUID;

}
@end

