/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton, UIImageView, UIImage;

@interface SKUIRedeemCameraLandingView : UIView {

	UILabel* _bodyLabel;
	UIButton* _button;
	UILabel* _headerLabel;
	UIImageView* _imageView;
	long long _spacingStyle;

}

@property (nonatomic,readonly) UIButton * button;                 //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) long long spacingStyle;              //@synthesize spacingStyle=_spacingStyle - In the implementation block
-(id)initWithClientContext:(id)arg1 ;
-(void)setSpacingStyle:(long long)arg1 ;
-(long long)spacingStyle;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)button;
@end
