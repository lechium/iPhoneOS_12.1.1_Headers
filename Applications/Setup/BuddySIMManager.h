//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreTelephonyClient, NSObject<OS_dispatch_queue>;

@interface BuddySIMManager : NSObject
{
    NSObject<OS_dispatch_queue> *_telephonyClientQueue;	// 8 = 0x8
    CoreTelephonyClient *_telephonyClient;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00000001000c9548
@property(retain) CoreTelephonyClient *telephonyClient; // @synthesize telephonyClient=_telephonyClient;
@property(retain) NSObject<OS_dispatch_queue> *telephonyClientQueue; // @synthesize telephonyClientQueue=_telephonyClientQueue;
- (void).cxx_destruct;	// IMP=0x00000001000c9af8
- (void)disallowSIMUnlock;	// IMP=0x00000001000c98bc
- (void)allowSIMUnlock;	// IMP=0x00000001000c96b8
- (id)init;	// IMP=0x00000001000c95c8

@end

