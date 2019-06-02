//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class GKMultiplayerActivityView, GKMultiplayerBubbleView;

@interface GKMultiplayerFooterView : UICollectionReusableView
{
    GKMultiplayerActivityView *_activityView;	// 8 = 0x8
    GKMultiplayerBubbleView *_bubbleView;	// 16 = 0x10
}

+ (id)footerView;	// IMP=0x0000000100014268
@property(retain, nonatomic) GKMultiplayerBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) GKMultiplayerActivityView *activityView; // @synthesize activityView=_activityView;
- (void)removeAllAnimationsFromBubbles;	// IMP=0x00000001000145d4
- (void)scatterOutBubblesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000145bc
- (void)setBubblesHidden:(_Bool)arg1;	// IMP=0x00000001000145a4
- (void)floatInBubbles;	// IMP=0x000000010001458c
- (void)setBubbleFooterHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001452c
- (void)setStatusFooterHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100014504
- (void)showFooterStatus:(id)arg1;	// IMP=0x0000000100014464
- (void)dealloc;	// IMP=0x00000001000143f4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000142b0

@end

