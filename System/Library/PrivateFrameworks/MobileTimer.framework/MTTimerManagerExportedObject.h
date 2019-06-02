/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTTimerClient.h>

@class MTTimerManager, NSString;

@interface MTTimerManagerExportedObject : NSObject <MTTimerClient> {

	MTTimerManager* _timerManager;

}

@property (nonatomic,__weak,readonly) MTTimerManager * timerManager;              //@synthesize timerManager=_timerManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)timersAdded:(id)arg1 ;
-(void)timersUpdated:(id)arg1 ;
-(void)timersRemoved:(id)arg1 ;
-(id)initWithTimerManager:(id)arg1 ;
-(void)_didReceiveTimerServerReadyNotification:(id)arg1 ;
-(void)timerDismissed:(id)arg1 ;
-(void)nextTimerChanged:(id)arg1 ;
-(MTTimerManager *)timerManager;
-(void)dealloc;
-(void)timerFired:(id)arg1 ;
@end

