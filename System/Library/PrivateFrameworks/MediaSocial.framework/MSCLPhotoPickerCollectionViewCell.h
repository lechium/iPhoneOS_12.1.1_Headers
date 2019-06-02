/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface MSCLPhotoPickerCollectionViewCell : UICollectionViewCell {

	UIImageView* _checkmarkImageView;
	UIImageView* _thumbnailImageView;
	UIImageView* _videoGlyphImageView;

}

@property (assign,nonatomic) BOOL showsSelectionCheckmark; 
@property (assign,nonatomic) BOOL showsVideoGlyph; 
@property (nonatomic,readonly) UIImageView * thumbnailImageView;              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
-(UIImageView *)thumbnailImageView;
-(void)setShowsSelectionCheckmark:(BOOL)arg1 ;
-(void)setShowsVideoGlyph:(BOOL)arg1 ;
-(BOOL)showsSelectionCheckmark;
-(BOOL)showsVideoGlyph;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
@end
