//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertViewAdapter.h"

@interface SBUIFullscreenAlertViewAdapter : SBAlertViewAdapter
{
    _Bool _revealedContentBeneathForDismiss;	// 8 = 0x8
    _Bool _animatingOut;	// 9 = 0x9
}

- (void)setAlert:(id)arg1;	// IMP=0x000000010028e730
- (void)setShouldAnimateIn:(_Bool)arg1;	// IMP=0x000000010028e6e8
- (void)dismiss;	// IMP=0x000000010028e574
- (void)updateSpringBoardInPreparationForTransparentDismiss;	// IMP=0x000000010028e334
- (void)viewAnimatedOut;	// IMP=0x000000010028e318
- (_Bool)isAnimatingOut;	// IMP=0x000000010028e308
- (_Bool)shouldAnimateIconsIn;	// IMP=0x000000010028e294
- (void)alertDisplayWillBecomeVisible;	// IMP=0x000000010028e284
- (_Bool)isReadyToBeRemovedFromView;	// IMP=0x000000010028e1fc
- (id)alert;	// IMP=0x000000010028e1c8

@end

