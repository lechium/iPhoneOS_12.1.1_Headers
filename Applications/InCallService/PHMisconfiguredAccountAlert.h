//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPAlert.h"

@interface PHMisconfiguredAccountAlert : TPAlert
{
    CDUnknownBlockType _dialAction;	// 8 = 0x8
}

@property(copy, nonatomic) CDUnknownBlockType dialAction; // @synthesize dialAction=_dialAction;
- (void).cxx_destruct;	// IMP=0x0000000100045610
- (void)otherResponse;	// IMP=0x0000000100045570
- (void)defaultResponse;	// IMP=0x000000010004556c
- (void)alternateResponse;	// IMP=0x0000000100045568
- (id)defaultButtonTitle;	// IMP=0x00000001000454f4
- (id)otherButtonTitle;	// IMP=0x0000000100045480
- (id)alternateButtonTitle;	// IMP=0x0000000100045478
- (id)message;	// IMP=0x00000001000452a4
- (id)title;	// IMP=0x0000000100045230
- (id)initWithDialAction:(CDUnknownBlockType)arg1;	// IMP=0x00000001000451bc

@end

