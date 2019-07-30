//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIWindow;

@interface SBStarkScreenFocusAssertion : NSObject
{
    NSString *_name;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    double _priority;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    int _pid;	// 40 = 0x28
    UIWindow *_window;	// 48 = 0x30
}

@property(readonly, nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) double priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x00000001001f5f88
- (id)description;	// IMP=0x00000001001f5e18
- (id)initWithName:(id)arg1 type:(long long)arg2 priority:(double)arg3 window:(id)arg4 application:(id)arg5 pid:(int)arg6;	// IMP=0x00000001001f5c24

@end
