//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDCategoryAddDataViewController.h"

#import "WDAddDataManualEntrySpinnerDataSource.h"

@class NSString, WDAddDataManualEntrySpinner;

@interface WDMenstruationAddDataViewController : WDCategoryAddDataViewController <WDAddDataManualEntrySpinnerDataSource>
{
    WDAddDataManualEntrySpinner *_isStartOfCycleEntryItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010001cf8c
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010001cef0
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;	// IMP=0x000000010001ce44
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;	// IMP=0x000000010001ce3c
- (_Bool)useSingleStartAndEndDate;	// IMP=0x000000010001ce34
- (id)defaultMetadata;	// IMP=0x000000010001cd24
- (long long)numberOfSections;	// IMP=0x000000010001cd1c
- (id)manualEntryItemsForSection:(long long)arg1;	// IMP=0x000000010001cbc4
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;	// IMP=0x000000010001ca58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

