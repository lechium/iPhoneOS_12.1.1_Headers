//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"
#import "SBThermalWarningAlertItemDelegate.h"

@class NSArray, NSString, SBAlertItem;

@interface SBTestableAlertItemTestRecipe : NSObject <SBThermalWarningAlertItemDelegate, SBTestRecipe>
{
    SBAlertItem *_item;	// 8 = 0x8
    NSArray *_recipesToTest;	// 16 = 0x10
}

+ (id)nameForCase:(long long)arg1;	// IMP=0x000000010020a42c
+ (id)testCasesGrouped;	// IMP=0x000000010020a358
+ (id)testCases;	// IMP=0x000000010020a284
+ (id)title;	// IMP=0x000000010020a258
@property(retain, nonatomic) NSArray *recipesToTest; // @synthesize recipesToTest=_recipesToTest;
- (void).cxx_destruct;	// IMP=0x000000010020d574
- (id)alertForIndex:(long long)arg1;	// IMP=0x000000010020b3b0
- (id)_nextAlertItemToTest;	// IMP=0x000000010020b2d4
- (id)dataPlanAlertItemForCase:(long long)arg1;	// IMP=0x000000010020afd4
- (id)_mapsApp;	// IMP=0x000000010020af6c
- (id)_anySUDescriptor;	// IMP=0x000000010020af3c
- (id)_anyLeafIcon;	// IMP=0x000000010020ae98
- (id)_anyUserInstalledAppIcon;	// IMP=0x000000010020acc8
- (id)_anyAppIcon;	// IMP=0x000000010020ab3c
- (void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2;	// IMP=0x000000010020ab30
- (void)handleVolumeDecrease;	// IMP=0x000000010020ab10
- (void)handleVolumeIncrease;	// IMP=0x000000010020a9e4
- (void)_dismissCurrentItem;	// IMP=0x000000010020a9a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

