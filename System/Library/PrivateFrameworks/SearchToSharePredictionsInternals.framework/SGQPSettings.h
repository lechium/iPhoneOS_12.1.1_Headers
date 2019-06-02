/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SGQPSettingsObserver;
@class NSObject, NSUserDefaults, NSString;

@interface SGQPSettings : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<SGQPSettingsObserver> _observer;
	NSUserDefaults* _defaults;
	NSString* _abGroup;
	long long _hashedSessionsLogging;

}

@property (readonly) NSString * abGroup;                           //@synthesize abGroup=_abGroup - In the implementation block
@property (readonly) long long hashedSessionsLogging;              //@synthesize hashedSessionsLogging=_hashedSessionsLogging - In the implementation block
-(long long)hashedSessionsLogging;
-(NSString *)abGroup;
-(void)_registerNotification;
-(void)_reloadSettingsFromDefaultsAndNotifyObserver;
-(id)init;
-(void)setObserver:(id)arg1 ;
@end
