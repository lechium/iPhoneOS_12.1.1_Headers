/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIImage;

@interface SKUIStarRatingView : UIView {

	double _elementSpacing;
	UIImageView* _ratingStarsImageView;
	UILabel* _textLabel;

}

@property (assign,nonatomic) double elementSpacing;                   //@synthesize elementSpacing=_elementSpacing - In the implementation block
@property (nonatomic,retain) UIImage * ratingStarsImage; 
@property (nonatomic,readonly) UILabel * textLabel; 
-(void)setElementSpacing:(double)arg1 ;
-(UIImage *)ratingStarsImage;
-(void)setRatingStarsImage:(UIImage *)arg1 ;
-(double)elementSpacing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
@end

