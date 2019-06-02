/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OADTable, OADTableProperties, OADTableStyle;

@interface OADTableStyleResolver : NSObject {

	OADTable* mTable;
	OADTableProperties* mTableProperties;
	OADTableStyle* mTableStyle;
	int mColumnCount;
	int mRowCount;
	OADTFTemplateMatrix<OADTableCell *>* mCellMatrix;
	OADTFTemplateMatrix<OADTablePartStyle *>* mCellStyles;
	OADTFTemplateMatrix<OADStroke *>* mStrokes[2];

}
-(void)applyCellStyleFromPart:(int)arg1 dir1:(int)arg2 fromI1:(int)arg3 fromI2:(int)arg4 dir1Span:(int)arg5 dir2Span:(int)arg6 ;
-(int)cellCountAlongDir:(int)arg1 ;
-(void)applyCellStyleOfBandsNormalToDir:(int)arg1 parity:(int)arg2 part:(int)arg3 ;
-(void)applyCellStyleOfExtremeVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2 part:(int)arg3 ;
-(void)applyCornerCellStyleWithRowPos:(int)arg1 columnPos:(int)arg2 part:(int)arg3 ;
-(void)applyWholeTableCellStyle;
-(void)applyBandCellStyles;
-(void)applyExtremeVectorCellStyles;
-(void)applyCornerCellStyles;
-(void)setStroke:(id)arg1 ofSegmentNormalToDir1:(int)arg2 i1:(int)arg3 fromI2:(int)arg4 ;
-(void)applyStroke:(int)arg1 fromPart:(int)arg2 normalToDir1:(int)arg3 i1:(int)arg4 fromI2:(int)arg5 dir2Span:(int)arg6 ;
-(void)applyStroke:(int)arg1 fromPart:(int)arg2 normalToDir1:(int)arg3 i1:(int)arg4 fromI2:(int)arg5 toI2:(int)arg6 ;
-(void)applyStrokesFromPart:(int)arg1 fromPos:(OADTMatrixPos)arg2 toPos:(OADTMatrixPos)arg3 ;
-(id)sourceCellAtI1:(int)arg1 i2:(int)arg2 dir1:(int)arg3 ;
-(int)cellParityRelativeToDir1:(int)arg1 i1:(int)arg2 i2:(int)arg3 ;
-(void)applyStrokesOfBandsNormalToDir:(int)arg1 parity:(int)arg2 part:(int)arg3 ;
-(void)applyStrokeOfExtremeVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2 ;
-(void)applyCornerStrokesWithRowPos:(int)arg1 columnPos:(int)arg2 part:(int)arg3 ;
-(void)createStrokeMatrices;
-(void)applyWholeTableStrokes;
-(void)applyBandStrokes;
-(void)applyExtremeVectorStrokes;
-(void)applyCornerStrokes;
-(void)applyTextStyle:(id)arg1 toParagraph:(id)arg2 ;
-(OADTMatrixPos)dominantCellInRowRange:(NSRange)arg1 columnRange:(NSRange)arg2 ;
-(id)strokeOfSegmentNormalToDir1:(int)arg1 i1:(int)arg2 fromI2:(int)arg3 ;
-(void)applyResolvedPartStyle:(id)arg1 leftStroke:(id)arg2 rightStroke:(id)arg3 topStroke:(id)arg4 bottomStroke:(id)arg5 toCell:(id)arg6 ;
-(void)fixVectorAtExtremePositionFlags;
-(void)loadCells;
-(void)applyCellStyles;
-(void)applyStyleStrokes;
-(void)applyResolvedStyling;
-(void)applyTextStyle:(id)arg1 toCell:(id)arg2 ;
-(void)flatten;
-(void)dealloc;
-(id)initWithTable:(id)arg1 ;
@end

