/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUILabel, UIImage, UIImageView;

@interface VUILibraryListItemView : UIView {

	VUILabel* _titleLabel;
	UIImage* _itemImage;
	UIImageView* _listImageView;

}

@property (nonatomic,retain) UIImageView * listImageView;              //@synthesize listImageView=_listImageView - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImage * itemImage;                      //@synthesize itemImage=_itemImage - In the implementation block
-(UIImage *)itemImage;
-(void)setItemImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(UIImageView *)listImageView;
-(void)setListImageView:(UIImageView *)arg1 ;
@end

