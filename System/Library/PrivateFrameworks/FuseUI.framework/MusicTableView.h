/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicBasicTableView.h>

@class NSArray;

@interface MusicTableView : MusicBasicTableView {

	long long _highlightedSectionHeaderViewIndex;
	BOOL _isUpdatingSeparatorInsets;
	long long _selectedSectionHeaderViewIndex;
	BOOL _trailingSeparatorInsetFollowsLayoutInsets;
	BOOL _shouldTreatContentOffsetChangesAsDeltas;

}

@property (assign,nonatomic) BOOL shouldTreatContentOffsetChangesAsDeltas;                //@synthesize shouldTreatContentOffsetChangesAsDeltas=_shouldTreatContentOffsetChangesAsDeltas - In the implementation block
@property (assign,nonatomic) id<MusicTableViewDelegate> delegate; 
@property (assign,nonatomic) BOOL trailingSeparatorInsetFollowsLayoutInsets;              //@synthesize trailingSeparatorInsetFollowsLayoutInsets=_trailingSeparatorInsetFollowsLayoutInsets - In the implementation block
@property (nonatomic,readonly) long long indexForSelectedSectionHeader; 
@property (nonatomic,copy,readonly) NSArray * visibleHeaderFooterViews; 
-(void)_updateSeparatorInset;
-(void)music_inheritedLayoutInsetsDidChange;
-(void)_touchesBegan:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(void)_touchesCancelled:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(void)_touchesEnded:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(void)_touchesMoved:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3 ;
-(BOOL)shouldTreatContentOffsetChangesAsDeltas;
-(void)setShouldTreatContentOffsetChangesAsDeltas:(BOOL)arg1 ;
-(void)setTrailingSeparatorInsetFollowsLayoutInsets:(BOOL)arg1 ;
-(BOOL)trailingSeparatorInsetFollowsLayoutInsets;
-(long long)indexForSelectedSectionHeader;
-(void)deselectHeaderForSection:(long long)arg1 animated:(BOOL)arg2 ;
-(void)selectHeaderForSection:(long long)arg1 animated:(BOOL)arg2 ;
-(NSArray *)visibleHeaderFooterViews;
-(void)_updateChildSeparatorInsets;
-(void)_clearHeaderViewSelectionAnimated:(BOOL)arg1 ;
-(long long)_sectionForSelectableHeaderView:(id)arg1 ;
-(void)_clearHeaderViewHighlightAnimated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(BOOL)_shouldDrawSeparatorAtBottomOfSection:(long long)arg1 ;
-(void)_rebuildGeometry;
@end

