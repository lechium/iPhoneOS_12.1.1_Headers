/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIImage, NSString, UIImageView, UILabel;

@interface WLKUIAppCell : UICollectionViewCell {

	UIImage* _image;
	NSString* _title;
	BOOL _didLayout;
	UIImageView* _imageView;
	UILabel* _titleLabel;

}
-(void)setTitle:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
@end
