/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtras-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray, IKImageElement, MPUArtworkView, NSTimer, UIImageView;

@interface VideosExtrasBackgroundViewController : UIViewController {

	NSArray* _backgroundElements;
	IKImageElement* _displayedImageElement;
	NSArray* _imageConstraints;
	MPUArtworkView* _imageView;
	NSTimer* _updateTimer;
	UIImageView* _vignetteView;
	unsigned long long _vignetteType;

}

@property (nonatomic,readonly) NSArray * backgroundElements;               //@synthesize backgroundElements=_backgroundElements - In the implementation block
@property (assign,nonatomic) unsigned long long vignetteType;              //@synthesize vignetteType=_vignetteType - In the implementation block
+(id)vignetteImageForType:(unsigned long long)arg1 ;
-(void)_updateImage;
-(void)_invalidateTimer;
-(void)setVignetteType:(unsigned long long)arg1 ;
-(void)_initVignette;
-(void)_scheduleTimerIfNeeded;
-(void)_didReceiveImage:(id)arg1 ;
-(void)_updateConstraintsForImageSize:(CGSize)arg1 position:(unsigned long long)arg2 ;
-(id)initWithBackgroundElement:(id)arg1 ;
-(id)initWithBackgroundElements:(id)arg1 ;
-(NSArray *)backgroundElements;
-(unsigned long long)vignetteType;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

