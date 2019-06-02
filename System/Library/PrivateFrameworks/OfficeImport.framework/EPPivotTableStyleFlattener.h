/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EPStyleFlattener.h>

@class EDPivotTable;

@interface EPPivotTableStyleFlattener : EPStyleFlattener {

	EDPivotTable* mPivotTable;
	long long mFirstHeaderRow;
	long long mFirstDataRow;
	long long mFirstDataColumn;
	unsigned long long mRowFieldsCount;
	unsigned long long mColumnFieldsCount;
	unsigned long long mPageFieldsCount;

}
-(BOOL)isObjectSupported:(id)arg1 ;
-(int)stripeOffset:(int)arg1 row:(BOOL)arg2 ;
-(void)addRowSubheadingLevel:(unsigned)arg1 to:(id)arg2 ;
-(void)addSubtotalRowLevel:(unsigned)arg1 to:(id)arg2 ;
-(void)addColumnSubheadingLevel:(unsigned)arg1 to:(id)arg2 ;
-(void)addSubtotalColumnLevel:(unsigned)arg1 to:(id)arg2 ;
-(void)cacheSizes:(id)arg1 inObject:(id)arg2 ;
-(id)collectionFromWorksheet:(id)arg1 ;
-(id)styleFromObject:(id)arg1 ;
-(id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 ;
-(id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3 ;
-(unsigned)constrainLevel:(unsigned)arg1 ;
-(void)clearCache;
@end

