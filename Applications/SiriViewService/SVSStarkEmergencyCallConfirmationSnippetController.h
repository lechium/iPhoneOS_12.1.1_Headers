//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVSStarkConfirmationSnippetController.h"

@class NSTimer, SVSStarkEmergencyCallConfirmationSnippetView;

@interface SVSStarkEmergencyCallConfirmationSnippetController : SVSStarkConfirmationSnippetController
{
    long long _seconds;	// 8 = 0x8
    NSTimer *_countdownTimer;	// 16 = 0x10
    SVSStarkEmergencyCallConfirmationSnippetView *_snippetView;	// 24 = 0x18
}

@property(retain, nonatomic) SVSStarkEmergencyCallConfirmationSnippetView *snippetView; // @synthesize snippetView=_snippetView;
- (void).cxx_destruct;	// IMP=0x0000000100083ddc
- (void)_setCountdownString;	// IMP=0x0000000100083c24
- (void)_updateCountdown:(id)arg1;	// IMP=0x00000001000839b0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100083874
- (id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 interactionStyle:(long long)arg3;	// IMP=0x0000000100083720

@end

