//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDDisplayTypeAddDataViewController.h"

@class WDAddDataManualEntryItem;

@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController
{
    WDAddDataManualEntryItem *_heightPickerManualEntryItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000057d8
- (id)_inchUnitString;	// IMP=0x0000000100005760
- (id)_feetUnitString;	// IMP=0x00000001000056e8
- (_Bool)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2;	// IMP=0x0000000100005638
- (id)createValueFieldManualEntryItem;	// IMP=0x00000001000055e0
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;	// IMP=0x0000000100005444

@end
