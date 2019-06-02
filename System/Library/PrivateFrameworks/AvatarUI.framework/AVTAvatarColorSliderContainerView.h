/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/AVTColorSliderDelegate.h>

@protocol AVTAvatarColorSliderContainerViewDelegate;
@class AVTAvatarAttributeEditorSectionColorItem, AVTColorSlider, NSArray;

@interface AVTAvatarColorSliderContainerView : UIView <AVTColorSliderDelegate> {

	AVTAvatarAttributeEditorSectionColorItem* _sectionItem;
	id<AVTAvatarColorSliderContainerViewDelegate> _delegate;
	AVTColorSlider* _slider;
	NSArray* _layoutConstraints;

}

@property (nonatomic,retain) AVTColorSlider * slider;                                                    //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                                //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,retain) AVTAvatarAttributeEditorSectionColorItem * sectionItem;                     //@synthesize sectionItem=_sectionItem - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarColorSliderContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)setSlider:(AVTColorSlider *)arg1 ;
-(AVTColorSlider *)slider;
-(AVTAvatarAttributeEditorSectionColorItem *)sectionItem;
-(void)colorSlider:(id)arg1 valueChanged:(double)arg2 ;
-(void)colorSlider:(id)arg1 didFinishSelectingValue:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 userInterfaceLayoutDirection:(long long)arg2 ;
-(void)setSectionItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateSliderWithColorPreset:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateSliderTrackLayerAnimated:(BOOL)arg1 ;
-(void)setSectionItem:(AVTAvatarAttributeEditorSectionColorItem *)arg1 ;
-(void)setDelegate:(id<AVTAvatarColorSliderContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<AVTAvatarColorSliderContainerViewDelegate>)delegate;
@end

