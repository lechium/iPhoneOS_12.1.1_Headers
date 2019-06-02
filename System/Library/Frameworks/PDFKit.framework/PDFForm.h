/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFFormPrivateVars;

@interface PDFForm : NSObject <NSCopying> {

	PDFFormPrivateVars* _private;

}
-(CFDictionaryRef)createDictionaryRef;
-(id)stringValueForFieldNamed:(id)arg1 ;
-(void)setStringValue:(id)arg1 forFieldNamed:(id)arg2 postFormChangeNotification:(BOOL)arg3 ;
-(id)fieldNamed:(id)arg1 ;
-(void)addFormField:(id)arg1 ;
-(void)commonResetForm:(id)arg1 inclusive:(BOOL)arg2 ;
-(id)fieldNames;
-(id)defaultStringValueForFieldNamed:(id)arg1 ;
-(CGPDFStringRef)defaultDAStringRef;
-(void)removeFormFieldWithFieldName:(id)arg1 ;
-(void)resetFormForFields:(id)arg1 ;
-(void)resetFormExcludingFields:(id)arg1 ;
-(void)addNeedsAppearanceToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(id)document;
@end

