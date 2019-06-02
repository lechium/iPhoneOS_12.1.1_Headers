/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKSelection.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSReading/TSDTextSelection.h>

@class TSTCellRegion, NSString;

@interface TSTTableSelection : TSKSelection <NSCopying, TSDTextSelection> {

	int mSelectionType;
	SCD_Struct_TS139 mAnchorCellID;
	TSTCellRegion* mCellRegion;
	TSTCellRegion* mBaseRegion;
	SCD_Struct_TS139 mCursorCellID;
	NSRange mSearchReferenceRange;

}

@property (nonatomic,readonly) TSTCellRegion * cellRegion; 
@property (nonatomic,readonly) int selectionType; 
@property (nonatomic,readonly) SCD_Struct_TS139 anchorCellID; 
@property (nonatomic,readonly) TSTCellRegion * baseRegion; 
@property (nonatomic,readonly) SCD_Struct_TS139 cursorCellID; 
@property (assign,nonatomic) NSRange searchReferenceRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) BOOL isAtEndOfLine; 
-(int)selectionType;
-(BOOL)isAtEndOfLine;
-(TSTCellRegion *)cellRegion;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS139)arg3 cursorCellID:(SCD_Struct_TS139)arg4 baseRegion:(id)arg5 selectionType:(int)arg6 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS139)arg3 cursorCellID:(SCD_Struct_TS139)arg4 baseRegion:(id)arg5 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS139)arg3 cursorCellID:(SCD_Struct_TS139)arg4 selectionType:(int)arg5 ;
-(id)initWithTableModel:(id)arg1 cellRange:(SCD_Struct_TS141)arg2 type:(int)arg3 anchorCellID:(SCD_Struct_TS139)arg4 cursorCellID:(SCD_Struct_TS139)arg5 ;
-(id)initWithTableModel:(id)arg1 startingRowIndex:(unsigned short)arg2 numberOfRows:(unsigned short)arg3 ;
-(id)initWithTableModel:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned short)arg3 ;
-(SCD_Struct_TS139)anchorCellID;
-(SCD_Struct_TS139)cursorCellID;
-(TSTCellRegion *)baseRegion;
-(id)selectionByMovingInTableInfo:(id)arg1 inDirection:(int)arg2 withModifierKeys:(int)arg3 forReferenceMove:(BOOL)arg4 suppressWrap:(BOOL)arg5 ;
-(id)selectionByExtendingWithCellRange:(SCD_Struct_TS141)arg1 inTable:(id)arg2 selectionType:(int)arg3 cursorCell:(SCD_Struct_TS139)arg4 ;
-(id)initWithTableModel:(id)arg1 andCellID:(SCD_Struct_TS139)arg2 ;
-(void)enumerateSelectedCellsInTable:(id)arg1 withFlags:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS139)arg3 cursorCellID:(SCD_Struct_TS139)arg4 ;
-(id)initWithTableModel:(id)arg1 selectionType:(int)arg2 ;
-(id)initWithTableModel:(id)arg1 andCellRange:(SCD_Struct_TS141)arg2 ;
-(id)initWithTableModel:(id)arg1 cellID:(SCD_Struct_TS139)arg2 selectionType:(int)arg3 ;
-(id)initWithTableModel:(id)arg1 rowOrColumn:(int)arg2 index:(unsigned)arg3 count:(unsigned)arg4 ;
-(id)initWithTableModel:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(SCD_Struct_TS85)arg3 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 ;
-(id)selectionByAddingCellRange:(SCD_Struct_TS141)arg1 inTable:(id)arg2 withAnchor:(SCD_Struct_TS139)arg3 cursor:(SCD_Struct_TS139)arg4 selectionType:(int)arg5 ;
-(id)selectionByRemovingCellRange:(SCD_Struct_TS141)arg1 inTable:(id)arg2 withAnchor:(SCD_Struct_TS139)arg3 cursor:(SCD_Struct_TS139)arg4 selectionType:(int)arg5 ;
-(id)selectionByMovingInTableInfo:(id)arg1 inDirection:(int)arg2 withModifierKeys:(int)arg3 forReferenceMove:(BOOL)arg4 ;
-(void)enumerateSelectedCellsInTable:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)insert:(int)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3 ;
-(void)remove:(int)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3 ;
-(BOOL)areCellsInTheSameRegionInTable:(id)arg1 ;
-(BOOL)containsSelection:(id)arg1 ;
-(BOOL)containsCell:(SCD_Struct_TS139)arg1 ;
-(BOOL)intersectsPartialMergeRangeInTable:(id)arg1 ;
-(NSRange)searchReferenceRange;
-(void)setSearchReferenceRange:(NSRange)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(BOOL)isEqualToSelection:(id)arg1 ;
@end

