/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTEvent;

@interface RTDataProviderEventNotificationRealtime : RTNotification {

	RTEvent* _event;

}

@property (nonatomic,readonly) RTEvent * event;              //@synthesize event=_event - In the implementation block
-(id)initWithEvent:(id)arg1 ;
-(RTEvent *)event;
@end

