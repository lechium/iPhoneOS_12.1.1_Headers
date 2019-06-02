/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCCancelDelegate;
#import <OfficeImport/OfficeImport-Structs.h>
@class EDWorkbook, EDResources, TCTracing;

@interface EBState : NSObject {

	XlLinkTable* mXlLinkTable;
	XlNameTable* mXlNameTable;
	ChVector<OcText>* mSheetNames;
	XlFormulaProcessor* mXlFormulaProcessor;
	EDWorkbook* mWorkbook;
	EDResources* mResources;
	id<TCCancelDelegate> mCancelDelegate;
	TCTracing* mTracing;

}

@property (nonatomic,readonly) id<TCCancelDelegate> cancelDelegate; 
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)workbook;
-(void)setWorkbook:(id)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)tracing;
-(id<TCCancelDelegate>)cancelDelegate;
-(XlFormulaProcessor*)xlFormulaProcessor;
-(XlNameTable*)xlNameTable;
-(XlLinkTable*)xlLinkTable;
-(ChVector<OcText>*)sheetNames;
-(void)dealloc;
-(BOOL)isCancelled;
@end
