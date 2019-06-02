/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKWorkoutBuilderSampleQueryClientInterface.h>

@class HKWorkoutBuilder, NSString;

@interface HKWorkoutBuilderSampleQuery : HKQuery <HKWorkoutBuilderSampleQueryClientInterface> {

	/*^block*/id _samplesAddedHandler;
	BOOL _needsHistoricalFetch;
	HKWorkoutBuilder* _workoutBuilder;

}

@property (assign,nonatomic,__weak) HKWorkoutBuilder * workoutBuilder;              //@synthesize workoutBuilder=_workoutBuilder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)initWithSampleType:(id)arg1 workoutBuilder:(id)arg2 samplesAddedHandler:(/*^block*/id)arg3 ;
-(HKWorkoutBuilder *)workoutBuilder;
-(void)setWorkoutBuilder:(HKWorkoutBuilder *)arg1 ;
-(void)client_deliverSamples:(id)arg1 hasFinishedHistoricalFetch:(BOOL)arg2 queryUUID:(id)arg3 ;
@end
