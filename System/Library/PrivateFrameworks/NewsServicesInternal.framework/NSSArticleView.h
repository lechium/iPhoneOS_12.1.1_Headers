/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <UIKitCore/UIView.h>

@class NSSArticleInternal, UILabel, UIImageView, UIView;

@interface NSSArticleView : UIView {

	NSSArticleInternal* _article;
	UILabel* _titleLabel;
	UILabel* _excerptLabel;
	UIImageView* _thumbnailImageView;
	UIView* _thumbnailContainerView;
	UILabel* _publisherLabel;
	UILabel* _dateLabel;
	UIImageView* _publisherLogoImageView;
	CGSize _preferredSize;

}

@property (assign,nonatomic,__weak) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * excerptLabel;                            //@synthesize excerptLabel=_excerptLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * thumbnailImageView;                  //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (assign,nonatomic,__weak) UIView * thumbnailContainerView;                   //@synthesize thumbnailContainerView=_thumbnailContainerView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * publisherLabel;                          //@synthesize publisherLabel=_publisherLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * dateLabel;                               //@synthesize dateLabel=_dateLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * publisherLogoImageView;              //@synthesize publisherLogoImageView=_publisherLogoImageView - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                                     //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,retain) NSSArticleInternal * article;                             //@synthesize article=_article - In the implementation block
-(void)_updateFonts;
-(void)setPreferredSize:(CGSize)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(NSSArticleInternal *)article;
-(void)setArticle:(NSSArticleInternal *)arg1 ;
-(UILabel *)excerptLabel;
-(UIImageView *)publisherLogoImageView;
-(void)setExcerptLabel:(UILabel *)arg1 ;
-(void)setPublisherLogoImageView:(UIImageView *)arg1 ;
-(UIImageView *)thumbnailImageView;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)setPublisherLabel:(UILabel *)arg1 ;
-(UILabel *)publisherLabel;
-(double)calculateHeightForWidth:(double)arg1 ;
-(UIView *)thumbnailContainerView;
-(void)setThumbnailContainerView:(UIView *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)_commonInit;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CGSize)preferredSize;
-(UILabel *)dateLabel;
@end

