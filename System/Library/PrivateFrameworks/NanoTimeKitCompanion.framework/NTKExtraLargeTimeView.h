/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@class CLKDevice, NTKDigitalTimeLabel, NSString;

@interface NTKExtraLargeTimeView : UIView <NTKTimeView> {

	CLKDevice* _device;
	BOOL _statusBarVisible;
	BOOL _frozen;
	NTKDigitalTimeLabel* _timeHourView;
	NTKDigitalTimeLabel* _timeMinuteView;

}

@property (nonatomic,retain) NTKDigitalTimeLabel * timeHourView;                //@synthesize timeHourView=_timeHourView - In the implementation block
@property (nonatomic,retain) NTKDigitalTimeLabel * timeMinuteView;              //@synthesize timeMinuteView=_timeMinuteView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                       //@synthesize frozen=_frozen - In the implementation block
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)setStatusBarVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareToZoom;
-(void)cleanupAfterZoom;
-(void)prepareWristRaiseAnimation;
-(void)performWristRaiseAnimation;
-(void)setTopColor:(id)arg1 ;
-(void)setBottomColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)cancelWristRaiseAnimation;
-(NTKDigitalTimeLabel *)timeHourView;
-(void)setTimeHourView:(NTKDigitalTimeLabel *)arg1 ;
-(NTKDigitalTimeLabel *)timeMinuteView;
-(void)setTimeMinuteView:(NTKDigitalTimeLabel *)arg1 ;
-(void)layoutSubviews;
-(void)setTimeOffset:(double)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(BOOL)isFrozen;
@end

