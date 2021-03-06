/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexSet;

@interface TSTCellRegion : NSObject <NSCopying> {

	unsigned long long mCellRangesCount;
	SCD_Struct_TS141* mCellRanges;
	SCD_Struct_TS140 mBoundingCellRange;
	unsigned long long mCellCount;
	NSIndexSet* mIntersectingColumnsIndexSet;
	NSIndexSet* mIntersectingRowsIndexSet;
	SCD_Struct_TS139 mUpperLeftCellID;
	SCD_Struct_TS139 mBottomRightCellID;

}

@property (nonatomic,readonly) SCD_Struct_TS141 boundingCellRange; 
@property (nonatomic,readonly) unsigned long long cellCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL isRectangle; 
@property (nonatomic,readonly) SCD_Struct_TS139 upperLeftCellID; 
@property (nonatomic,readonly) SCD_Struct_TS139 bottomRightCellID; 
@property (nonatomic,readonly) unsigned short numberOfIntersectingColumns; 
@property (nonatomic,readonly) unsigned short numberOfIntersectingRows; 
+(id)regionFromRange:(SCD_Struct_TS141)arg1 ;
+(id)invalidRegion;
+(id)region:(id)arg1 addingRange:(SCD_Struct_TS141)arg2 ;
+(id)region:(id)arg1 subtractingRange:(SCD_Struct_TS141)arg2 ;
+(id)region:(id)arg1 intersectingRange:(SCD_Struct_TS141)arg2 ;
+(id)unionEveryRangeInRegion:(id)arg1 withRange:(SCD_Struct_TS141)arg2 ;
+(id)region:(id)arg1 addingRegion:(id)arg2 ;
+(id)region:(id)arg1 subtractingRegion:(id)arg2 ;
+(id)regionFromCellMap:(id)arg1 ;
+(id)regionFillingColumnsFromRegion:(id)arg1 ;
+(id)regionFillingRowsFromRegion:(id)arg1 ;
+(id)regionFromRowIndices:(id)arg1 ;
+(id)regionFromColumnIndices:(id)arg1 ;
-(unsigned long long)cellCount;
-(SCD_Struct_TS141)boundingCellRange;
-(unsigned short)numberOfIntersectingRows;
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned short)numberOfIntersectingColumns;
-(void)enumerateColumnsUsingBlock:(/*^block*/id)arg1 ;
-(id)regionOffsetBy:(SCD_Struct_TS85)arg1 ;
-(SCD_Struct_TS139)suitableAnchor;
-(SCD_Struct_TS139)suitableCursor;
-(SCD_Struct_TS139)upperLeftCellID;
-(BOOL)equalsCellRange:(SCD_Struct_TS141)arg1 ;
-(BOOL)containsCellID:(SCD_Struct_TS139)arg1 ;
-(id)regionByAddingRange:(SCD_Struct_TS141)arg1 ;
-(id)regionBySubtractingRange:(SCD_Struct_TS141)arg1 ;
-(BOOL)equalsCellRegion:(id)arg1 ;
-(BOOL)containsCellRegion:(id)arg1 ;
-(NSObject*)iterator;
-(BOOL)intersectsCellRange:(SCD_Struct_TS141)arg1 ;
-(BOOL)containsCellRange:(SCD_Struct_TS141)arg1 ;
-(void)p_insertRangeIntoRegion:(SCD_Struct_TS141)arg1 ;
-(void)p_calculateAncillaryInformation;
-(void)enumerateCellRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)regionByIntersectingRange:(SCD_Struct_TS141)arg1 ;
-(void)p_calculateIntersectingColumns;
-(void)p_calculateIntersectingRows;
-(void)p_calculateUpperLeftAndBottomRightCellID;
-(id)regionByUnioningEveryRangeInRegionWithRange:(SCD_Struct_TS141)arg1 ;
-(id)regionByAddingRegion:(id)arg1 ;
-(id)regionBySubtractingRegion:(id)arg1 ;
-(id)regionByRemovingRows:(id)arg1 ;
-(id)regionByRemovingColumns:(id)arg1 ;
-(id)regionByIntersectingRowIndices:(id)arg1 ;
-(id)regionByIntersectingColumnIndices:(id)arg1 ;
-(id)regionByAddingRows:(id)arg1 ;
-(id)regionByAddingColumns:(id)arg1 ;
-(id)regionByApplyingRowMapping:(id)arg1 ;
-(SCD_Struct_TS139)bottomRightCellID;
-(BOOL)isRectangle;
-(BOOL)partiallyIntersectsCellRange:(SCD_Struct_TS141)arg1 ;
-(BOOL)intersectsColumn:(unsigned char)arg1 ;
-(BOOL)intersectsRow:(unsigned short)arg1 ;
-(id)intersectingColumnsIndexSet;
-(id)intersectingRowsIndexSet;
-(NSObject*)rightToLeftIterator;
-(NSObject*)topToBottomIterator;
-(void)enumerateCellIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInDirection:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateRowRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateColumnRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)fillCellRangeRowMajorSet:(set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUColumnRowRect> >*)arg1 leftToRight:(BOOL)arg2 ;
-(void)fillCellRangeColMajorSet:(set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> >*)arg1 leftToRight:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isValid;
@end

