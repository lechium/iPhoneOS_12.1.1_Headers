//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPAlert.h"

@interface PHAirplaneEmergencyCallAlert : TPAlert
{
    CDUnknownBlockType _dialAction;	// 8 = 0x8
}

@property(copy, nonatomic) CDUnknownBlockType dialAction; // @synthesize dialAction=_dialAction;
- (void).cxx_destruct;	// IMP=0x000000010007cf28
- (void)otherResponse;	// IMP=0x000000010007ce8c
- (void)defaultResponse;	// IMP=0x000000010007ce0c
- (void)alternateResponse;	// IMP=0x000000010007cd5c
- (id)defaultButtonTitle;	// IMP=0x000000010007cce8
- (id)otherButtonTitle;	// IMP=0x000000010007cc4c
- (id)alternateButtonTitle;	// IMP=0x000000010007cbd8
- (id)message;	// IMP=0x000000010007cb3c
- (id)title;	// IMP=0x000000010007caa0
- (id)initWithDialAction:(CDUnknownBlockType)arg1;	// IMP=0x000000010007ca2c

@end

