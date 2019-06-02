//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PHHIDEventMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    struct __IOHIDEventSystemClient *_HIDEventSystemClient;	// 16 = 0x10
}

+ (id)HIDEventMonitor;	// IMP=0x000000010006eac8
@property(nonatomic) struct __IOHIDEventSystemClient *HIDEventSystemClient; // @synthesize HIDEventSystemClient=_HIDEventSystemClient;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;	// IMP=0x000000010006f618
- (id)stringFromIOHIDUsagePage:(long long)arg1;	// IMP=0x000000010006f594
- (id)stringFromIOHIDUsage:(long long)arg1;	// IMP=0x000000010006f394
- (void)handleKeyboardEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010006f208
- (void)stop;	// IMP=0x000000010006f0e4
- (void)start;	// IMP=0x000000010006eddc
- (void)dealloc;	// IMP=0x000000010006ecd0
- (id)init;	// IMP=0x000000010006eaf8

@end
