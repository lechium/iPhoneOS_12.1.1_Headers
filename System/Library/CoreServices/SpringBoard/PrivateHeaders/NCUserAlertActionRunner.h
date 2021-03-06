//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCNotificationActionRunner.h"

@class NSString, SBAlertItem;

@interface NCUserAlertActionRunner : NSObject <NCNotificationActionRunner>
{
    _Bool _shouldForwardAction;	// 8 = 0x8
    SBAlertItem *_alertItem;	// 16 = 0x10
}

@property(readonly, nonatomic) __weak SBAlertItem *alertItem; // @synthesize alertItem=_alertItem;
@property(nonatomic) _Bool shouldForwardAction; // @synthesize shouldForwardAction=_shouldForwardAction;
- (void).cxx_destruct;	// IMP=0x000000010035cd0c
- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010035ccc8
- (id)initWithSBAlertItem:(id)arg1;	// IMP=0x000000010035cc50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

