//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKReportView.h"

@class NSLayoutConstraint;

@interface HKReportContentView : HKReportView
{
    NSLayoutConstraint *_widthConstraint;	// 8 = 0x8
    NSLayoutConstraint *_heightConstraint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000407f0
- (void)fitContents;	// IMP=0x00000001000407bc
- (void)setHeight:(double)arg1;	// IMP=0x0000000100040778
- (void)setWidth:(double)arg1;	// IMP=0x0000000100040734
- (void)_setupView;	// IMP=0x0000000100040670
- (id)init;	// IMP=0x0000000100040618

@end

