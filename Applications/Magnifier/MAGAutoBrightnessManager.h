//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface MAGAutoBrightnessManager : NSObject
{
    NSObject<OS_dispatch_queue> *_brightnessQueue;	// 8 = 0x8
    CDUnknownBlockType _cameraBrightnessUpdateBlock;	// 16 = 0x10
    double *_samples;	// 24 = 0x18
    long long _index;	// 32 = 0x20
    double _requestStartTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100018494
- (void)_cleanup;	// IMP=0x0000000100018440
- (double)_normalizeCameraBrightness:(double)arg1;	// IMP=0x0000000100018428
- (void)sampleCameraBrightnessIfNeeded:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000100017b50
- (void)requestCameraBrightnessUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017758
- (void)dealloc;	// IMP=0x00000001000176b4
- (id)init;	// IMP=0x0000000100017644

@end

