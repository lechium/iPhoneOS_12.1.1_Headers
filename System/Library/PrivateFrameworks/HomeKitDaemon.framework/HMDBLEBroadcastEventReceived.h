/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAccessory, NSString;

@interface HMDBLEBroadcastEventReceived : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _hasExpectedGSN;
	HMDAccessory* _accessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) BOOL hasExpectedGSN;                   //@synthesize hasExpectedGSN=_hasExpectedGSN - In the implementation block
+(id)broadcastEventFromAccessory:(id)arg1 withExpectedGSN:(BOOL)arg2 ;
+(void)initialize;
+(id)uuid;
-(HMDAccessory *)accessory;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initBroadcastEventFromAccessory:(id)arg1 withExpectedGSN:(BOOL)arg2 ;
-(BOOL)hasExpectedGSN;
@end

