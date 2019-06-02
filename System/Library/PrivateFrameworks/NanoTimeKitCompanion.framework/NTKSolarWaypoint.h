/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NTKSolarTimeModel;

@interface NTKSolarWaypoint : NSObject {

	long long _type;
	NSDate* _waypointDate;
	NSString* _localizedName;
	NTKSolarTimeModel* _solarTimeModel;
	double _percentageThroughPeriodForWaypointDate;

}

@property (nonatomic,readonly) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NTKSolarTimeModel * solarTimeModel;                         //@synthesize solarTimeModel=_solarTimeModel - In the implementation block
@property (nonatomic,readonly) NSDate * waypointDate;                                      //@synthesize waypointDate=_waypointDate - In the implementation block
@property (nonatomic,readonly) double percentageThroughPeriodForWaypointDate;              //@synthesize percentageThroughPeriodForWaypointDate=_percentageThroughPeriodForWaypointDate - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
-(id)initWithType:(long long)arg1 solarTimeModel:(id)arg2 ;
-(void)updateDependentValues;
-(void)updateDependentValuesWithPlaceholderData;
-(NTKSolarTimeModel *)solarTimeModel;
-(NSDate *)waypointDate;
-(double)percentageThroughPeriodForWaypointDate;
-(id)description;
-(long long)type;
-(NSString *)localizedName;
@end

