/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSPerSitePreferenceTimeout : NSObject {

	double _interval;
	id _fallbackValue;

}

@property (nonatomic,readonly) double interval;               //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) id fallbackValue;              //@synthesize fallbackValue=_fallbackValue - In the implementation block
+(id)timeoutWithInterval:(double)arg1 fallbackValue:(id)arg2 ;
-(id)initWithInterval:(double)arg1 fallbackValue:(id)arg2 ;
-(id)fallbackValue;
-(double)interval;
@end

