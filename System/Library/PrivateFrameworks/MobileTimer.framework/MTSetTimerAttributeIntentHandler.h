/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTUpdateTimerIntentHandler.h>
#import <libobjc.A.dylib/INSetTimerAttributeIntentHandling.h>

@class NSString;

@interface MTSetTimerAttributeIntentHandler : MTUpdateTimerIntentHandler <INSetTimerAttributeIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSetTimerAttribute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmSetTimerAttribute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTargetTimerForSetTimerAttribute:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveToDurationForSetTimerAttribute:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_responseToSetTimerAttributeIntent:(id)arg1 withUpdatedTimer:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4 ;
-(void)_updateTimer:(id)arg1 toDuration:(double)arg2 dryRun:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

