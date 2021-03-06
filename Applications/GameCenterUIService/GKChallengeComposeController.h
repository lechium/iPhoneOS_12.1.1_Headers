//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKSimpleComposeController.h"

@class GKChallenge, GKComposeHeaderField, NSArray;

@interface GKChallengeComposeController : GKSimpleComposeController
{
    GKComposeHeaderField *_challengeField;	// 8 = 0x8
    GKChallenge *_challenge;	// 16 = 0x10
    NSArray *_playersToLoad;	// 24 = 0x18
}

+ (id)friendPickerFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100003624
+ (id)composeFlowForChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100003304
+ (void)composeAndSendFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 forcePicker:(_Bool)arg4 readyHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100002f4c
@property(retain, nonatomic) NSArray *playersToLoad; // @synthesize playersToLoad=_playersToLoad;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) GKComposeHeaderField *challengeField; // @synthesize challengeField=_challengeField;
- (void)donePressed;	// IMP=0x00000001000041dc
- (void)cancel;	// IMP=0x0000000100004134
- (void)loadView;	// IMP=0x0000000100003c4c
- (void)updateChallengeText;	// IMP=0x0000000100003c00
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100003b24
- (void)dealloc;	// IMP=0x0000000100003aa0
- (id)initWithChallenge:(id)arg1 defaultMessage:(id)arg2 players:(id)arg3;	// IMP=0x0000000100003a20
- (id)init;	// IMP=0x000000010000380c

@end

