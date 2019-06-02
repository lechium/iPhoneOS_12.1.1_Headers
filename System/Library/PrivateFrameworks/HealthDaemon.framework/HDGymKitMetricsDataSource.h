/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HDMetricsCollectorObserver.h>
#import <libobjc.A.dylib/HKDataFlowLinkProcessor.h>
#import <libobjc.A.dylib/HDWorkoutDataSource.h>

@class HKDataFlowLink, NSLock, NSMutableDictionary, NSString, NSUUID;

@interface HDGymKitMetricsDataSource : HDStandardTaskServer <HDMetricsCollectorObserver, HKDataFlowLinkProcessor, HDWorkoutDataSource> {

	HKDataFlowLink* _workoutDataFlowLink;
	NSLock* _lock;
	NSMutableDictionary* _accumulatedMetadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HKDataFlowLink * workoutDataFlowLink; 
@property (copy,readonly) NSUUID * workoutDataProcessorUUID; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 error:(out id*)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5 ;
-(void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3 ;
-(void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(HKDataFlowLink *)workoutDataFlowLink;
-(NSUUID *)workoutDataProcessorUUID;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)metricsCollector:(id)arg1 didCollectMetrics:(id)arg2 ;
-(void)remote_startTaskServerIfNeeded;
-(void)_startObservingMetrics;
-(void)_stopObservingMetrics;
-(id)_metadataFromMetrics:(id)arg1 ;
-(void)dealloc;
-(id)exportedInterface;
@end

