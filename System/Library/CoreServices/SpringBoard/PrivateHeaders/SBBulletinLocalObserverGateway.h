//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"

@class BBObserver, NSString;

@interface SBBulletinLocalObserverGateway : NSObject <BBObserverDelegate>
{
    BBObserver *_bbObserver;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100382f04
- (void).cxx_destruct;	// IMP=0x0000000100383174
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100383078
- (id)init;	// IMP=0x0000000100382fb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

