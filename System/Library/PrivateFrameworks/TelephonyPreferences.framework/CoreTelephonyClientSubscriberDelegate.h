/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreTelephonyClientSubscriberDelegate <NSObject>
@optional
-(void)simStatusDidChange:(id)arg1 status:(id)arg2;
-(void)simLockSaveRequestDidComplete:(id)arg1 success:(BOOL)arg2;
-(void)simPinEntryErrorDidOccur:(id)arg1 status:(id)arg2;
-(void)simPukEntryErrorDidOccur:(id)arg1 status:(id)arg2;
-(void)simPinChangeRequestDidComplete:(id)arg1 success:(BOOL)arg2;
-(void)authTokenChanged:(id)arg1;

@end

