//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

#import "SFFeedbackListener.h"

@class NSArray, NSString;

@interface DDFeedbackListener : NSProxy <SFFeedbackListener>
{
    NSArray *_listeners;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100005068
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000100004dd8
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000100004bac
- (id)initWithListeners:(id)arg1;	// IMP=0x0000000100004b14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

