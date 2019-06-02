/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class VideosExtrasBackgroundViewController, NSMapTable;

@interface VideosExtrasElementViewController : UIViewController {

	VideosExtrasBackgroundViewController* _backgroundViewController;
	NSMapTable* _bannerButtonMap;
	BOOL _wide;

}

@property (assign,getter=isWide,nonatomic) BOOL wide;              //@synthesize wide=_wide - In the implementation block
+(id)_borderView;
-(void)configureBackgroundWithElements:(id)arg1 ;
-(void)_configureBannerWithElement:(id)arg1 ;
-(void)_prepareLayout;
-(id)backgroundViewController;
-(unsigned long long)extrasSize;
-(BOOL)isWide;
-(void)_didActivateButtonWithItem:(id)arg1 ;
-(void)_startBackgroundAudio;
-(id)_installBackdrop:(id)arg1 ;
-(void)setWide:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
@end

