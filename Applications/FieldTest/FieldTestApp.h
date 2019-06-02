//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "UIApplicationDelegate.h"
#import "UINavigationControllerDelegate.h"

@class FieldTestModel, FieldTestSaveViewController, NSDateFormatter, NSString, UINavigationController, UIWindow;

@interface FieldTestApp : UIApplication <UIApplicationDelegate, UINavigationControllerDelegate>
{
    UIWindow *_window;	// 8 = 0x8
    UINavigationController *_navController;	// 16 = 0x10
    FieldTestSaveViewController *_saveViewController;	// 24 = 0x18
    FieldTestModel *_model;	// 32 = 0x20
    _Bool _allowSaveButton;	// 40 = 0x28
    NSDateFormatter *_dateFormatter;	// 48 = 0x30
    NSString *_updateMessage;	// 56 = 0x38
    _Bool allowSaveButton;	// 64 = 0x40
    FieldTestSaveViewController *saveViewController;	// 72 = 0x48
    UIWindow *window;	// 80 = 0x50
    NSString *updateMessage;	// 88 = 0x58
}

@property(nonatomic) _Bool allowSaveButton; // @synthesize allowSaveButton;
@property(retain, nonatomic) NSString *updateMessage; // @synthesize updateMessage;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
@property(retain, nonatomic) FieldTestSaveViewController *saveViewController; // @synthesize saveViewController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000025c4
- (void)updateViewControllerFromModel;	// IMP=0x00000001000023bc
- (void)updateStatusForViewController:(id)arg1;	// IMP=0x0000000100002344
- (void)closeSaveView;	// IMP=0x00000001000022f4
- (void)showSaveView;	// IMP=0x0000000100002248
- (void)applicationWillTerminate;	// IMP=0x0000000100002180
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x0000000100001f14
- (void)getSaveButtonPref;	// IMP=0x0000000100001ec0
- (void)_setGSMRSSI:(struct __CFBoolean *)arg1;	// IMP=0x0000000100001e78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
