/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSModeAssertionStateProviderDataSource <NSObject>
@required
-(id)currentlyActiveModeAssertionsForStateProvider:(id)arg1;
-(unsigned long long)currentLostModeStateForStateProvider:(id)arg1;
-(unsigned long long)currentInterruptionBehaviorSettingForStateProvider:(id)arg1;
-(unsigned long long)currentUILockStateForStateProvider:(id)arg1;
-(id)stateProvider:(id)arg1 effectiveModeIdentifierForModeAssertion:(id)arg2;
-(id)stateProvider:(id)arg1 effectiveLifetimeForModeAssertion:(id)arg2;
-(id)stateProvider:(id)arg1 activeDateIntervalForModeAssertion:(id)arg2;

@end

