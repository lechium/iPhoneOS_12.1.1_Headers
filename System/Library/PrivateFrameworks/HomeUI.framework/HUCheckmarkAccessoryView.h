/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIImageView;

@interface HUCheckmarkAccessoryView : UIImageView {

	BOOL _checked;
	BOOL _disabled;
	UIImageView* _checkmarkImageView;

}

@property (nonatomic,retain) UIImageView * checkmarkImageView;              //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (assign,nonatomic) BOOL checked;                                  //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                 //@synthesize disabled=_disabled - In the implementation block
+(id)checkmarkImage;
+(id)grayBorderColor;
+(double)borderWidth;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)_updateColors;
-(BOOL)disabled;
-(void)setChecked:(BOOL)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)checked;
@end

