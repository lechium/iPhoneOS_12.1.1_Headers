//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMIPBaseCommand.h"

@class NSString;

@interface FMIPDeviceCommand : FMIPBaseCommand
{
    _Bool _isFamilyDevice;	// 24 = 0x18
    NSString *_deviceId;	// 32 = 0x20
}

@property(nonatomic) _Bool isFamilyDevice; // @synthesize isFamilyDevice=_isFamilyDevice;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;	// IMP=0x00000001000642bc
- (id)jsonBodyDictionary;	// IMP=0x00000001000641f0
- (id)initWithDevice:(id)arg1;	// IMP=0x0000000100063fa4
- (id)init;	// IMP=0x0000000100063f54

@end

