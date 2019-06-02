/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface STDeviceUnlockStateListener : NSObject {

	int _notifyToken;
	/*^block*/id _lockStateChangeHandler;

}

@property (nonatomic,copy) id lockStateChangeHandler;              //@synthesize lockStateChangeHandler=_lockStateChangeHandler - In the implementation block
@property (nonatomic,readonly) BOOL deviceIsLocked; 
-(BOOL)deviceIsLocked;
-(id)lockStateChangeHandler;
-(void)setLockStateChangeHandler:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
