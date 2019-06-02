/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NPSManager, NSObject;

@interface NTKTimeTravelSettings : NSObject {

	NPSManager* _npsManager;
	BOOL _timeTravelEnabled;
	NSObject*<OS_dispatch_queue> _prefsQueue;

}
+(id)sharedInstance;
-(BOOL)_isTimeTravelEnabledInPreferences;
-(void)_handlePrefsChanged;
-(BOOL)isTimeTravelEnabled;
-(void)setTimeTravelEnabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

