/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, UIImageView, NTKColoringLabel, NSDate;

@interface NTKTimerRichComplicationCircularView : NTKRichComplicationCircularBaseView {

	NTKRichComplicationDialView* _backgroundDial;
	NTKRichComplicationDialView* _foregroundDial;
	UIImageView* _timerImageView;
	NTKColoringLabel* _timerLabel;
	NSDate* _timerDate;
	double _timerDuration;
	NSNumber* _updateToken;
	SCD_Struct_NT33 _layoutConstants;

}
-(void)_pause;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_applyPausedUpdate;
-(void)_updateDialProgress;
-(id)_textProviderWithIsPaused:(BOOL)arg1 ;
-(void)_resume;
-(id)init;
-(void)dealloc;
-(void)layoutSubviews;
@end
