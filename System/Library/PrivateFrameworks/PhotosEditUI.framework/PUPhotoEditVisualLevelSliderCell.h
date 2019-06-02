/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIImage;

@interface PUPhotoEditVisualLevelSliderCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIImage* _thumbnail;
	unsigned long long _roundedCornersEdge;

}

@property (nonatomic,retain) UIImage * thumbnail;                                //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCornersEdge;              //@synthesize roundedCornersEdge=_roundedCornersEdge - In the implementation block
-(void)setThumbnail:(id)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)roundedCornersEdge;
-(void)setRoundedCornersEdge:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
@end
