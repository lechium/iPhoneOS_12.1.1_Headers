/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MediaControlsContainerView, UIView;

@interface MediaControlsParentContainerView : UIView {

	long long _style;
	long long _selectedMode;
	MediaControlsContainerView* _mediaControlsContainerView;
	UIView* _routingView;
	UIView* _mediaControlsRoutingPickerView;
	long long _routingViewControllerAnimationCount;

}

@property (nonatomic,retain) UIView * mediaControlsRoutingPickerView;                              //@synthesize mediaControlsRoutingPickerView=_mediaControlsRoutingPickerView - In the implementation block
@property (assign,nonatomic) long long routingViewControllerAnimationCount;                        //@synthesize routingViewControllerAnimationCount=_routingViewControllerAnimationCount - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long selectedMode;                                               //@synthesize selectedMode=_selectedMode - In the implementation block
@property (nonatomic,retain) MediaControlsContainerView * mediaControlsContainerView;              //@synthesize mediaControlsContainerView=_mediaControlsContainerView - In the implementation block
@property (nonatomic,retain) UIView * routingView;                                                 //@synthesize routingView=_routingView - In the implementation block
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)selectedMode;
-(void)setSelectedMode:(long long)arg1 ;
-(MediaControlsContainerView *)mediaControlsContainerView;
-(UIView *)mediaControlsRoutingPickerView;
-(void)_updateTimeControlVisibility:(id)arg1 ;
-(void)_updateRoutingPickerVisibilityAnimated:(BOOL)arg1 ;
-(void)_toggleRoutingPickerAnimated:(BOOL)arg1 ;
-(void)_setInitialFrameForRoutingView:(id)arg1 ;
-(void)setRoutingView:(UIView *)arg1 ;
-(void)setMediaControlsContainerView:(MediaControlsContainerView *)arg1 ;
-(UIView *)routingView;
-(void)setMediaControlsRoutingPickerView:(UIView *)arg1 ;
-(long long)routingViewControllerAnimationCount;
-(void)setRoutingViewControllerAnimationCount:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)didMoveToWindow;
@end
