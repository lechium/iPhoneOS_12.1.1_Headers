/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ECFormulaProcessor : NSObject {

	XlFormulaProcessor* mXlFormulaProcessorLasso;
	XlFormulaProcessor* mXlFormulaProcessorXl;
	XlNameTable* mXlNameTable;
	ChVector<OcText>* mLassoSheetNames;
	ChVector<OcText>* mXlSheetNames;
	XlLinkTable* mXlLinkTable;

}
+(id)formulaStringForEDFormula:(id)arg1 edWorksheet:(id)arg2 xlFormulaProcessor:(XlFormulaProcessor*)arg3 ;
-(ChVector<OcText>*)sheetNamesFromWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)setupWithWorkbook:(id)arg1 xlNameTable:(XlNameTable*)arg2 sheetNames:(ChVector<OcText>*)arg3 xlLinkTable:(XlLinkTable*)arg4 lassoSyntax:(BOOL)arg5 ;
-(void)setupWithWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)xlFormulaProcessorLasso;
-(XlFormulaProcessor*)xlFormulaProcessorXl;
-(id)init;
-(void)dealloc;
@end
