//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UISlider;

__attribute__((visibility("hidden")))
@interface MAGControlPanel : UIView
{
    unsigned long long _panelState;	// 8 = 0x8
    unsigned long long _panelStyle;	// 16 = 0x10
    id <MAGLiveViewControlPanelDelegate> _delegate;	// 24 = 0x18
    UIView *_backgroundView;	// 32 = 0x20
    UIButton *_manualFocusButton;	// 40 = 0x28
    UIButton *_snapshotButton;	// 48 = 0x30
    UIButton *_filtersButton;	// 56 = 0x38
    UIButton *_torchButton;	// 64 = 0x40
    UISlider *_zoomSlider;	// 72 = 0x48
    UIImageView *_zoomOutView;	// 80 = 0x50
    UIImageView *_zoomInView;	// 88 = 0x58
}

@property(retain, nonatomic) UIImageView *zoomInView; // @synthesize zoomInView=_zoomInView;
@property(retain, nonatomic) UIImageView *zoomOutView; // @synthesize zoomOutView=_zoomOutView;
@property(retain, nonatomic) UISlider *zoomSlider; // @synthesize zoomSlider=_zoomSlider;
@property(retain, nonatomic) UIButton *torchButton; // @synthesize torchButton=_torchButton;
@property(retain, nonatomic) UIButton *filtersButton; // @synthesize filtersButton=_filtersButton;
@property(retain, nonatomic) UIButton *snapshotButton; // @synthesize snapshotButton=_snapshotButton;
@property(retain, nonatomic) UIButton *manualFocusButton; // @synthesize manualFocusButton=_manualFocusButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <MAGLiveViewControlPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000130a8
- (id)filtersButtonForUnitTesting;	// IMP=0x0000000100012f48
- (id)snapshotbuttonForUnitTesting;	// IMP=0x0000000100012f3c
- (id)zoomSliderForUnitTesting;	// IMP=0x0000000100012f30
- (id)manualFocusButtonForUnitTesting;	// IMP=0x0000000100012f24
- (id)torchButtonForUnitTesting;	// IMP=0x0000000100012f18
- (void)resumeFromTransitionWithFilterSelectionVCAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012b60
- (void)prepForTransitionWithFilterSelectionVCAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012640
@property(nonatomic) unsigned long long panelState;
- (void)setManualFocusSwitchValue:(_Bool)arg1;	// IMP=0x0000000100011f6c
- (void)setSnapshotButtonSelected:(_Bool)arg1;	// IMP=0x0000000100011f24
- (void)manualFocusButtonPressed:(id)arg1;	// IMP=0x0000000100011e70
- (void)_handleFilterButtonLongPress:(id)arg1;	// IMP=0x0000000100011e00
- (void)filtersButtonPressed:(id)arg1;	// IMP=0x0000000100011db8
- (void)snapshotButtonPressed:(id)arg1;	// IMP=0x0000000100011d70
- (void)torchButtonPressed:(id)arg1;	// IMP=0x0000000100011d34
- (void)setTorchSwitchValue:(_Bool)arg1;	// IMP=0x0000000100011c50
- (void)zoomSliderDragged:(id)arg1;	// IMP=0x0000000100011bb8
- (void)setZoomSliderValue:(double)arg1;	// IMP=0x0000000100011ba8
- (void)setZoomSliderValue:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100011b34
- (void)updateZoomSliderAXLabel;	// IMP=0x0000000100011a8c
- (void)orientationChanged:(id)arg1;	// IMP=0x0000000100011a00
- (void)userTextSizeChanged:(id)arg1;	// IMP=0x00000001000117e0
- (void)dealloc;	// IMP=0x0000000100011758
- (void)reduceTransparencyChanged:(id)arg1;	// IMP=0x000000010001174c
- (id)accessibilityElements;	// IMP=0x00000001000115ec
- (void)applyControlRotationForDeviceOrientation;	// IMP=0x00000001000113b4
- (void)tintColorDidChange;	// IMP=0x0000000100011204
- (id)initWithStyle:(unsigned long long)arg1;	// IMP=0x000000010000ee60
- (_Bool)showAccessibilityExtendedControls;	// IMP=0x000000010000ee48
- (void)_colorBackgroundView;	// IMP=0x000000010000ede4

@end

