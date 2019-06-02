/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UITable_RowDataSource;
@class UITableViewHeaderFooterView, NSIndexPath;

@interface UITableViewRowData : NSObject <NSCopying> {

	id<UITable_RowDataSource> _tableView;
	long long _numSections;
	long long _sectionRowDataCapacity;
	id* _sectionRowData;
	UITableViewHeaderFooterView* _headerFooterViewUsedForMeasurements;
	double _minimumRowHeight;
	double _rowSpacing;
	double _tableViewWidth;
	double _tableHeaderHeight;
	double _tableFooterHeight;
	double _heightForTableHeaderViewHiding;
	double _tableTopPadding;
	double _tableBottomPadding;
	double _tableSidePadding;
	struct {
		unsigned tableHeaderHeightValid : 1;
		unsigned tableFooterHeightValid : 1;
		unsigned tableSidePaddingValid : 1;
		unsigned usesVariableMargins : 1;
		unsigned pinsTableHeaderView : 1;
	}  _rowDataFlags;
	NSIndexPath* _gapIndexPath;
	NSIndexPath* _reorderedIndexPath;
	NSIndexPath* _draggedIndexPath;
	double _defaultSectionHeaderHeight;
	double _defaultSectionFooterHeight;
	double _gapRowHeight;
	double _draggedRowHeight;

}

@property (nonatomic,readonly) double defaultSectionHeaderHeight;                                    //@synthesize defaultSectionHeaderHeight=_defaultSectionHeaderHeight - In the implementation block
@property (nonatomic,readonly) double defaultSectionFooterHeight;                                    //@synthesize defaultSectionFooterHeight=_defaultSectionFooterHeight - In the implementation block
@property (nonatomic,readonly) NSIndexPath * temporarilyDeletedIndexPathBeingReordered; 
@property (nonatomic,retain) NSIndexPath * gapIndexPath;                                             //@synthesize gapIndexPath=_gapIndexPath - In the implementation block
@property (assign,nonatomic) double gapRowHeight;                                                    //@synthesize gapRowHeight=_gapRowHeight - In the implementation block
@property (assign,nonatomic) double draggedRowHeight;                                                //@synthesize draggedRowHeight=_draggedRowHeight - In the implementation block
@property (nonatomic,retain) NSIndexPath * reorderedIndexPath;                                       //@synthesize reorderedIndexPath=_reorderedIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * draggedIndexPath;                                         //@synthesize draggedIndexPath=_draggedIndexPath - In the implementation block
@property (nonatomic,readonly) double heightForAutohidingTableHeaderView; 
@property (nonatomic,readonly) double heightForTableHeaderViewHiding; 
@property (assign,nonatomic) double minimumRowHeight;                                                //@synthesize minimumRowHeight=_minimumRowHeight - In the implementation block
@property (assign,nonatomic) double rowSpacing;                                                      //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (assign,nonatomic) double tableTopPadding;                                                 //@synthesize tableTopPadding=_tableTopPadding - In the implementation block
@property (assign,nonatomic) double tableBottomPadding;                                              //@synthesize tableBottomPadding=_tableBottomPadding - In the implementation block
@property (assign,nonatomic) double tableSidePadding;                                                //@synthesize tableSidePadding=_tableSidePadding - In the implementation block
@property (assign,nonatomic) BOOL usesVariableMargins; 
@property (assign,nonatomic) BOOL pinsTableHeaderView; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numberOfRows;
-(BOOL)usesVariableMargins;
-(id)initWithTableView:(id)arg1 ;
-(void)tableViewWidthDidChangeToWidth:(double)arg1 ;
-(void)ensureAllSectionsAreValid;
-(CGRect)floatingRectForHeaderInSection:(long long)arg1 visibleRect:(CGRect)arg2 heightCanBeGuessed:(BOOL)arg3 ;
-(double)heightForHeaderInSection:(long long)arg1 canGuess:(BOOL)arg2 ;
-(CGRect)floatingRectForFooterInSection:(long long)arg1 visibleRect:(CGRect)arg2 heightCanBeGuessed:(BOOL)arg3 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(double)heightForFooterInSection:(long long)arg1 canGuess:(BOOL)arg2 ;
-(void)invalidateAllSections;
-(void)invalidateSection:(long long)arg1 ;
-(double)heightForTableHeaderView;
-(void)tableHeaderHeightDidChangeToHeight:(double)arg1 ;
-(CGRect)rectForTable;
-(id)indexPathsForRowsInRect:(CGRect)arg1 ;
-(double)heightForTableFooterView;
-(void)tableFooterHeightDidChangeToHeight:(double)arg1 ;
-(int)sectionLocationForRow:(long long)arg1 inSection:(long long)arg2 ;
-(CGRect)rectForTableHeaderView;
-(CGRect)rectForTableFooterView;
-(double)maxHeaderTitleWidthForSection:(long long)arg1 ;
-(long long)headerAlignmentForSection:(long long)arg1 ;
-(double)maxFooterTitleWidthForSection:(long long)arg1 ;
-(long long)footerAlignmentForSection:(long long)arg1 ;
-(NSRange)globalRowsInRect:(CGRect)arg1 canGuess:(BOOL)arg2 ;
-(id)indexPathForRowAtGlobalRow:(long long)arg1 ;
-(CGRect)rectForGlobalRow:(long long)arg1 heightCanBeGuessed:(BOOL)arg2 ;
-(double)heightForTable;
-(CGRect)rectForRow:(long long)arg1 inSection:(long long)arg2 heightCanBeGuessed:(BOOL)arg3 ;
-(long long)numberOfSections;
-(CGRect)rectForFooterInSection:(long long)arg1 heightCanBeGuessed:(BOOL)arg2 ;
-(CGRect)rectForHeaderInSection:(long long)arg1 heightCanBeGuessed:(BOOL)arg2 ;
-(void)setHeight:(double)arg1 forRowAtIndexPath:(id)arg2 ;
-(double)heightForTableHeaderViewHiding;
-(CGRect)rectForSection:(long long)arg1 ;
-(NSIndexPath *)draggedIndexPath;
-(void)setHeightForTableHeaderViewHiding:(double)arg1 ;
-(double)heightForAutohidingTableHeaderView;
-(NSRange)sectionsInRect:(CGRect)arg1 ;
-(long long)globalRowForRowAtIndexPath:(id)arg1 ;
-(double)minimumRowHeight;
-(void)setReorderedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)gapIndexPath;
-(id)targetIndexPathForPoint:(CGPoint)arg1 adjustedForGap:(BOOL)arg2 ;
-(long long)dropLocationForPoint:(CGPoint)arg1 atIndexPath:(id)arg2 withInsets:(UIEdgeInsets)arg3 ;
-(id)indexPathsForRowsInRect:(CGRect)arg1 extraHitSpaceBetweenRows:(double)arg2 ;
-(BOOL)ensureHeightsFaultedInForScrollToIndexPath:(id)arg1 withScrollPosition:(long long)arg2 boundsHeight:(double)arg3 ;
-(double)tableSidePadding;
-(void)invalidateAllSectionOffsetsAndUpdatePadding;
-(NSIndexPath *)reorderedIndexPath;
-(double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(BOOL)arg3 ;
-(void)removeDropTargetGap;
-(void)addDropTargetGapAtIndexPath:(id)arg1 ;
-(void)moveDropTargetGapToIndexPath:(id)arg1 ;
-(void)setDraggedIndexPath:(NSIndexPath *)arg1 ;
-(void)addGapAtIndexPath:(id)arg1 ;
-(void)removeGap;
-(void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2 ;
-(BOOL)hasHeaderForSection:(long long)arg1 ;
-(int)sectionLocationForReorderedRow:(long long)arg1 inSection:(long long)arg2 ;
-(void)setUsesVariableMargins:(BOOL)arg1 ;
-(NSIndexPath *)temporarilyDeletedIndexPathBeingReordered;
-(void)adjustSectionOffsetsBeginningAtIndex:(long long)arg1 count:(long long)arg2 delta:(double)arg3 rowDelta:(long long)arg4 ;
-(void)setTableTopPadding:(double)arg1 ;
-(BOOL)shouldStripHeaderTopPaddingForSection:(long long)arg1 ;
-(void)setTableBottomPadding:(double)arg1 ;
-(double)defaultSectionFooterHeight;
-(double)rowSpacing;
-(void)setMinimumRowHeight:(double)arg1 ;
-(double)gapRowHeight;
-(long long)sectionForSectionRowData:(id)arg1 ;
-(double)offsetForSection:(id)arg1 ;
-(double)defaultSectionHeaderHeight;
-(void)_updateSectionRowDataArrayForNumSections:(long long)arg1 ;
-(void)_ensureSectionOffsetIsValidForSection:(long long)arg1 ;
-(void)_updateNumSections;
-(void)_updateTopAndBottomPadding;
-(void)restoreReorderedRowWithHeight:(double)arg1 atIndexPath:(id)arg2 ;
-(double)removeReorderedRowWithHeight:(double)arg1 atIndexPath:(id)arg2 ;
-(double)_dropTargetGapHeightForIndexPath:(id)arg1 ;
-(double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(BOOL)arg3 adjustForReorderedRow:(BOOL)arg4 ;
-(BOOL)pinsTableHeaderView;
-(BOOL)hasFooterForSection:(long long)arg1 ;
-(long long)_sectionRowForGlobalRow:(long long)arg1 inSection:(long long*)arg2 ;
-(long long)sectionForPoint:(CGPoint)arg1 ;
-(long long)_sectionForPoint:(CGPoint)arg1 beginningWithSection:(long long)arg2 numberOfSections:(long long)arg3 ;
-(void)_assertValidIndexPath:(id)arg1 allowEmptySection:(BOOL)arg2 ;
-(id)_nextIndexPathOrSectionHeader:(id)arg1 ;
-(id)_previousIndexPathOrSectionHeader:(id)arg1 ;
-(void)setPinsTableHeaderView:(BOOL)arg1 ;
-(CGRect)rectForGap;
-(long long)numberOfRowsBeforeSection:(long long)arg1 ;
-(double)heightForSection:(long long)arg1 ;
-(void)setTableSidePadding:(double)arg1 ;
-(void)setRowSpacing:(double)arg1 ;
-(double)tableTopPadding;
-(double)tableBottomPadding;
-(void)setGapIndexPath:(NSIndexPath *)arg1 ;
-(void)setGapRowHeight:(double)arg1 ;
-(double)draggedRowHeight;
-(void)setDraggedRowHeight:(double)arg1 ;
@end

