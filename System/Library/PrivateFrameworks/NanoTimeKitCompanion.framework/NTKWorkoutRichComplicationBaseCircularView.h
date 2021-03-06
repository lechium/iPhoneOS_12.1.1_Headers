/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView, NTKColoringImageView, CLKComplicationTemplate;

@interface NTKWorkoutRichComplicationBaseCircularView : UIView {

	UIView* _backgroundView;
	NTKColoringImageView* _staticImageView;
	long long _state;
	BOOL _paused;
	CLKComplicationTemplate* _complicationTemplate;

}

@property (assign,nonatomic) BOOL paused;                                                 //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) CLKComplicationTemplate * complicationTemplate;              //@synthesize complicationTemplate=_complicationTemplate - In the implementation block
-(void)_applyChanges;
-(void)_updateUI;
-(CLKComplicationTemplate *)complicationTemplate;
-(void)setComplicationTemplate:(CLKComplicationTemplate *)arg1 ;
-(id)initWithNoActiveWorkoutImageName:(id)arg1 animatedImagesName:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
@end

