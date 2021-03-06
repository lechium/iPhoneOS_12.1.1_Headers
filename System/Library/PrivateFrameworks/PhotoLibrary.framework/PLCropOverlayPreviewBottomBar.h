/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface PLCropOverlayPreviewBottomBar : UIView {

	long long _backgroundStyle;
	UIButton* _cancelButton;
	UIButton* _doneButton;
	UIButton* _playbackButton;

}

@property (assign,nonatomic) long long backgroundStyle;                //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                  //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIButton * playbackButton;              //@synthesize playbackButton=_playbackButton - In the implementation block
-(UIButton *)playbackButton;
-(void)_updateBackgroundStyle;
-(void)_commonPLCropOverlayEditPhotoBottomBarInitialization;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(UIButton *)cancelButton;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(UIButton *)doneButton;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
@end

