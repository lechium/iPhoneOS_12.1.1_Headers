//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PHCountdownViewModel <NSObject>
@property(readonly) _Bool playsSound;
@property(readonly) double countdownTickDuration;
@property(readonly) unsigned long long countdown;
@property(readonly) NSString *titleString;
- (NSString *)countdownString:(unsigned long long)arg1;
@end

