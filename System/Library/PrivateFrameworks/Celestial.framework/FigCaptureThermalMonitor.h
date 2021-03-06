/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSObject;

@interface FigCaptureThermalMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _registrationToken;
	/*^block*/id _thermalHandler;
	OpaqueFigSimpleMutexRef _thermalNotificationLock;
	float _maxTorchLevel;
	int _thermalLevel;

}

@property (readonly) float maxTorchLevel; 
@property (readonly) int thermalLevel; 
+(void)initialize;
-(float)maxTorchLevel;
-(void)setThermalHandler:(/*^block*/id)arg1 ;
-(void)_thermalNotification:(int)arg1 ;
-(int)thermalLevel;
-(id)init;
-(void)dealloc;
@end

