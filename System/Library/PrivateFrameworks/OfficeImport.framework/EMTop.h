/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMTop.h>
#import <libobjc.A.dylib/OIProgressiveReaderDelegate.h>

@class CMArchiveManager, EMState, EMWorkbookMapper, NSString;

@interface EMTop : CMTop <OIProgressiveReaderDelegate> {

	CMArchiveManager* _archiver;
	EMState* _state;
	EMWorkbookMapper* _mapper;
	NSString* _inFileName;
	BOOL _xml;

}
+(void)fillHTMLArchiveForExcelFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3 ;
+(void)fillHTMLArchiveForExcelData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4 ;
-(void)readFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3 ;
-(void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4 ;
-(void)_streamWorkbook:(id)arg1 ;
-(void)readFile:(id)arg1 orData:(id)arg2 withDataFileName:(id)arg3 xmlFlag:(BOOL)arg4 archiver:(id)arg5 ;
-(void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2 ;
-(void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4 ;
-(void)readerDidEndDocument:(id)arg1 ;
@end

