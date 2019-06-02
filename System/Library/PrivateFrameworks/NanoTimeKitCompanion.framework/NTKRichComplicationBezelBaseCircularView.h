/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationBezelView.h>

@class NTKRichComplicationView, NTKCurvedColoringLabel;

@interface NTKRichComplicationBezelBaseCircularView : NTKRichComplicationBezelView {

	NTKRichComplicationView* _circularView;
	double _circularViewRotationInDegree;
	NTKCurvedColoringLabel* _bezelTextLabel;
	double _bezelTextLabelRotationInDegree;
	double _newDataAnimationCircularScale;
	double _newDataAnimationBezelLabelScale;
	BOOL _allowUpdatingBezelTextProperties;
	BOOL _allowNofityingDelegateWithBezelTextUpdate;
	long long _fromTheme;
	long long _toTheme;
	double _themeFraction;
	double _bezelLabelCircularRadius;

}

@property (assign,nonatomic) double bezelLabelCircularRadius;                       //@synthesize bezelLabelCircularRadius=_bezelLabelCircularRadius - In the implementation block
@property (nonatomic,readonly) NTKRichComplicationView * circularView;              //@synthesize circularView=_circularView - In the implementation block
+(void)startDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 bezelTextUpdateHandler:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(Class)_circularViewClassFromFromTemplate:(id)arg1 ;
-(id)_bezelTextProviderFromTemplate:(id)arg1 ;
-(id)_circularTemplateFromTemplate:(id)arg1 ;
-(void)setPlatterTextColor:(id)arg1 ;
-(void)_updateBackgroundColor:(id)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(void)_applyPausedUpdate;
-(void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3 ;
-(void)_editingDidEnd;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(void)_createBezelLabel;
-(void)_layoutCircularView;
-(void)_layoutBezelLabel;
-(void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 ;
-(CGPoint)circularViewCenter;
-(void)_startNewDataAnimationWithDuration:(double)arg1 finalAlpha:(double)arg2 finalBezelLabelScale:(double)arg3 finalCircularViewScale:(double)arg4 isEarlierView:(BOOL)arg5 isForward:(BOOL)arg6 animationApplierBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)setBezelLabelCircularRadius:(double)arg1 ;
-(double)bezelLabelCircularRadius;
-(NTKRichComplicationView *)circularView;
-(id)init;
-(id)description;
-(void)layoutSubviews;
@end

