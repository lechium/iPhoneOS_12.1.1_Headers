//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, TUCall;

@interface PHAudioDeviceController : NSObject
{
    NSDictionary *_pickedRoute;	// 8 = 0x8
}

+ (id)sharedAudioDeviceController;	// IMP=0x00000001000a6edc
@property(readonly, copy, nonatomic) NSDictionary *pickedRoute; // @synthesize pickedRoute=_pickedRoute;
- (void).cxx_destruct;	// IMP=0x00000001000a8e88
- (void)_audioRouteInformationChanged;	// IMP=0x00000001000a8d70
- (_Bool)_routeIsHandset:(id)arg1;	// IMP=0x00000001000a8ce0
- (_Bool)_routeIsDefault:(id)arg1;	// IMP=0x00000001000a8c74
- (_Bool)_routeIsReceiver:(id)arg1;	// IMP=0x00000001000a8c0c
- (_Bool)_routeIsSpeaker:(id)arg1;	// IMP=0x00000001000a8ba4
- (_Bool)_routeIsAirTunes:(id)arg1;	// IMP=0x00000001000a8b3c
- (void)_pickRoute:(id)arg1;	// IMP=0x00000001000a891c
- (id)_pickableRoutesForCategory:(id)arg1 mode:(id)arg2;	// IMP=0x00000001000a86fc
@property(readonly, copy, nonatomic) NSArray *_pickableRoutes;
- (id)_pickedRoute;	// IMP=0x00000001000a7e04
- (_Bool)receiverRouteIsPicked;	// IMP=0x00000001000a7dac
- (_Bool)speakerRouteIsPicked;	// IMP=0x00000001000a7d54
- (void)clearCachedRoutes;	// IMP=0x00000001000a7cbc
- (void)restorePickedRoute;	// IMP=0x00000001000a7c18
- (void)pickRouteWithUID:(id)arg1;	// IMP=0x00000001000a798c
- (void)pickHandsetRoute;	// IMP=0x00000001000a77c4
- (void)pickSpeakerRoute;	// IMP=0x00000001000a75fc
- (_Bool)handsetRouteAvailable;	// IMP=0x00000001000a74b8
- (_Bool)speakerRouteAvailable;	// IMP=0x00000001000a7374
@property(readonly, nonatomic) TUCall *callForPickableRoutes;
@property(readonly, nonatomic) NSArray *routes;
- (void)dealloc;	// IMP=0x00000001000a706c
- (id)init;	// IMP=0x00000001000a6f5c

@end
