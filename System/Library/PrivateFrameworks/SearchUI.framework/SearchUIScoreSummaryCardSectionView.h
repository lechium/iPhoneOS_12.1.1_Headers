/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerBoxViewDelegate.h>

@class TLKSplitHeaderView, NSString;

@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerBoxViewDelegate> {

	TLKSplitHeaderView* _splitHeaderView;

}

@property (retain) TLKSplitHeaderView * splitHeaderView;              //@synthesize splitHeaderView=_splitHeaderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dragTitleForCardSection:(id)arg1 ;
+(int)separatorStyleForCardSection:(id)arg1 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)titleForScoreBoard:(id)arg1 forDisplay:(BOOL)arg2 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)setSplitHeaderView:(TLKSplitHeaderView *)arg1 ;
-(TLKSplitHeaderView *)splitHeaderView;
@end

