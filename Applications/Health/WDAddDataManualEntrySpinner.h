//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDAddDataManualEntryItem.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSString, UIPickerView, WDManualDataEntryTableViewCell;

@interface WDAddDataManualEntrySpinner : WDAddDataManualEntryItem <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_pickerView;	// 40 = 0x28
    WDManualDataEntryTableViewCell *_tableViewCell;	// 48 = 0x30
    long long _selectedPickerViewIndex;	// 56 = 0x38
    id <WDAddDataManualEntrySpinnerDataSource> _dataSource;	// 64 = 0x40
}

@property(nonatomic) __weak id <WDAddDataManualEntrySpinnerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x00000001000fa940
- (void)setTitle:(id)arg1;	// IMP=0x00000001000fa88c
- (void)_updateTableViewCellValue;	// IMP=0x00000001000fa7d8
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x00000001000fa7cc
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;	// IMP=0x00000001000fa678
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x00000001000fa628
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x00000001000fa620
- (void)beginEditing;	// IMP=0x00000001000fa608
- (void)setValue:(id)arg1;	// IMP=0x00000001000fa55c
- (id)generateValue;	// IMP=0x00000001000fa4b4
- (id)tableViewCells;	// IMP=0x00000001000fa2cc
@property(nonatomic) long long _wd_deliveryReason;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

