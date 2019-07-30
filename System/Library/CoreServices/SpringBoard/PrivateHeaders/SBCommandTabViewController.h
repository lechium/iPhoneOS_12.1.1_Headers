//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBIconViewDelegate.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, SBIconModel, SBIconView, UIImageView, UIView, _UIBackdropView, _UIBackdropViewSettings;

@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate>
{
    NSArray *_switcherDisplayItems;	// 8 = 0x8
    unsigned long long _selectedIndex;	// 16 = 0x10
    SBIconModel *_iconModel;	// 24 = 0x18
    NSMutableArray *_iconViews;	// 32 = 0x20
    _UIBackdropViewSettings *_blurSettings;	// 40 = 0x28
    _UIBackdropView *_backgroundBackdropView;	// 48 = 0x30
    UIView *_blurredBackgroundView;	// 56 = 0x38
    UIImageView *_selectionSquareView;	// 64 = 0x40
    SBIconView *_selectedIconView;	// 72 = 0x48
    NSLayoutConstraint *_selectionXLayoutConstraint;	// 80 = 0x50
    id <SBCommandTabViewControllerDelegate> _delegate;	// 88 = 0x58
}

@property(nonatomic) __weak id <SBCommandTabViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_selectionXLayoutConstraint, setter=_setSelectionXLayoutConstraint:) NSLayoutConstraint *selectionXLayoutConstraint; // @synthesize selectionXLayoutConstraint=_selectionXLayoutConstraint;
@property(retain, nonatomic, getter=_selectedIconView, setter=_setSelectedIconView:) SBIconView *selectedIconView; // @synthesize selectedIconView=_selectedIconView;
@property(retain, nonatomic, getter=_selectionSquareView, setter=_setSelectionSquareView:) UIImageView *selectionSquareView; // @synthesize selectionSquareView=_selectionSquareView;
@property(retain, nonatomic, getter=_blurredBackgroundView, setter=_setBlurredBackgroundView:) UIView *blurredBackgroundView; // @synthesize blurredBackgroundView=_blurredBackgroundView;
@property(retain, nonatomic, getter=_backgroundBackdropView, setter=_setBackgroundBackdropView:) _UIBackdropView *backgroundBackdropView; // @synthesize backgroundBackdropView=_backgroundBackdropView;
@property(retain, nonatomic, getter=_blurSettings, setter=_setBlurSettings:) _UIBackdropViewSettings *blurSettings; // @synthesize blurSettings=_blurSettings;
- (void).cxx_destruct;	// IMP=0x000000010045ede8
- (void)_handleKeyUIEvent:(id)arg1;	// IMP=0x000000010045ea1c
- (void)_handleShiftCommandTab:(id)arg1;	// IMP=0x000000010045ea10
- (void)_handleCommandTab:(id)arg1;	// IMP=0x000000010045ea04
- (void)_layoutAppIcons;	// IMP=0x000000010045e2dc
- (void)_moveSelectionSquareToIconAtIndex:(unsigned long long)arg1;	// IMP=0x000000010045e020
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000010045e018
- (void)didReceiveMemoryWarning;	// IMP=0x000000010045dfe4
- (id)selectedApplicationDisplayItem;	// IMP=0x000000010045df50
- (void)previous;	// IMP=0x000000010045dee0
- (void)next;	// IMP=0x000000010045de6c
- (void)showCommandTabBar;	// IMP=0x000000010045de28
- (void)viewDidLoad;	// IMP=0x000000010045cf50
- (id)init;	// IMP=0x000000010045cb84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
