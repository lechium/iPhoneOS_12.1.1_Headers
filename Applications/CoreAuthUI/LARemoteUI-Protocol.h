//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol LARemoteUI <NSObject>

@optional
- (void)transitionToController:(long long)arg1 internalInfo:(NSDictionary *)arg2 completionHandler:(void (^)(void))arg3;
- (void)dismissRemoteUIWithCompletionHandler:(void (^)(void))arg1;
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(void (^)(void))arg3;
- (void)mechanismEvent:(long long)arg1 reply:(void (^)(void))arg2;
@end

