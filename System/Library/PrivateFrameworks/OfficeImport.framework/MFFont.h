/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/MFObject.h>

@class NSString;

@interface MFFont : NSObject <MFObject> {

	int m_lfHeight;
	int m_lfWidth;
	int m_lfEscapement;
	int m_lfOrientation;
	int m_lfWeight;
	BOOL m_lfItalic;
	BOOL m_lfUnderline;
	BOOL m_lfStrikeOut;
	int m_lfCharSet;
	int m_lfOutPrecision;
	unsigned char m_lfClipPrecision;
	int m_lfQuality;
	int m_pitch;
	int m_family;
	NSString* m_lfFaceName;
	NSString* m_elfFullName;
	NSString* m_elfStyle;
	unsigned m_elfVersion;
	unsigned m_elfStyleSize;
	unsigned m_elfMatch;
	unsigned m_elfVendorId;
	unsigned m_elfCulture;

}
+(id)fontWithFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(BOOL)arg6 lfUnderline:(BOOL)arg7 lfStrikeOut:(BOOL)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 ;
+(id)fontWithExtendedFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(BOOL)arg6 lfUnderline:(BOOL)arg7 lfStrikeOut:(BOOL)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned)arg18 elfStyleSize:(unsigned)arg19 elfMatch:(unsigned)arg20 elfVendorId:(unsigned)arg21 elfCulture:(unsigned)arg22 ;
+(id)fontWithStockFont:(int)arg1 ;
-(BOOL)underline;
-(int)selectInto:(id)arg1 ;
-(id)initWithAllFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(BOOL)arg6 lfUnderline:(BOOL)arg7 lfStrikeOut:(BOOL)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned)arg18 elfStyleSize:(unsigned)arg19 elfMatch:(unsigned)arg20 elfVendorId:(unsigned)arg21 elfCulture:(unsigned)arg22 ;
-(id)initWithFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(BOOL)arg6 lfUnderline:(BOOL)arg7 lfStrikeOut:(BOOL)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 ;
-(id)initWithStockFont:(int)arg1 ;
-(double)escapement;
-(double)fontHeight;
-(BOOL)strikeout;
-(id)faceName;
-(CGRect)textExtent:(id)arg1 options:(int)arg2 in_spacingValues:(int*)arg3 in_count:(int)arg4 ;
-(id)stringWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(int)getCharset;
-(void)dealloc;
@end

