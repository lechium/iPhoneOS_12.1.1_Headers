//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSSFlashView.h"

@class UIView;

@interface SSSReduceTransparencyFlashView : SSSFlashView
{
    CDUnknownBlockType _oldCompletionBlock;	// 8 = 0x8
    UIView *_colorView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100028954
- (void)flashWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000287d8
- (void)layoutSubviews;	// IMP=0x0000000100028728
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100028698

@end
