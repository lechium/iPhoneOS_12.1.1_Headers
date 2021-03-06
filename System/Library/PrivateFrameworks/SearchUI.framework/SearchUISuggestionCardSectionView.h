/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>

@class SearchUIImageView, TLKEmojiableVibrantLabel, NUIContainerStackView;

@interface SearchUISuggestionCardSectionView : SearchUICardSectionView {

	SearchUIImageView* _iconView;
	TLKEmojiableVibrantLabel* _suggestionLabel;

}

@property (retain) NUIContainerStackView * contentView; 
@property (retain) SearchUIImageView * iconView;                            //@synthesize iconView=_iconView - In the implementation block
@property (retain) TLKEmojiableVibrantLabel * suggestionLabel;              //@synthesize suggestionLabel=_suggestionLabel - In the implementation block
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)_imageForSuggestion:(id)arg1 withStyle:(unsigned long long)arg2 ;
+(id)suggestedContactIconWithStyle:(unsigned long long)arg1 ;
+(id)suggestedQueryIconWithStyle:(unsigned long long)arg1 ;
-(SearchUIImageView *)iconView;
-(void)setIconView:(SearchUIImageView *)arg1 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setSuggestionLabel:(TLKEmojiableVibrantLabel *)arg1 ;
-(TLKEmojiableVibrantLabel *)suggestionLabel;
@end

