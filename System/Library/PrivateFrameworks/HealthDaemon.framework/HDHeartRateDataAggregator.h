/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDataAggregator.h>

@interface HDHeartRateDataAggregator : HDDataAggregator
-(id)objectType;
-(id)initWithDataCollectionManager:(id)arg1 ;
-(void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3 ;
-(id)configurationForCollector:(id)arg1 ;
-(void)workoutManagerStateChanged:(id)arg1 ;
-(BOOL)_shouldRequestActiveCollectionForConfiguration:(id)arg1 ;
-(void)_notifyForSensorDatum:(id)arg1 collector:(id)arg2 device:(id)arg3 source:(id)arg4 ;
-(id)_metadataForSensorDatum:(id)arg1 collector:(id)arg2 ;
-(void)dealloc;
@end
