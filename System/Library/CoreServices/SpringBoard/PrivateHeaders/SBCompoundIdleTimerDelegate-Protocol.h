//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIdleTimerDelegate.h"

@class SBCompoundIdleTimer;

@protocol SBCompoundIdleTimerDelegate <SBIdleTimerDelegate>

@optional
- (void)compoundTimer:(SBCompoundIdleTimer *)arg1 didMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)compoundTimer:(SBCompoundIdleTimer *)arg1 willMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
@end

