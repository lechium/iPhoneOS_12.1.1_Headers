/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSUUID, NSString;

@interface HMDActionSetEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned _numAccessories;
	unsigned long long _triggerSource;
	NSUUID* _actionSetUUID;
	NSString* _bundleId;
	NSUUID* _transactionId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long triggerSource;              //@synthesize triggerSource=_triggerSource - In the implementation block
@property (nonatomic,readonly) NSUUID * actionSetUUID;                        //@synthesize actionSetUUID=_actionSetUUID - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                           //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSUUID * transactionId;                        //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,readonly) unsigned numAccessories;                       //@synthesize numAccessories=_numAccessories - In the implementation block
+(id)actionSetTriggered:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned)arg3 bundleId:(id)arg4 transactionId:(id)arg5 ;
+(void)initialize;
+(id)uuid;
-(NSUUID *)actionSetUUID;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithActionSet:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned)arg3 bundleId:(id)arg4 transactionId:(id)arg5 ;
-(unsigned long long)triggerSource;
-(NSUUID *)transactionId;
-(unsigned)numAccessories;
-(NSString *)bundleId;
@end

