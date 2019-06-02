/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStackView.h>

@class UIImageView, UILabel, UIStackView, NSString;

@interface HUCameraErrorView : UIStackView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIStackView* _labelStackView;

}

@property (nonatomic,readonly) UIImageView * imageView;                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * labelStackView;              //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * descriptionText; 
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(UILabel *)descriptionLabel;
-(UIStackView *)labelStackView;
-(id)init;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setTitleText:(NSString *)arg1 ;
@end

