//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIGestureRecognizer, UIInteractionProgress;

@interface SBWorkspaceInteractionContext : NSObject
{
    UIInteractionProgress *_interactionProgress;	// 8 = 0x8
    UIGestureRecognizer *_gestureRecognizer;	// 16 = 0x10
}

@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
- (void).cxx_destruct;	// IMP=0x00000001001d73b8
- (id)initWithGestureRecognizer:(id)arg1;	// IMP=0x00000001001d730c
- (id)initWithInteractionProgress:(id)arg1;	// IMP=0x00000001001d7280

@end

