//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class BKSDisplayRenderOverlayDescriptor, NSString, NSURL;

@interface SBRestartTransitionRequest : NSObject <BSDescriptionProviding>
{
    NSString *_requester;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    int _restartType;	// 24 = 0x18
    double _delay;	// 32 = 0x20
    _Bool _wantsPersistentSnapshot;	// 40 = 0x28
    BKSDisplayRenderOverlayDescriptor *_customOverlayDescriptor;	// 48 = 0x30
    NSURL *_applicationLaunchURL;	// 56 = 0x38
}

@property(copy, nonatomic) NSURL *applicationLaunchURL; // @synthesize applicationLaunchURL=_applicationLaunchURL;
@property(copy, nonatomic) BKSDisplayRenderOverlayDescriptor *customOverlayDescriptor; // @synthesize customOverlayDescriptor=_customOverlayDescriptor;
@property(nonatomic) _Bool wantsPersistentSnapshot; // @synthesize wantsPersistentSnapshot=_wantsPersistentSnapshot;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) int restartType; // @synthesize restartType=_restartType;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
- (void).cxx_destruct;	// IMP=0x00000001001924e8
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001001921c0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010019216c
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100192150
- (id)succinctDescription;	// IMP=0x00000001001920fc
@property(readonly, copy) NSString *description;
- (id)initWithRequester:(id)arg1 reason:(id)arg2;	// IMP=0x0000000100191e14
- (id)init;	// IMP=0x0000000100191e00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
