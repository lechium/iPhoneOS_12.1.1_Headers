/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICCollapsibleBaseView.h>

@class UIImageView, UIImage, UIColor;

@interface ICCollapsibleImageView : ICCollapsibleBaseView {

	BOOL _shouldEnableLetterpressIfSupported;
	UIImage* _image;
	UIColor* _tintColor;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableLetterpressIfSupported;              //@synthesize shouldEnableLetterpressIfSupported=_shouldEnableLetterpressIfSupported - In the implementation block
@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                  //@synthesize tintColor=_tintColor - In the implementation block
-(void)performSetup;
-(BOOL)shouldEnableLetterpressIfSupported;
-(void)setShouldEnableLetterpressIfSupported:(BOOL)arg1 ;
-(void)enableLetterpressIfSupported;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIImageView *)imageView;
-(UIColor *)tintColor;
-(void)setImageView:(UIImageView *)arg1 ;
@end

