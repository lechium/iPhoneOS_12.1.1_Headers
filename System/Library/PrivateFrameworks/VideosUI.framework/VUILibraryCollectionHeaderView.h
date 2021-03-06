/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class VUILabel, UIButton;

@interface VUILibraryCollectionHeaderView : UICollectionReusableView {

	long long _headerViewStyle;
	VUILabel* _titleLabel;
	VUILabel* _subtitleLabel;
	UIButton* _seeAllButton;
	double _titleTopMargin;
	double _subtitleTitleMargin;
	double _bottomTextMargin;
	double _buttonHorizontalPadding;

}

@property (nonatomic,retain) VUILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * seeAllButton;                     //@synthesize seeAllButton=_seeAllButton - In the implementation block
@property (assign,nonatomic) double titleTopMargin;                       //@synthesize titleTopMargin=_titleTopMargin - In the implementation block
@property (assign,nonatomic) double subtitleTitleMargin;                  //@synthesize subtitleTitleMargin=_subtitleTitleMargin - In the implementation block
@property (assign,nonatomic) double bottomTextMargin;                     //@synthesize bottomTextMargin=_bottomTextMargin - In the implementation block
@property (assign,nonatomic) double buttonHorizontalPadding;              //@synthesize buttonHorizontalPadding=_buttonHorizontalPadding - In the implementation block
@property (nonatomic,readonly) long long headerViewStyle;                 //@synthesize headerViewStyle=_headerViewStyle - In the implementation block
+(void)configureCollectionHeaderView:(id)arg1 title:(id)arg2 subtitle:(id)arg3 buttonString:(id)arg4 style:(long long)arg5 ;
-(VUILabel *)subtitleLabel;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)setSeeAllButton:(UIButton *)arg1 ;
-(void)setTitleTopMargin:(double)arg1 ;
-(void)setBottomTextMargin:(double)arg1 ;
-(void)setSubtitleTitleMargin:(double)arg1 ;
-(void)setButtonHorizontalPadding:(double)arg1 ;
-(long long)headerViewStyle;
-(UIButton *)seeAllButton;
-(double)titleTopMargin;
-(double)subtitleTitleMargin;
-(double)bottomTextMargin;
-(double)buttonHorizontalPadding;
@end

