//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PhoneTabViewController.h"

@class NSString;

@interface PhoneViewController : UIViewController <PhoneTabViewController>
{
    double _cachedCellHeight;	// 8 = 0x8
    Class _cellClassForCachedCellHeight;	// 16 = 0x10
}

+ (_Bool)tabBarIconImageFinished:(id *)arg1 forTabBarItemName:(id)arg2;	// IMP=0x000000010001db60
+ (void)cacheFinishedTabBarIconImage:(id)arg1 withTabBarItemName:(id)arg2;	// IMP=0x000000010001db5c
+ (id)defaultPNGName;	// IMP=0x000000010001db18
+ (id)tabBarIconName;	// IMP=0x000000010001db10
+ (CDStruct_5ec447a9)badge;	// IMP=0x0000000100006c80
+ (int)tabViewType;	// IMP=0x000000010001db08
+ (void)initializeIconAndTitle:(id)arg1;	// IMP=0x00000001000067f8
@property(retain, nonatomic) Class cellClassForCachedCellHeight; // @synthesize cellClassForCachedCellHeight=_cellClassForCachedCellHeight;
@property double cachedCellHeight; // @synthesize cachedCellHeight=_cachedCellHeight;
- (void).cxx_destruct;	// IMP=0x000000010001db70
- (void)_updateCachedCellHeight;	// IMP=0x00000001000091c0
- (void)_prepareForLoadView;	// IMP=0x000000010000909c
- (void)contentSizeCategoryDidChange;	// IMP=0x000000010001db50
- (void)_loadOffsetDefaultForKey:(id)arg1 withScrollView:(id)arg2;	// IMP=0x00000001000093cc
- (void)_saveOffsetDefaultForKey:(id)arg1 withScrollView:(id)arg2;	// IMP=0x00000001000108d4
- (void)savePreferences;	// IMP=0x0000000100010c88
- (void)prepareForSnapshot;	// IMP=0x000000010001db4c
- (_Bool)shouldSnapshot;	// IMP=0x000000010001db44
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010000975c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010001d96c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

