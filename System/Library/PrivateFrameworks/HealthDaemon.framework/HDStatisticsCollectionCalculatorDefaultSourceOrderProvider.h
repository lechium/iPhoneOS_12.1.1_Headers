/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDStatisticsCollectionCalculatorSourceOrderProvider.h>

@class HDProfile, HKQuantityType, NSString;

@interface HDStatisticsCollectionCalculatorDefaultSourceOrderProvider : NSObject <HDStatisticsCollectionCalculatorSourceOrderProvider> {

	HDProfile* _profile;
	HKQuantityType* _quantityType;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 quantityType:(id)arg2 ;
-(HKQuantityType *)quantityType;
-(id)orderedSourceIDsWithUnorderedIDs:(id)arg1 ;
-(id)sourceForSourceID:(long long)arg1 ;
@end
