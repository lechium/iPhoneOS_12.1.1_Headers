/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDrawable.h>

@class OADTableGrid, NSMutableArray;

@interface OADTable : OADDrawable {

	OADTableGrid* mGrid;
	NSMutableArray* mRows;

}
+(void)applyTextStyle:(id)arg1 toParagraphProperties:(id)arg2 ;
-(id)grid;
-(id)tableProperties;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(id)addRow;
-(void)flipTableRTL;
-(id)cellAtPos:(OADTMatrixPos)arg1 ;
-(OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)arg1 ;
-(id)masterCellOfPos:(OADTMatrixPos)arg1 ;
-(void)flattenStyle;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)rowCount;
@end

