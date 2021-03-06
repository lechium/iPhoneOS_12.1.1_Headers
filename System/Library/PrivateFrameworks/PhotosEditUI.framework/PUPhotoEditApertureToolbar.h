/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PUApertureSliderDelegate.h>
#import <libobjc.A.dylib/PUPhotoEditLayoutDynamicAdaptable.h>

@protocol PUPhotoEditApertureToolbarDelegate;
@class UIView, _UIBackdropView, NSMutableArray, NSString, PUApertureSlider, UILabel;

@interface PUPhotoEditApertureToolbar : UIViewController <PUApertureSliderDelegate, PUPhotoEditLayoutDynamicAdaptable> {

	UIView* _containerView;
	UIView* _solidBackgroundView;
	_UIBackdropView* _backdropBackgroundView;
	BOOL _isResizing;
	CGSize _cachedSize;
	NSMutableArray* _constraints;
	BOOL _useTranslucentBackground;
	long long _layoutOrientation;
	id<PUPhotoEditApertureToolbarDelegate> _delegate;
	double _sliderLength;
	NSString* _backdropViewGroupName;
	PUApertureSlider* _slider;
	UILabel* _depthEffectLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) PUApertureSlider * slider;                                           //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UILabel * depthEffectLabel;                                          //@synthesize depthEffectLabel=_depthEffectLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                                //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoEditApertureToolbarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double sliderLength;                                                 //@synthesize sliderLength=_sliderLength - In the implementation block
@property (nonatomic,readonly) double apertureValue; 
@property (nonatomic,readonly) double originalApertureValue; 
@property (assign,nonatomic) double minimumApertureValue; 
@property (assign,nonatomic) double maximumApertureValue; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) UIEdgeInsets preferredPreviewViewInsets; 
@property (assign,nonatomic) BOOL useTranslucentBackground;                                       //@synthesize useTranslucentBackground=_useTranslucentBackground - In the implementation block
@property (nonatomic,copy) NSString * backdropViewGroupName;                                      //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long layoutOrientation; 
-(void)setApertureValueClosestTo:(double)arg1 ;
-(double)apertureValue;
-(void)apertureSliderDidChangeApertureValue:(id)arg1 ;
-(void)setSlider:(PUApertureSlider *)arg1 ;
-(PUApertureSlider *)slider;
-(void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIEdgeInsets)preferredPreviewViewInsets;
-(void)_updateBackgroundAnimated:(BOOL)arg1 ;
-(void)setUseTranslucentBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUseTranslucentBackground:(BOOL)arg1 ;
-(BOOL)useTranslucentBackground;
-(void)setMaximumApertureValue:(double)arg1 ;
-(void)setMinimumApertureValue:(double)arg1 ;
-(void)setOriginalApertureValueClosestTo:(double)arg1 ;
-(void)setSliderLength:(double)arg1 ;
-(double)sliderLength;
-(double)minimumApertureValue;
-(double)maximumApertureValue;
-(double)originalApertureValue;
-(UILabel *)depthEffectLabel;
-(void)setDepthEffectLabel:(UILabel *)arg1 ;
-(id)init;
-(void)setDelegate:(id<PUPhotoEditApertureToolbarDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id<PUPhotoEditApertureToolbarDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(NSString *)backdropViewGroupName;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(void)updateViewConstraints;
-(BOOL)enabled;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
@end

