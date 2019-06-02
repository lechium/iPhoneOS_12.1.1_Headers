//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDropInteraction.h"

#import "UIDropInteractionDelegate_Private.h"

@class NSString, UIView<TabViewDropInteractionHandling>;

@interface TabViewDropInteraction : UIDropInteraction <UIDropInteractionDelegate_Private>
{
    _Bool _canAcceptAnyDrop;	// 8 = 0x8
    UIView<TabViewDropInteractionHandling> *_tabView;	// 16 = 0x10
}

+ (void)addInteractionToTabView:(id)arg1;	// IMP=0x0000000100125ca4
- (void).cxx_destruct;	// IMP=0x00000001001260e0
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x00000001001260d8
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x0000000100125ef0
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x0000000100125dfc
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x0000000100125de4
- (id)initWithTabView:(id)arg1;	// IMP=0x0000000100125d20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
