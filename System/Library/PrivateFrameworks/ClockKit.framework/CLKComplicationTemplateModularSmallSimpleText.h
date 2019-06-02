/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateModularSmallSimpleText : CLKComplicationTemplate {

	CLKTextProvider* _textProvider;
	long long _maxDynamicFontSize;

}

@property (assign,nonatomic) long long maxDynamicFontSize;              //@synthesize maxDynamicFontSize=_maxDynamicFontSize - In the implementation block
@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)textProvider;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(long long)maxDynamicFontSize;
-(void)setMaxDynamicFontSize:(long long)arg1 ;
-(id)init;
@end

