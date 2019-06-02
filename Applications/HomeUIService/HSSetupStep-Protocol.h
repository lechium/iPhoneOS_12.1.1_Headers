//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFDiscoveredAccessory, NAFuture, NSError;

@protocol HSSetupStep <NSObject>
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate;
@property(readonly, nonatomic) long long setupState;

@optional
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
- (void)setupDidFailWithError:(NSError *)arg1 forDiscoveredAccessory:(HFDiscoveredAccessory *)arg2;
@end

