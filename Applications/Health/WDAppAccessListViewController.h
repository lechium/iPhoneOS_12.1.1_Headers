//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

@class HKHealthStore, HKSample, NSArray, UIFont;

@interface WDAppAccessListViewController : HKTableViewController
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    NSArray *_allowedApps;	// 16 = 0x10
    NSArray *_disallowedApps;	// 24 = 0x18
    HKSample *_sample;	// 32 = 0x20
    UIFont *_bodyFont;	// 40 = 0x28
}

@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(retain, nonatomic) HKSample *sample; // @synthesize sample=_sample;
@property(retain, nonatomic) NSArray *disallowedApps; // @synthesize disallowedApps=_disallowedApps;
@property(retain, nonatomic) NSArray *allowedApps; // @synthesize allowedApps=_allowedApps;
- (void).cxx_destruct;	// IMP=0x00000001000440e8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100043f64
- (void)resetAccess;	// IMP=0x0000000100043cfc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100043c74
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100043a34
- (id)_textForCellAtIndexPath:(id)arg1;	// IMP=0x00000001000438a0
- (id)_imageForCellAtIndexPath:(id)arg1;	// IMP=0x00000001000437a4
- (id)_identifierForCellInSection:(long long)arg1;	// IMP=0x0000000100043714
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100043620
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100043590
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100043588
- (void)_refreshAppAuthorizationData;	// IMP=0x0000000100042dbc
- (void)viewDidLoad;	// IMP=0x0000000100042cec
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;	// IMP=0x0000000100042bbc

@end
