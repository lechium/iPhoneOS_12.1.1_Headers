//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCNotificationSource.h"

@class NCNotificationDispatcher, NSString;

@interface SBWalletNotificationSource : NSObject <NCNotificationSource>
{
    NCNotificationDispatcher *_dispatcher;	// 8 = 0x8
}

@property(retain, nonatomic) NCNotificationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;	// IMP=0x0000000100255240
- (void)withdrawNotificationRequestForCardItem:(id)arg1;	// IMP=0x0000000100255184
- (void)modifyNotificationRequestForCardItem:(id)arg1;	// IMP=0x0000000100255110
- (void)postNotificationRequestForCardItem:(id)arg1;	// IMP=0x000000010025509c
- (id)initWithDispatcher:(id)arg1;	// IMP=0x0000000100255010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

