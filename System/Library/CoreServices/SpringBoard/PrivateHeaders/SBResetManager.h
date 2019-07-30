//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSObject<OS_dispatch_semaphore>, NSString, PKPassLibrary, SBFObliterationController;

@interface SBResetManager : NSObject
{
    _Bool _threadRunning;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    long long _mode;	// 24 = 0x18
    long long _options;	// 32 = 0x20
    NSString *_reason;	// 40 = 0x28
    NSLock *_progressLock;	// 48 = 0x30
    float _progress;	// 56 = 0x38
    SBFObliterationController *_obliterationController;	// 64 = 0x40
    _Bool _paymentCardsExist;	// 72 = 0x48
    PKPassLibrary *_passLibrary;	// 80 = 0x50
    struct {
        float _field1;
        struct __CFArray *_field2;
        float _field3;
    } *_paymentCardDeletionProgressStack;	// 88 = 0x58
    CDUnknownBlockType _postCardDeletionHandler;	// 96 = 0x60
    NSObject<OS_dispatch_semaphore> *_resetThreadSemaphore;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x0000000100186a40
- (void).cxx_destruct;	// IMP=0x000000010018924c
- (void)_resetFinished;	// IMP=0x00000001001891b0
- (void)_postResetEnded;	// IMP=0x000000010018915c
- (void)_resetThread;	// IMP=0x0000000100187684
- (void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didFinishWithSuccess:(_Bool)arg3;	// IMP=0x0000000100187660
- (void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didUpdateWithProgress:(double)arg3;	// IMP=0x0000000100187560
- (void)performPaymentCardDeletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001873f8
- (void)_beginReset:(id)arg1;	// IMP=0x0000000100187074
- (void)beginReset;	// IMP=0x0000000100186f48
- (float)progress;	// IMP=0x0000000100186eec
- (void)_setProgress:(float)arg1;	// IMP=0x0000000100186e94
- (void)prepareToResetInMode:(int)arg1;	// IMP=0x0000000100186e38
- (void)setReason:(id)arg1;	// IMP=0x0000000100186dd4
- (void)setModeLegacy:(int)arg1;	// IMP=0x0000000100186ce4
- (void)setOptions:(long long)arg1;	// IMP=0x0000000100186cd4
- (void)setModeNew:(long long)arg1;	// IMP=0x0000000100186cc4
- (void)dealloc;	// IMP=0x0000000100186be4
- (id)init;	// IMP=0x0000000100186a98

@end

