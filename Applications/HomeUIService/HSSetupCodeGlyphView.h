//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface HSSetupCodeGlyphView : UIView
{
    unsigned long long _style;	// 8 = 0x8
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)_prepareConstraintsForView:(id)arg1;	// IMP=0x000000010001cb98
- (id)_clearView;	// IMP=0x000000010001cb0c
- (id)_activityIndicatorView;	// IMP=0x000000010001ca7c
- (id)_failureImageView;	// IMP=0x000000010001ca00
- (id)_successImageView;	// IMP=0x000000010001c984
- (id)_logoImageView;	// IMP=0x000000010001c8b4
- (id)_viewForStyle:(unsigned long long)arg1;	// IMP=0x000000010001c7e4
- (void)pulse;	// IMP=0x000000010001c478
- (void)transitionToStyle:(unsigned long long)arg1 pulse:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001beb0
- (id)init;	// IMP=0x000000010001be7c

@end
