/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController, UIImageView;

@interface SUSnapshotViewController : UIViewController {

	UIViewController* _originalViewController;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIViewController * originalViewController;              //@synthesize originalViewController=_originalViewController - In the implementation block
-(id)initWithOriginal:(id)arg1 ;
-(UIViewController *)originalViewController;
-(void)setOriginalViewController:(UIViewController *)arg1 ;
-(UIImageView *)imageView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
@end

