//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPAlert.h"

@class UIAlertController;

@interface PHNetworkUnavailableAlert : TPAlert
{
    UIAlertController *_alertController;	// 8 = 0x8
}

+ (id)alertWithCallProvider:(id)arg1 dialType:(long long)arg2 senderIdentityUUID:(id)arg3;	// IMP=0x000000010003de38
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void).cxx_destruct;	// IMP=0x000000010003e4fc
- (id)initWithCallProvider:(id)arg1 dialType:(long long)arg2 senderIdentityUUID:(id)arg3;	// IMP=0x000000010003e414
- (void)otherResponse;	// IMP=0x000000010003e344
- (void)alternateResponse;	// IMP=0x000000010003e278
- (void)defaultResponse;	// IMP=0x000000010003e1b0
- (id)otherButtonTitle;	// IMP=0x000000010003e0ec
- (id)alternateButtonTitle;	// IMP=0x000000010003e02c
- (id)defaultButtonTitle;	// IMP=0x000000010003df70
- (id)message;	// IMP=0x000000010003df1c
- (id)title;	// IMP=0x000000010003dec8

@end

