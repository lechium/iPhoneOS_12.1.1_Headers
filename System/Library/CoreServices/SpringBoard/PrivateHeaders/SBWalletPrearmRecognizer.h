//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSTimer;

@interface SBWalletPrearmRecognizer : NSObject
{
    id <SBWalletPrearmRecognizerDelegate> _delegate;	// 8 = 0x8
    double _timeout;	// 16 = 0x10
    BSTimer *_timer;	// 24 = 0x18
    _Bool _invalidated;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000d2b54
- (double)_computeDoubleTapTimeout;	// IMP=0x00000001000d2aec
- (void)_invalidate;	// IMP=0x00000001000d2a8c
- (void)_invalidateForSuccess;	// IMP=0x00000001000d2a3c
- (void)_invalidateForFailureReason:(unsigned long long)arg1;	// IMP=0x00000001000d28c8
- (void)menuButtonDoublePress;	// IMP=0x00000001000d26c8
- (void)menuButtonSinglePress;	// IMP=0x00000001000d2594
- (void)invalidate;	// IMP=0x00000001000d24cc
- (void)startRecognizing;	// IMP=0x00000001000d21e4
- (void)dealloc;	// IMP=0x00000001000d20d4
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001000d2040

@end

