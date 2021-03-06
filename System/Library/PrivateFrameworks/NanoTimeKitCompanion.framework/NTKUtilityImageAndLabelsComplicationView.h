/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@protocol NTKComplicationImageView;
@class UIView, NTKColoringLabel;

@interface NTKUtilityImageAndLabelsComplicationView : NTKUtilityComplicationView {

	UIView*<NTKComplicationImageView> _imageView;
	NTKColoringLabel* _firstLabel;
	NTKColoringLabel* _secondLabel;

}

@property (nonatomic,retain) UIView*<NTKComplicationImageView> imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * firstLabel;                            //@synthesize firstLabel=_firstLabel - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * secondLabel;                           //@synthesize secondLabel=_secondLabel - In the implementation block
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(/*^block*/id)arg1 ;
-(double)_widthThatFits;
-(void)_updateContentForMaxSizeChange;
-(BOOL)_shouldLayoutWithImageView;
-(void)setFirstLabel:(NTKColoringLabel *)arg1 ;
-(NTKColoringLabel *)firstLabel;
-(void)_layoutSubviewsHorizontally:(id)arg1 ;
-(void)_updateFirstLabelMaxSize;
-(BOOL)_isViewVisible:(id)arg1 ;
-(double)_gapBetweenView:(id)arg1 nextView:(id)arg2 ;
-(void)_setLabelTextProvider:(id)arg1 ;
-(void)_setLabelText:(id)arg1 ;
-(void)_setLabelAttributedText:(id)arg1 ;
-(void)_setSecondLabelText:(id)arg1 ;
-(void)_updateWithImageProvider:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
-(void)setSecondLabel:(NTKColoringLabel *)arg1 ;
-(NTKColoringLabel *)secondLabel;
@end

