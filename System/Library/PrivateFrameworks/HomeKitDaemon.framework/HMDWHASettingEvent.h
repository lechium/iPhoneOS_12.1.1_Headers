/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString, AWDHomeKitValue;

@interface HMDWHASettingEvent : HMDLogEvent <HMDAWDLogEvent> {

	NSString* _keyPath;
	AWDHomeKitValue* _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * keyPath;                    //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) AWDHomeKitValue * value;               //@synthesize value=_value - In the implementation block
+(id)eventWithKeyPath:(id)arg1 value:(id)arg2 ;
+(void)initialize;
+(id)uuid;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(AWDHomeKitValue *)value;
-(void)setValue:(AWDHomeKitValue *)arg1 ;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
@end

