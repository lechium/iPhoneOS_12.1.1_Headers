//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ClassIndex : NSObject
{
    NSMutableDictionary *classDict;	// 8 = 0x8
    NSMutableDictionary *codeDictionary;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x00000001000138c4
- (id)getAllLogCodes;	// IMP=0x00000001000138ac
- (void)status;	// IMP=0x00000001000137f0
- (id)getSubscribers:(int)arg1;	// IMP=0x000000010001379c
- (id)getClass:(id)arg1;	// IMP=0x0000000100013784
- (id)init;	// IMP=0x00000001000136e0

@end
