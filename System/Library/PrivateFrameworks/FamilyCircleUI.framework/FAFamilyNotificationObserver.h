/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FAFamilyNotificationObserver : NSObject {

	BOOL _observing;
	/*^block*/id _notificationHandler;

}
+(id)familyNotificationObserverWithNotificationHandler:(/*^block*/id)arg1 ;
+(void)initialize;
-(id)_initWithNotificationHandler:(/*^block*/id)arg1 ;
-(void)_didReceiveNotification;
-(void)_startObserving;
-(void)stopObserving;
-(id)init;
-(void)dealloc;
@end
