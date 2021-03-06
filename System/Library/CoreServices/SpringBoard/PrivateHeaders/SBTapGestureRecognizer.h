//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITapGestureRecognizer.h"

@class UIPressesEvent;

@interface SBTapGestureRecognizer : UITapGestureRecognizer
{
    UIPressesEvent *_latestPressesEvent;	// 8 = 0x8
}

@property(readonly, nonatomic) UIPressesEvent *latestPressesEvent; // @synthesize latestPressesEvent=_latestPressesEvent;
- (void).cxx_destruct;	// IMP=0x0000000100435dc8
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100435d1c
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100435c80
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100435be4
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100435b48
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000100435ad0

@end

