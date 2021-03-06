//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DragInteractionDriver.h"

@class BrowserController, NSString, TabDragContext, TabDragView;

@interface TabDragInteractionDriver : NSObject <DragInteractionDriver>
{
    TabDragContext *_context;	// 8 = 0x8
    TabDragView *_tabDragView;	// 16 = 0x10
    unsigned long long _previousDragInteractionState;	// 24 = 0x18
    unsigned long long _currentDragInteractionState;	// 32 = 0x20
    _Bool _tabHasBeenPulledOutFromTabBar;	// 40 = 0x28
    BrowserController *_destinationBrowserController;	// 48 = 0x30
    double _maxVerticalPositionToReorderTabsInTabBar;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010007700c
- (void)_draggingUpdatedAtPointInReferenceSpace:(struct CGPoint)arg1 forBrowserController:(id)arg2 currentDragInteractionState:(unsigned long long)arg3 previousDragInteractionState:(unsigned long long)arg4;	// IMP=0x0000000100076e3c
- (void)_draggingExitedBrowserController:(id)arg1 lastDragInteractionState:(unsigned long long)arg2;	// IMP=0x0000000100076d74
- (void)_draggingEnteredBrowserController:(id)arg1 atPointInReferenceSpace:(struct CGPoint)arg2 currentDragInteractionState:(unsigned long long)arg3;	// IMP=0x00000001000768e0
- (void)_updateDragDestinationAtPointInReferenceSpace:(struct CGPoint)arg1 draggingView:(id)arg2;	// IMP=0x000000010007677c
- (void)_animateTabDragViewBasedOnPointInReferenceSpace:(struct CGPoint)arg1 draggingView:(id)arg2;	// IMP=0x0000000100075fd4
- (void)_updateTransformForDraggingView:(id)arg1;	// IMP=0x0000000100075e40
- (unsigned long long)_inferredTabDragInteractionStateAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000100075994
- (id)_browserControllerAtPoint:(struct CGPoint)arg1;	// IMP=0x00000001000758b0
- (_Bool)_browserHasOneWindow;	// IMP=0x000000010007582c
- (void)prepareToEndDragInteractionWithPoint:(struct CGPoint)arg1 draggingView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100075134
- (struct CGPoint)adjustedPointForUserDragInteractionPoint:(struct CGPoint)arg1 draggingView:(id)arg2;	// IMP=0x000000010007503c
- (void)dragInteractionDidUpdateWithPoint:(struct CGPoint)arg1 draggingView:(id)arg2;	// IMP=0x0000000100074e68
- (void)dragInteractionDidBeginWithContext:(id)arg1 draggingView:(id)arg2;	// IMP=0x0000000100074514

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

