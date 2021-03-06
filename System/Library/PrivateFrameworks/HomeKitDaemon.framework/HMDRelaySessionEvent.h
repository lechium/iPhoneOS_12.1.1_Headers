/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDRelaySessionEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _actionType;
	long long _statusCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long actionType;              //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) long long statusCode;                         //@synthesize statusCode=_statusCode - In the implementation block
+(id)stringForActionType:(unsigned long long)arg1 ;
+(id)relaySessionEventWithActionType:(unsigned long long)arg1 ;
+(void)initialize;
+(id)uuid;
-(void)setStatusCode:(long long)arg1 ;
-(id)initWithActionType:(unsigned long long)arg1 ;
-(unsigned long long)actionType;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(long long)statusCode;
@end

