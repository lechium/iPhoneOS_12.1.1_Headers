/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UINotificationSettingsAction : BSAction {

	UNNotification* _notification;

}

@property (nonatomic,copy,readonly) UNNotification * notification;              //@synthesize notification=_notification - In the implementation block
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)UIActionType;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithNotification:(id)arg1 ;
-(UNNotification *)notification;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
@end

