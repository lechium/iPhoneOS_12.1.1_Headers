/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAMFilterScrubberView, PUApertureSlider;

@interface CAMUtilityBar : UIView {

	CAMFilterScrubberView* _filterScrubberView;
	PUApertureSlider* _apertureSlider;
	unsigned long long _visibleContent;

}

@property (nonatomic,retain) CAMFilterScrubberView * filterScrubberView;              //@synthesize filterScrubberView=_filterScrubberView - In the implementation block
@property (nonatomic,retain) PUApertureSlider * apertureSlider;                       //@synthesize apertureSlider=_apertureSlider - In the implementation block
@property (assign,nonatomic) unsigned long long visibleContent;                       //@synthesize visibleContent=_visibleContent - In the implementation block
-(void)setFilterScrubberView:(CAMFilterScrubberView *)arg1 ;
-(void)setApertureSlider:(PUApertureSlider *)arg1 ;
-(unsigned long long)visibleContent;
-(void)setVisibleContent:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisibilityForUpdatedContent:(unsigned long long)arg1 contentView:(id)arg2 ;
-(void)setVisibleContent:(unsigned long long)arg1 ;
-(void)_updateVisibleViewAnimated:(BOOL)arg1 ;
-(PUApertureSlider *)apertureSlider;
-(CAMFilterScrubberView *)filterScrubberView;
-(void)_layoutFilterScrubberView;
-(void)_layoutPortraitApertureSlider;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
