/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface MSCLAudioCoverImageSelectionTableViewCell : UITableViewCell {

	UIImageView* _cameraImageView;
	UIImageView* _coverImageView;
	UILabel* _placeholderLabel;

}

@property (nonatomic,retain) UIImage * coverImage; 
@property (nonatomic,copy) NSString * placeholderText; 
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setCoverImage:(UIImage *)arg1 ;
-(UIImage *)coverImage;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

