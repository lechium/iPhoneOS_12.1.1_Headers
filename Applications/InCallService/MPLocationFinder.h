//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSString, PCPersistentTimer;

@interface MPLocationFinder : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    PCPersistentTimer *_timer;	// 24 = 0x18
}

+ (void)findLocationWithBundle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c63c
- (void).cxx_destruct;	// IMP=0x000000010003c8e4
- (void)_timerFired;	// IMP=0x000000010003c5bc
- (void)stop;	// IMP=0x000000010003c568
- (void)start;	// IMP=0x000000010003c40c
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003c39c
- (void)dealloc;	// IMP=0x000000010003c328
- (id)initWithBundle:(id)arg1;	// IMP=0x000000010003c254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

