/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARTechnique.h>

@protocol OS_dispatch_queue;
@class ARPlaneWorld, NSObject, AREnvironmentProbeManager;

@interface AREnvironmentTexturingTechnique : ARTechnique {

	ARPlaneWorld* _planeWorld;
	NSObject*<OS_dispatch_queue> _planeUpdateQueue;
	NSObject*<OS_dispatch_queue> _networkPrewarmQueue;
	BOOL _networkIntialized;
	AREnvironmentProbeManager* _probeManager;

}

@property (retain) AREnvironmentProbeManager * probeManager;              //@synthesize probeManager=_probeManager - In the implementation block
@property (assign) BOOL networkIntialized;                                //@synthesize networkIntialized=_networkIntialized - In the implementation block
-(BOOL)networkIntialized;
-(void)setNetworkIntialized:(BOOL)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(id)processData:(id)arg1 ;
-(AREnvironmentProbeManager *)probeManager;
-(void)setProbeManager:(AREnvironmentProbeManager *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOptions:(long long)arg1 ;
-(void)prepare;
@end

