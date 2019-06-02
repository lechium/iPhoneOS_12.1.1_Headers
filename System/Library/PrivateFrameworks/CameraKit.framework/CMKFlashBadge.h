/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKBadgeView.h>

@class UIImage;

@interface CMKFlashBadge : CMKBadgeView {

	UIImage* __contentImage;

}

@property (nonatomic,retain) UIImage * _contentImage;              //@synthesize _contentImage=__contentImage - In the implementation block
-(CGSize)_imageSize;
-(UIEdgeInsets)_imageInsets;
-(UIImage *)_contentImage;
-(void)set_contentImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_commonInit;
-(id)_maskImage;
@end
