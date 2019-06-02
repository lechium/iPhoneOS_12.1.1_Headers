/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _KSDeviceStateMonitor : NSObject {

	BOOL _isContentProtectionAvailable;

}

@property (assign,nonatomic) BOOL isContentProtectionAvailable;              //@synthesize isContentProtectionAvailable=_isContentProtectionAvailable - In the implementation block
+(BOOL)isRunningOnInternalBuild;
+(id)deviceStateMonitor;
-(BOOL)isDataAvailableForClassC;
-(void)handleKeyBagLockNotification;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(BOOL)deviceIsPasswordConfigured;
-(BOOL)isContentProtectionAvailable;
-(void)setIsContentProtectionAvailable:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

