/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@class CALayer;

@interface NTKWorldClockRichComplicationHandsView : NTKAnalogHandsView {

	CALayer* _pegDot;
	double _timeZoneOffset;

}

@property (assign,nonatomic) double timeZoneOffset;              //@synthesize timeZoneOffset=_timeZoneOffset - In the implementation block
-(void)setTimeZoneOffset:(double)arg1 ;
-(double)timeZoneOffset;
-(id)initForDevice:(id)arg1 ;
-(id)displayTime;
-(void)layoutSubviews;
@end
