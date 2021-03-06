/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PLVideoPosterFrameView : UIView {

	UIImageView* _imageView;
	long long _scaleMode;

}

@property (nonatomic,readonly) CGRect imageFrame; 
-(void)setScaleMode:(long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)image;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)imageView;
-(CGRect)imageFrame;
@end

