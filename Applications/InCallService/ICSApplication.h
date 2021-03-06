//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "NSURLConnectionDataDelegate.h"

@class NSString;

@interface ICSApplication : UIApplication <NSURLConnectionDataDelegate>
{
}

+ (_Bool)shouldBackgroundMainThreadOnSuspendedLaunch;	// IMP=0x0000000100056b3c
- (void)sendEvent:(id)arg1;	// IMP=0x0000000100056b44
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000ef854
- (_Bool)runSwapCameraTestWithOptions:(id)arg1;	// IMP=0x00000001000ef71c
- (_Bool)runEndCallTestWithOptions:(id)arg1;	// IMP=0x00000001000ef5b0
- (_Bool)runIncomingCallTestWithOptions:(id)arg1;	// IMP=0x00000001000ef1b4
- (_Bool)runOutgoingCallTestWithOptions:(id)arg1;	// IMP=0x00000001000eef98
- (id)pptOutgoingDialRequestWithDestinationID:(id)arg1;	// IMP=0x00000001000eed50
- (_Bool)currentTestIsFaceTime;	// IMP=0x00000001000eed34
- (void)handleTestingStateDidChangeNotification:(id)arg1;	// IMP=0x00000001000eed1c
- (void)handleCallStatusChangedNotification:(id)arg1;	// IMP=0x00000001000eecbc
- (void)setUpTestNamed:(id)arg1;	// IMP=0x00000001000eeb88
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x00000001000ee95c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

