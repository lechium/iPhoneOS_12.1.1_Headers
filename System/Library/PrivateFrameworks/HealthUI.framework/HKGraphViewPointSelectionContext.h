/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKGraphSeries, HKValueRange, NSDateComponents, NSArray;

@interface HKGraphViewPointSelectionContext : NSObject {

	HKGraphSeries* _selectedSeries;
	HKValueRange* _selectedRangeXValues;
	HKValueRange* _selectedPathIndexRange;
	HKValueRange* _selectedPointValueRange;
	NSDateComponents* _pointIntervalComponents;
	NSArray* _userInfo;

}

@property (nonatomic,retain) HKGraphSeries * selectedSeries;                          //@synthesize selectedSeries=_selectedSeries - In the implementation block
@property (nonatomic,retain) HKValueRange * selectedRangeXValues;                     //@synthesize selectedRangeXValues=_selectedRangeXValues - In the implementation block
@property (nonatomic,retain) HKValueRange * selectedPathIndexRange;                   //@synthesize selectedPathIndexRange=_selectedPathIndexRange - In the implementation block
@property (nonatomic,retain) HKValueRange * selectedPointValueRange;                  //@synthesize selectedPointValueRange=_selectedPointValueRange - In the implementation block
@property (nonatomic,retain) NSDateComponents * pointIntervalComponents;              //@synthesize pointIntervalComponents=_pointIntervalComponents - In the implementation block
@property (nonatomic,retain) NSArray * userInfo;                                      //@synthesize userInfo=_userInfo - In the implementation block
-(HKValueRange *)selectedRangeXValues;
-(HKValueRange *)selectedPointValueRange;
-(HKGraphSeries *)selectedSeries;
-(HKValueRange *)selectedPathIndexRange;
-(NSDateComponents *)pointIntervalComponents;
-(void)setSelectedSeries:(HKGraphSeries *)arg1 ;
-(void)setSelectedRangeXValues:(HKValueRange *)arg1 ;
-(void)setSelectedPathIndexRange:(HKValueRange *)arg1 ;
-(void)setSelectedPointValueRange:(HKValueRange *)arg1 ;
-(void)setPointIntervalComponents:(NSDateComponents *)arg1 ;
-(NSArray *)userInfo;
-(void)setUserInfo:(NSArray *)arg1 ;
-(id)debugDescription;
@end

