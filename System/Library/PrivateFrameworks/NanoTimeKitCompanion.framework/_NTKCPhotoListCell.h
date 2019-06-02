/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIImageView, UIImage;

@interface _NTKCPhotoListCell : UICollectionViewCell {

	UIView* _selectionOverlayView;
	UIImageView* _selectionBadge;
	UIView* _highlightOverlayView;
	UIView* _content;
	UIImageView* _contentImageView;
	CGRect _crop;

}

@property (nonatomic,retain) UIImage * photo; 
@property (assign,nonatomic) CGRect crop;                  //@synthesize crop=_crop - In the implementation block
+(id)reuseIdentifier;
-(UIImage *)photo;
-(void)setPhoto:(UIImage *)arg1 ;
-(void)setCrop:(CGRect)arg1 ;
-(CGRect)crop;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
@end

