/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class NSString;

@interface CPFont : NSObject <CPDisposable> {

	CGPDFFontRef cgPDFFont;
	CGFontRef cgFont;
	NSString* fontName;
	BOOL exactMatch;
	SCD_Struct_CP22 descriptor;
	CFDictionaryRef kernDictionary;
	double kernUnitsPerEm;
	BOOL isHorizontal;
	double defaultWidth;
	BOOL disposed;

}
-(unsigned)flags;
-(double)fontStretch;
-(double)underlineThickness;
-(CGPDFFontRef)cgPDFFont;
-(void)uniCharsFor:(unsigned long long)arg1 count:(unsigned long long*)arg2 toArray:(unsigned short*)arg3 maxChars:(unsigned)arg4 ;
-(id)matchingFontName;
-(void)loadExternalFontInfoFor:(id)arg1 ;
-(void)getFontName;
-(void)loadEmbeddedFontInfo;
-(BOOL)isSameFontAs:(id)arg1 ;
-(CGRect)fontBBox;
-(double)italicAngle;
-(double)stemV;
-(double)stemH;
-(double)avgWidth;
-(double)missingWidth;
-(double)underlinePosition;
-(double)kernBetweenUnicode:(unsigned short)arg1 andUnicode:(unsigned short)arg2 ;
-(BOOL)getGlyphs:(unsigned short*)arg1 forCodes:(const unsigned short*)arg2 count:(unsigned)arg3 ;
-(double)ascent;
-(double)descent;
-(void)dispose;
-(CGFontRef)cgFont;
-(void)finalize;
-(id)initWith:(CGPDFDictionaryRef)arg1 ;
-(void)dealloc;
-(double)capHeight;
-(double)maxWidth;
-(id)fontName;
-(double)fontWeight;
-(BOOL)isHorizontal;
-(double)spaceWidth;
-(double)leading;
-(double)xHeight;
@end

