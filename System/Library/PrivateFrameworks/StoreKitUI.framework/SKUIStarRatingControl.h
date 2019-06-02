/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UIImage;

@interface SKUIStarRatingControl : UIControl {

	long long _previousUserRating;
	UIImageView* _emptyStarsImageView;
	UIImageView* _filledStarsImageView;
	long long _userRating;
	float _starSpacing;
	float _starWidth;

}

@property (nonatomic,retain) UIImage * emptyStarsImage; 
@property (nonatomic,retain) UIImage * filledStarsImage; 
@property (assign,nonatomic) long long userRating;                    //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) float starSpacing;                       //@synthesize starSpacing=_starSpacing - In the implementation block
@property (assign,nonatomic) float starWidth;                         //@synthesize starWidth=_starWidth - In the implementation block
-(void)setStarWidth:(float)arg1 ;
-(long long)userRating;
-(void)setUserRating:(long long)arg1 ;
-(void)setStarSpacing:(float)arg1 ;
-(void)setEmptyStarsImage:(UIImage *)arg1 ;
-(void)setFilledStarsImage:(UIImage *)arg1 ;
-(void)_updateUserRatingWithTouch:(id)arg1 ;
-(double)_unfilledStarsMinX;
-(float)starWidth;
-(float)starSpacing;
-(double)_unfilledStarsWidth;
-(UIImage *)emptyStarsImage;
-(UIImage *)filledStarsImage;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end
