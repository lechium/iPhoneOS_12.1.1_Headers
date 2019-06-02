/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <SearchUI/SearchUIWatchListCardRowModelDelegate.h>

@class SearchUIButton, TLKSimpleRowView, NUIContainerStackView, SearchUIWatchListCardRowModel;

@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate> {

	SearchUIButton* _button;
	TLKSimpleRowView* _rowView;

}

@property (retain) NUIContainerStackView * contentView; 
@property (retain) SearchUIButton * button;                               //@synthesize button=_button - In the implementation block
@property (retain) TLKSimpleRowView * rowView;                            //@synthesize rowView=_rowView - In the implementation block
@property (retain) SearchUIWatchListCardRowModel * rowModel; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(TLKSimpleRowView *)rowView;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setRowView:(TLKSimpleRowView *)arg1 ;
-(void)didUpdateRowModel:(id)arg1 animate:(BOOL)arg2 ;
-(void)updateText:(id)arg1 image:(id)arg2 buttonState:(long long)arg3 ;
-(void)buttonPressed;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(SearchUIButton *)button;
-(void)setButton:(SearchUIButton *)arg1 ;
@end

