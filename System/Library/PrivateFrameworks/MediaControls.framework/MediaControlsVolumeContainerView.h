/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class MPVolumeSlider, NSString;

@interface MediaControlsVolumeContainerView : UIView <UIGestureRecognizerDelegate> {

	BOOL _transitioning;
	BOOL _onScreen;
	MPVolumeSlider* _volumeSlider;
	long long _style;

}

@property (nonatomic,retain) MPVolumeSlider * volumeSlider;                          //@synthesize volumeSlider=_volumeSlider - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;              //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                        //@synthesize onScreen=_onScreen - In the implementation block
@property (assign,nonatomic) long long style;                                        //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTransitioning:(BOOL)arg1 ;
-(void)setVolumeSlider:(MPVolumeSlider *)arg1 ;
-(MPVolumeSlider *)volumeSlider;
-(void)setOnScreen:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 slider:(id)arg2 ;
-(void)_updateVolumeStyle;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(BOOL)isOnScreen;
-(BOOL)isTransitioning;
@end

