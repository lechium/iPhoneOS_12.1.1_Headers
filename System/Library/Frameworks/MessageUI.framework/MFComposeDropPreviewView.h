/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIBezierPath, UIImage, UIImageView;

@interface MFComposeDropPreviewView : UIView {

	UIView* _previewView;
	UIBezierPath* _previewClippingPath;
	UIImage* _finalImage;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * previewView;                            //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIBezierPath * previewClippingPath;              //@synthesize previewClippingPath=_previewClippingPath - In the implementation block
@property (nonatomic,retain) UIImage * finalImage;                            //@synthesize finalImage=_finalImage - In the implementation block
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)setFinalImage:(UIImage *)arg1 ;
-(void)setPreviewClippingPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)previewClippingPath;
-(UIImage *)finalImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end

