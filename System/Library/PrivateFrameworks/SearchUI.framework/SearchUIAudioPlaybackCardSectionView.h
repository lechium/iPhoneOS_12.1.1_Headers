/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>
#import <SearchUI/SearchUISelectableTextViewDelegate.h>
#import <SearchUI/SearchUICardSectionViewUpdatable.h>

@class SKUIPlayButton, TLKStackView, NSString;

@interface SearchUIAudioPlaybackCardSectionView : SearchUICardSectionView <NUIContainerStackViewDelegate, SearchUISelectableTextViewDelegate, SearchUICardSectionViewUpdatable> {

	SKUIPlayButton* _playButton;

}

@property (retain) TLKStackView * contentView; 
@property (nonatomic,retain) SKUIPlayButton * playButton;              //@synthesize playButton=_playButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_playButtonPressed:(id)arg1 ;
-(SKUIPlayButton *)playButton;
-(id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3 ;
-(id)setupContentView;
-(void)selectableTextView:(id)arg1 presentViewController:(id)arg2 ;
-(void)_updateStateFromCardSection:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateStateFromCardSection:(id)arg1 ;
-(void)setPlayButton:(SKUIPlayButton *)arg1 ;
@end

