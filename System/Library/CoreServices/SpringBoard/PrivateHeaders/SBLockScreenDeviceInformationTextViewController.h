//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface SBLockScreenDeviceInformationTextViewController : UIViewController
{
    _Bool _inLostMode;	// 8 = 0x8
}

@property(nonatomic, getter=isInLostMode) _Bool inLostMode; // @synthesize inLostMode=_inLostMode;
- (void)profileStateChangedNotification:(id)arg1;	// IMP=0x0000000100551cd8
- (void)_updateText;	// IMP=0x0000000100551850
- (id)deviceInformationTextView;	// IMP=0x000000010055181c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100551790
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001005516bc
- (void)loadView;	// IMP=0x0000000100551654

@end

