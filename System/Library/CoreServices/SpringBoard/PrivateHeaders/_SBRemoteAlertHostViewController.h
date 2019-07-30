//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "SBUIRemoteAlertHostInterface.h"

@class NSString;

@interface _SBRemoteAlertHostViewController : _UIRemoteViewController <SBUIRemoteAlertHostInterface>
{
    id <_SBRemoteAlertHostViewControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_serviceClassName;	// 16 = 0x10
}

+ (id)serviceViewControllerInterface;	// IMP=0x00000001004d8394
+ (id)exportedInterface;	// IMP=0x00000001004d8378
@property(copy, nonatomic) NSString *serviceClassName; // @synthesize serviceClassName=_serviceClassName;
@property(nonatomic) __weak id <_SBRemoteAlertHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001004d8400
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000001004d8320
- (void)setWhitePointAdaptivityStyle:(long long)arg1;	// IMP=0x00000001004d82dc
- (void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1;	// IMP=0x00000001004d82d8
- (void)setShouldDisableFadeInAnimation:(_Bool)arg1;	// IMP=0x00000001004d8294
- (void)setShouldDismissOnUILock:(_Bool)arg1;	// IMP=0x00000001004d8250
- (void)setStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;	// IMP=0x00000001004d81fc
- (void)setDesiredAutoLockDuration:(double)arg1;	// IMP=0x00000001004d81b0
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000001004d8148
- (void)setDesiredStatusBarStyleOverrides:(int)arg1;	// IMP=0x00000001004d8104
- (void)setDismissalAnimationStyle:(long long)arg1;	// IMP=0x00000001004d80c0
- (void)setAllowsAlertStacking:(_Bool)arg1;	// IMP=0x00000001004d807c
- (void)setAllowsMenuButtonDismissal:(_Bool)arg1;	// IMP=0x00000001004d8038
- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;	// IMP=0x00000001004d7fe4
- (void)setWallpaperTunnelActive:(_Bool)arg1;	// IMP=0x00000001004d7fa0
- (void)setDesiredHardwareButtonEvents:(long long)arg1;	// IMP=0x00000001004d7f5c
- (void)dismissAndLockUIIfNecessary;	// IMP=0x00000001004d7f20
- (void)dismiss;	// IMP=0x00000001004d7ee4
- (void)setAllowsBanners:(_Bool)arg1;	// IMP=0x00000001004d7ea0
- (id)description;	// IMP=0x00000001004d7ddc

@end
