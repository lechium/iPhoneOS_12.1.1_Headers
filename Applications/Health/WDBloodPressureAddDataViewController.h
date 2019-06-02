//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDAddDataViewController.h"

#import "WDAddDataManualEntryItemDelegate.h"

@class NSString, WDAddDataManualEntryItem;

@interface WDBloodPressureAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_dateTimeEntryItem;	// 32 = 0x20
    WDAddDataManualEntryItem *_systolicEntryItem;	// 40 = 0x28
    WDAddDataManualEntryItem *_diastolicEntryItem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000721fc
- (void)manualEntryItemDidUpdate:(id)arg1;	// IMP=0x0000000100071e40
- (_Bool)_systolicAndDiastolicHaveValues;	// IMP=0x0000000100071dc0
- (id)generateHKObjects;	// IMP=0x00000001000719e0
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000713a8
- (id)defaultEditingItem;	// IMP=0x0000000100071398
- (long long)numberOfSections;	// IMP=0x0000000100071390
- (id)manualEntryItemsForSection:(long long)arg1;	// IMP=0x0000000100071300
- (void)viewDidLoad;	// IMP=0x00000001000712ac
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;	// IMP=0x0000000100070fa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

