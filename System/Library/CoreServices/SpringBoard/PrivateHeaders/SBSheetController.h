//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UIWindow;

@interface SBSheetController : NSObject
{
    NSMutableDictionary *_appToSheetMap;	// 8 = 0x8
    UIWindow *_presentationWindow;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001001d73f8
- (void).cxx_destruct;	// IMP=0x00000001001d8c04
- (_Bool)sheetWantsProgress;	// IMP=0x00000001001d8abc
- (id)applicationForTopSheet;	// IMP=0x00000001001d8984
- (void)dismissSheetsForApplication:(id)arg1;	// IMP=0x00000001001d87c8
- (void)dismissAllSheets;	// IMP=0x00000001001d8544
- (_Bool)isShowingSheetsForApplication:(id)arg1;	// IMP=0x00000001001d84d0
- (_Bool)isShowingSheets;	// IMP=0x00000001001d84a0
- (void)sendStatusBarOrientationWillChangeToSheets:(long long)arg1 duration:(float)arg2;	// IMP=0x00000001001d82e8
- (void)dismissRemoteViewIdentifier:(id)arg1 forApplication:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001001d8030
- (_Bool)presentRemoteViewIdentifier:(id)arg1 asSheetForApplication:(id)arg2 requireTopApplication:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x00000001001d7de8
- (void)dismissSheetView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001001d7ac0
- (void)_tearDownSheet:(id)arg1;	// IMP=0x00000001001d794c
- (void)presentSheetView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001001d750c
- (id)init;	// IMP=0x00000001001d748c

@end
