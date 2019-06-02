/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPContainedObject.h>

@class TSTTileIDKeyDict, TSTTableHeaderStorage, TSPLazyReference, TSTCustomFormatList, TSTMergeRegionMap;

@interface TSTTableDataStore : TSPContainedObject {

	TSTTableRBTreeNode_s* mColumnTileIndex;
	TSTTableRBTreeNode_s* mRowTileIndex;
	TSTTileIDKeyDict* mTileStorage;
	TSTTableHeaderStorage* mRowHeaderStorage;
	TSPLazyReference* mColumnHeaderStorageReference;
	TSPLazyReference* mConditionalStyleSetTableReference;
	TSPLazyReference* mStringTableReference;
	TSPLazyReference* mStyleTableReference;
	TSPLazyReference* mFormulaTableReference;
	TSPLazyReference* mFormulaErrorTableReference;
	TSPLazyReference* mRichTextPayloadTableReference;
	TSPLazyReference* mFormatTableReference;
	TSPLazyReference* mMultipleChoiceListFormatTableReference;
	TSPLazyReference* mCommentStorageTableReference;
	TSTCustomFormatList* mPasteboardCustomFormatList;
	unsigned short mNextRowStripID;
	unsigned short mNextColumnStripID;
	TSTMergeRegionMap* mMergedCellRanges;
	unsigned mCellCount;
	BOOL mCellCountValid;
	BOOL mDrawableIsBeingCopied;
	unsigned mStorageVersion;

}
-(id)initWithOwner:(id)arg1 ;
-(void)debugDump;
-(void)setDrawableIsBeingCopied:(BOOL)arg1 ;
-(void)setStorageParentToInfo:(id)arg1 ;
-(void)p_updateTileStorageToCurrentVersion;
-(BOOL)needToUpgradeCellStorage;
-(void)upgradeDataStoreCellStorage;
-(void)dealloc;
-(void)validate;
@end
