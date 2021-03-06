/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKInspectableValueCollection, NSString, NSDate;

@interface HKInspectableValueInRange : NSObject {

	HKInspectableValueCollection* _lowValue;
	HKInspectableValueCollection* _highValue;
	HKInspectableValueCollection* _currentValue;
	NSString* _unitString;
	NSDate* _date;

}

@property (nonatomic,readonly) HKInspectableValueCollection * lowValue;                  //@synthesize lowValue=_lowValue - In the implementation block
@property (nonatomic,readonly) HKInspectableValueCollection * highValue;                 //@synthesize highValue=_highValue - In the implementation block
@property (nonatomic,readonly) HKInspectableValueCollection * currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,readonly) NSString * unitString;                                    //@synthesize unitString=_unitString - In the implementation block
@property (nonatomic,readonly) double lowValueDoubleRepresentation; 
@property (nonatomic,readonly) double highValueDoubleRepresentation; 
@property (nonatomic,readonly) long long currentValueRelation; 
@property (nonatomic,readonly) BOOL hasRenderableContent; 
@property (nonatomic,retain) NSDate * date;                                              //@synthesize date=_date - In the implementation block
+(id)valueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4 ;
-(void)_assertValidRange;
-(id)_initValueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4 ;
-(HKInspectableValueCollection *)lowValue;
-(double)_doubleForValueCollection:(id)arg1 ;
-(double)_doubleForValue:(id)arg1 ;
-(double)lowValueDoubleRepresentation;
-(double)highValueDoubleRepresentation;
-(BOOL)hasRenderableContent;
-(void)_setUnitString:(id)arg1 ;
-(HKInspectableValueCollection *)highValue;
-(NSString *)unitString;
-(long long)currentValueRelation;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(HKInspectableValueCollection *)currentValue;
@end

