/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCAttachmentViewController.h>

@class UIView, ISAnimatedImagePlayer;

@interface NCImageAttachmentViewController : NCAttachmentViewController {

	UIView* _imageView;
	ISAnimatedImagePlayer* _animatedImagePlayer;
	CGSize _contentSize;
	CGSize _imageSize;

}

@property (assign,nonatomic) CGSize imageSize;                                         //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) UIView * imageView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) ISAnimatedImagePlayer * animatedImagePlayer;              //@synthesize animatedImagePlayer=_animatedImagePlayer - In the implementation block
-(ISAnimatedImagePlayer *)animatedImagePlayer;
-(void)setImageSize:(CGSize)arg1 ;
-(id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2 ;
-(void)setAnimatedImagePlayer:(ISAnimatedImagePlayer *)arg1 ;
-(void)dealloc;
-(UIView *)imageView;
-(CGSize)contentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(CGSize)imageSize;
-(void)setImageView:(UIView *)arg1 ;
@end

