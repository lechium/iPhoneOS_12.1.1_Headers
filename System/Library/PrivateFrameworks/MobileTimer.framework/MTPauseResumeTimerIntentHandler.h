/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTUpdateTimerIntentHandler.h>
#import <libobjc.A.dylib/INPauseTimerIntentHandling.h>
#import <libobjc.A.dylib/INResumeTimerIntentHandling.h>

@class NSString;

@interface MTPauseResumeTimerIntentHandler : MTUpdateTimerIntentHandler <INPauseTimerIntentHandling, INResumeTimerIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handlePauseTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmPauseTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTargetTimerForPauseTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolvePauseMultipleForPauseTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleResumeTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmResumeTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTargetTimerForResumeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveResumeMultipleForResumeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handlePauseTimer:(id)arg1 dryRun:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_responseToPauseTimerIntent:(id)arg1 withPausedTimers:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4 ;
-(void)_handleResumeTimer:(id)arg1 dryRun:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_responseToResumeTimerIntent:(id)arg1 withResumedTimers:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4 ;
@end

