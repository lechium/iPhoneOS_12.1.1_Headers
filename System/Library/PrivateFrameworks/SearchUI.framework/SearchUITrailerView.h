/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <TemplateKit/TLKStackView.h>

@class SearchUITrailersCardSectionView, UILabel, SKUIPlayButton, SFPunchout, UIView;

@interface SearchUITrailerView : TLKStackView {

	SearchUITrailersCardSectionView* _cardSectionView;
	UILabel* _titleLabel;
	SKUIPlayButton* _playButton;
	SFPunchout* _punchout;
	UIView* _centeredBoxView;

}

@property (__weak) SearchUITrailersCardSectionView * cardSectionView;              //@synthesize cardSectionView=_cardSectionView - In the implementation block
@property (retain) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) SKUIPlayButton * playButton;                                    //@synthesize playButton=_playButton - In the implementation block
@property (retain) SFPunchout * punchout;                                          //@synthesize punchout=_punchout - In the implementation block
@property (retain) UIView * centeredBoxView;                                       //@synthesize centeredBoxView=_centeredBoxView - In the implementation block
-(SFPunchout *)punchout;
-(void)playTrailer;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(SKUIPlayButton *)playButton;
-(id)initWithMediaItem:(id)arg1 cardSectionView:(id)arg2 ;
-(void)setCardSectionView:(SearchUITrailersCardSectionView *)arg1 ;
-(void)setCenteredBoxView:(UIView *)arg1 ;
-(SearchUITrailersCardSectionView *)cardSectionView;
-(UIView *)centeredBoxView;
-(void)setPlayButton:(SKUIPlayButton *)arg1 ;
-(UILabel *)titleLabel;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

