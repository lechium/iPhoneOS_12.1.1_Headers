/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CLKDevice, UILabel, UIImageView;

@interface NTKWeatherHourlyConditionsView : UIView {

	CLKDevice* _device;
	UILabel* _temperatureLabel;
	UIImageView* _conditionsImageView;
	UILabel* _emptyConditionsImageLabel;
	UILabel* _timeLabel;

}

@property (nonatomic,readonly) UILabel * temperatureLabel;                       //@synthesize temperatureLabel=_temperatureLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * conditionsImageView;                //@synthesize conditionsImageView=_conditionsImageView - In the implementation block
@property (nonatomic,readonly) UILabel * emptyConditionsImageLabel;              //@synthesize emptyConditionsImageLabel=_emptyConditionsImageLabel - In the implementation block
@property (nonatomic,readonly) UILabel * timeLabel;                              //@synthesize timeLabel=_timeLabel - In the implementation block
-(UILabel *)timeLabel;
-(id)initForDevice:(id)arg1 ;
-(UILabel *)emptyConditionsImageLabel;
-(UILabel *)temperatureLabel;
-(UIImageView *)conditionsImageView;
@end
