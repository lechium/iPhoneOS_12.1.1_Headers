/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class NSMutableString, NSData;

@interface CPArchive : NSObject <CPDisposable> {

	CFArrayRef selections;
	CFArrayRef imageNodes;
	NSMutableString* plainText;
	NSMutableString* htmlString;
	NSMutableString* htmlStringNoImages;
	NSData* webArchiveData;

}
-(id)webArchiveData;
-(id)html;
-(void)addSelection:(CGPDFSelectionRef)arg1 ;
-(void)dispose;
-(void)finalize;
-(id)plainText;
-(id)init;
-(void)dealloc;
@end

