/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraMetricsLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSNumber, NSString;

@interface HMDCameraMetricsSnapshotLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent> {

	BOOL _snapshotForNotification;
	NSNumber* _referenceTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL snapshotForNotification;              //@synthesize snapshotForNotification=_snapshotForNotification - In the implementation block
@property (nonatomic,retain) NSNumber * referenceTimestamp;               //@synthesize referenceTimestamp=_referenceTimestamp - In the implementation block
+(void)initialize;
+(id)uuid;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 snapshotForNotification:(BOOL)arg4 ;
-(NSNumber *)referenceTimestamp;
-(void)setReferenceTimestamp:(NSNumber *)arg1 ;
-(BOOL)snapshotForNotification;
-(unsigned)timeSinceReference:(id)arg1 ;
-(void)addIDSSession:(id)arg1 ;
-(void)addIDSTransfer:(id)arg1 ;
-(void)addSnapshotMessaging:(id)arg1 ;
@end

