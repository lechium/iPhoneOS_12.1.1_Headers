/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeRangeText : CLKComplicationTemplateGraphicCircular {

	CLKGaugeProvider* _gaugeProvider;
	CLKTextProvider* _leadingTextProvider;
	CLKTextProvider* _trailingTextProvider;
	CLKTextProvider* _centerTextProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                    //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * leadingTextProvider;               //@synthesize leadingTextProvider=_leadingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * trailingTextProvider;              //@synthesize trailingTextProvider=_trailingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * centerTextProvider;                //@synthesize centerTextProvider=_centerTextProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setLeadingTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)leadingTextProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)centerTextProvider;
-(CLKGaugeProvider *)gaugeProvider;
-(CLKTextProvider *)trailingTextProvider;
-(void)setCenterTextProvider:(CLKTextProvider *)arg1 ;
-(void)setTrailingTextProvider:(CLKTextProvider *)arg1 ;
@end

