/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonaUI/PersonaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface PRImageView : UIView {

	BOOL _circular;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,getter=isCircular,nonatomic) BOOL circular;              //@synthesize circular=_circular - In the implementation block
-(BOOL)isCircular;
-(void)setCircular:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

