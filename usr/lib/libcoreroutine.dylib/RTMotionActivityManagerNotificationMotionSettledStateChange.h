/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTMotionActivityManagerNotificationMotionSettledStateChange : RTNotification {

	unsigned long long _settledState;

}

@property (nonatomic,readonly) unsigned long long settledState;              //@synthesize settledState=_settledState - In the implementation block
-(unsigned long long)settledState;
-(id)initWithSettledState:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
@end

