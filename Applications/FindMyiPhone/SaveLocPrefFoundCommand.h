//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMIPDeviceCommand.h"

@interface SaveLocPrefFoundCommand : FMIPDeviceCommand
{
    _Bool _locFoundEnabled;	// 24 = 0x18
}

@property(nonatomic) _Bool locFoundEnabled; // @synthesize locFoundEnabled=_locFoundEnabled;
- (id)jsonBodyDictionary;	// IMP=0x0000000100087a28
- (id)path;	// IMP=0x00000001000879cc

@end

