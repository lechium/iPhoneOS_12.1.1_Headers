/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSString;

@interface HKInteractiveChartInsulinData : NSObject <HKGraphSeriesChartData> {

	double _basalValue;
	double _totalValue;

}

@property (assign,nonatomic) double basalValue;                     //@synthesize basalValue=_basalValue - In the implementation block
@property (nonatomic,readonly) double bolusValue; 
@property (assign,nonatomic) double totalValue;                     //@synthesize totalValue=_totalValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)basalValue;
-(double)bolusValue;
-(void)setBasalValue:(double)arg1 ;
-(double)totalValue;
-(void)setTotalValue:(double)arg1 ;
@end

