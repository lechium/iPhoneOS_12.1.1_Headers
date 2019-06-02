/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICCollapsibleBaseView.h>

@class ICImageAndMovieThumbnailView, UIImage;

@interface ICCollapsibleThumbnailView : ICCollapsibleBaseView {

	BOOL _showAsMovie;
	UIImage* _image;
	unsigned long long _imageScaling;
	ICImageAndMovieThumbnailView* _thumbnailView;

}

@property (nonatomic,retain) ICImageAndMovieThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;                           //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) BOOL showAsMovie;                                          //@synthesize showAsMovie=_showAsMovie - In the implementation block
-(ICImageAndMovieThumbnailView *)thumbnailView;
-(void)setThumbnailView:(ICImageAndMovieThumbnailView *)arg1 ;
-(unsigned long long)imageScaling;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(BOOL)showAsMovie;
-(void)setShowAsMovie:(BOOL)arg1 ;
-(void)performSetup;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
@end

