//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUIAceObjectViewController.h"

@class NSString, SVSServerUtteranceView;

@interface SVSServerUtteranceController : SiriUIAceObjectViewController
{
    SVSServerUtteranceView *_utteranceView;	// 8 = 0x8
    NSString *_utterance;	// 16 = 0x10
    NSString *_utterancePrefix;	// 24 = 0x18
    _Bool _isTip;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100040e6c
- (double)_insertionAnimatedZPosition;	// IMP=0x0000000100040e58
- (long long)_replacementAnimation;	// IMP=0x0000000100040e50
- (long long)_insertionAnimation;	// IMP=0x0000000100040e48
- (long long)_pinAnimationType;	// IMP=0x0000000100040e40
- (_Bool)_shouldSkipAnimationsInAlternateSpeeds;	// IMP=0x0000000100040e38
- (double)_scaledTopPadding;	// IMP=0x0000000100040dd4
- (double)_extendedTopPadding;	// IMP=0x0000000100040d2c
- (double)baselineOffsetFromBottom;	// IMP=0x0000000100040d14
- (double)desiredTopPaddingBelowController:(id)arg1;	// IMP=0x0000000100040bd8
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x0000000100040b74
- (id)description;	// IMP=0x0000000100040aec
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000409f0
- (void)loadView;	// IMP=0x0000000100040700
- (void)_loadFromObject:(id)arg1;	// IMP=0x00000001000403a8
- (void)setAceObject:(id)arg1;	// IMP=0x0000000100040308

@end

