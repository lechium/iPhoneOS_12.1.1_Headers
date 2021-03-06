/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, AAUILabel, UIView;

@interface AAUIImageControl : UIControl {

	UIImageView* _imageView;
	AAUILabel* _label;
	UIView* _overlayView;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) AAUILabel * label;                    //@synthesize label=_label - In the implementation block
-(void)_updateLabelVisibility;
-(void)_updateOverlayViewVisibility;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(AAUILabel *)label;
@end

