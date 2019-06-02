//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPAlert.h"

@class NSString;

@interface ICSEmergencyCallbackModeAlert : TPAlert
{
    NSString *_dialRequestAccountDescription;	// 8 = 0x8
    NSString *_emergencyAccountDescription;	// 16 = 0x10
    CDUnknownBlockType _alertCompletion;	// 24 = 0x18
}

@property(readonly, nonatomic) CDUnknownBlockType alertCompletion; // @synthesize alertCompletion=_alertCompletion;
@property(readonly, copy, nonatomic) NSString *emergencyAccountDescription; // @synthesize emergencyAccountDescription=_emergencyAccountDescription;
@property(readonly, copy, nonatomic) NSString *dialRequestAccountDescription; // @synthesize dialRequestAccountDescription=_dialRequestAccountDescription;
- (void).cxx_destruct;	// IMP=0x0000000100090250
- (void)alternateResponse;	// IMP=0x00000001000901e0
- (void)defaultResponse;	// IMP=0x00000001000901a0
- (id)alternateButtonTitle;	// IMP=0x000000010009012c
- (id)defaultButtonTitle;	// IMP=0x00000001000900b8
- (id)message;	// IMP=0x000000010008ffac
- (id)title;	// IMP=0x000000010008ff38
- (id)initWithDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008fc48

@end
