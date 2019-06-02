//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTACircleButton;

@interface MTAStopwatchController : NSObject
{
    id <MTAStopwatchControlsTarget> _target;	// 8 = 0x8
    MTACircleButton *_startStopButton;	// 16 = 0x10
    MTACircleButton *_lapControlButton;	// 24 = 0x18
    unsigned long long _mode;	// 32 = 0x20
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) MTACircleButton *lapControlButton; // @synthesize lapControlButton=_lapControlButton;
@property(readonly, nonatomic) MTACircleButton *startStopButton; // @synthesize startStopButton=_startStopButton;
@property(readonly, nonatomic) __weak id <MTAStopwatchControlsTarget> target; // @synthesize target=_target;
- (void).cxx_destruct;	// IMP=0x000000010000a58c
- (void)setMode:(unsigned long long)arg1 force:(_Bool)arg2;	// IMP=0x0000000100009ef8
- (void)_lapControlButtonDown:(id)arg1;	// IMP=0x0000000100009e4c
- (void)_startStopButtonDown:(id)arg1;	// IMP=0x0000000100009d90
- (void)setButtonSize:(unsigned long long)arg1;	// IMP=0x0000000100009d38
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000100009b54

@end

