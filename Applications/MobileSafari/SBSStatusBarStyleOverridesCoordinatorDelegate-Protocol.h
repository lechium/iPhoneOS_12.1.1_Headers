//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SBSStatusBarStyleOverridesCoordinator;

@protocol SBSStatusBarStyleOverridesCoordinatorDelegate <NSObject>
- (void)statusBarCoordinator:(SBSStatusBarStyleOverridesCoordinator *)arg1 invalidatedRegistrationWithError:(NSError *)arg2;

@optional
- (_Bool)statusBarCoordinator:(SBSStatusBarStyleOverridesCoordinator *)arg1 receivedTapWithContext:(id <SBSStatusBarTapContext>)arg2 completionBlock:(void (^)(void))arg3;
@end

