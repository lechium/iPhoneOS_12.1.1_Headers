/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FIUIChartDateAnchorRule : NSObject {

	unsigned long long _calendarUnit;
	long long _roundingValue;

}

@property (assign,nonatomic) unsigned long long calendarUnit;              //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (assign,nonatomic) long long roundingValue;                      //@synthesize roundingValue=_roundingValue - In the implementation block
-(void)setRoundingValue:(long long)arg1 ;
-(void)setCalendarUnit:(unsigned long long)arg1 ;
-(id)generateAnchorFromDate:(id)arg1 ;
-(id)_floorDate:(id)arg1 ;
-(id)_anchorDiffComponents;
-(BOOL)_componentsSuccessful:(id)arg1 ;
-(long long)roundingValue;
-(unsigned long long)calendarUnit;
@end
