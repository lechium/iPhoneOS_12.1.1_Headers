//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKDevice, HKSource, NSString;

@interface WDSource : NSObject
{
    HKSource *_source;	// 8 = 0x8
    HKDevice *_device;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) HKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) HKSource *source; // @synthesize source=_source;
- (void).cxx_destruct;	// IMP=0x0000000100123d24
- (id)initWithSource:(id)arg1 device:(id)arg2;	// IMP=0x0000000100123a34

@end

