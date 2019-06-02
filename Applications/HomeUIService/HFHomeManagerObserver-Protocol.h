//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMHomeManagerDelegatePrivate.h"

@class HFHomeKitDispatcher, HMHome, HMHomeManager;

@protocol HFHomeManagerObserver <HMHomeManagerDelegatePrivate>

@optional
- (void)homeManager:(HMHomeManager *)arg1 didUpdateLocationSensingAvailability:(_Bool)arg2;
- (void)homeManagerDidFinishUnknownChange:(HMHomeManager *)arg1;
- (void)homeManagerDidFinishInitialDatabaseLoad:(HMHomeManager *)arg1;
- (void)homeKitDispatcher:(HFHomeKitDispatcher *)arg1 manager:(HMHomeManager *)arg2 didChangeHome:(HMHome *)arg3;
@end
