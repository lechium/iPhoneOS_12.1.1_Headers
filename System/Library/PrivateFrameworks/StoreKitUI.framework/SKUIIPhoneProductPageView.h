/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SKUIIPhoneProductPageView : UIView {

	UIView* _view;
	UIView* _bannerView;
	double _bannerOffset;

}

@property (nonatomic,retain) UIView * view;                    //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) double bannerOffset;              //@synthesize bannerOffset=_bannerOffset - In the implementation block
-(void)setBannerView:(UIView *)arg1 ;
-(UIView *)bannerView;
-(void)animateYPosition:(double)arg1 ;
-(double)bannerOffset;
-(void)setBannerOffset:(double)arg1 ;
-(UIView *)view;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setView:(UIView *)arg1 ;
@end

