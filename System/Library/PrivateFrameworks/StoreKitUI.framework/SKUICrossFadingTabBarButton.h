/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIImageView, _Badge, NSString, UIImage;

@interface SKUICrossFadingTabBarButton : UIControl {

	UILabel* _selectedTitleLabel;
	UIImageView* _selectedImageView;
	UILabel* _standardTitleLabel;
	UIImageView* _standardImageView;
	_Badge* _badge;
	NSString* _title;
	UIImage* _image;
	UIImage* _selectedImage;
	double _selectionProgress;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;               //@synthesize selectedImage=_selectedImage - In the implementation block
@property (assign,nonatomic) double selectionProgress;              //@synthesize selectionProgress=_selectionProgress - In the implementation block
-(void)setSelectionProgress:(double)arg1 ;
-(double)selectionProgress;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)_setBadgeValue:(id)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(UIImage *)selectedImage;
-(void)_positionBadge;
@end

