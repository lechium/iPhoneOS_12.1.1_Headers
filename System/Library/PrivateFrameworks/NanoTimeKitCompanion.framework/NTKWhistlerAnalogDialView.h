/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, CALayer, NSArray, NTKWhistlerAnalogColorPalette;

@interface NTKWhistlerAnalogDialView : UIView {

	CLKDevice* _device;
	CALayer* _dialBackgroundLayer;
	CALayer* _ticksLayer;
	NSArray* _allTicks;
	NSArray* _allMinuteTicks;
	NSArray* _allHourTicks;
	double _tickPadding;
	NTKWhistlerAnalogColorPalette* _colorPalette;

}
+(id)_disabledLayerActions;
-(void)cleanupAfterZoom;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)prepareForEdit;
-(void)cleanupAfterEdit;
-(void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(double)arg1 invisbleTicksAlpha:(double)arg2 ;
-(void)prepareForZoom;
-(void)applyZoomFraction:(double)arg1 ;
-(void)applyColorTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3 ;
-(void)transitTicksWithInitialBezelTextWidthInRadius:(double)arg1 finalBezelTextWidthInRadius:(double)arg2 fraction:(double)arg3 ;
-(void)_toggleRasterization:(BOOL)arg1 ;
-(double)_tickOpactiyAtIndex:(long long)arg1 bezelTextWidthInRadius:(double)arg2 invisibleTicksAlpha:(double)arg3 ;
-(id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2 ;
-(void)showAllTicksInDial;
-(void)layoutSubviews;
@end

