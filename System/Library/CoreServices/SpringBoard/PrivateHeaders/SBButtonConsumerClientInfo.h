//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBButtonConsumerClientInfo : NSObject
{
    id <FBSystemServiceClient> _systemServiceClient;	// 8 = 0x8
    unsigned long long _eventMask;	// 16 = 0x10
    long long _eventPriority;	// 24 = 0x18
}

@property(nonatomic) long long eventPriority; // @synthesize eventPriority=_eventPriority;
@property(nonatomic) unsigned long long eventMask; // @synthesize eventMask=_eventMask;
@property(retain, nonatomic) id <FBSystemServiceClient> systemServiceClient; // @synthesize systemServiceClient=_systemServiceClient;
- (void).cxx_destruct;	// IMP=0x000000010021b79c
- (id)description;	// IMP=0x000000010021b64c
- (unsigned long long)hash;	// IMP=0x000000010021b634
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010021b5d0

@end

