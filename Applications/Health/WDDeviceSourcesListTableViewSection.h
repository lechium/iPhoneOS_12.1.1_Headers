//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDTableViewSection.h"

#import "WDSourceTableViewSection.h"

@class HKAuthorizationSettingsViewController, NSArray, NSMutableSet, NSString;

@interface WDDeviceSourcesListTableViewSection : WDTableViewSection <WDSourceTableViewSection>
{
    NSArray *_list;	// 8 = 0x8
    NSArray *_sources;	// 16 = 0x10
    NSArray *_devices;	// 24 = 0x18
    NSMutableSet *_identifiers;	// 32 = 0x20
    HKAuthorizationSettingsViewController *_settingsViewController;	// 40 = 0x28
}

@property(retain, nonatomic) HKAuthorizationSettingsViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
@property(retain, nonatomic) NSMutableSet *identifiers; // @synthesize identifiers=_identifiers;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;	// IMP=0x0000000100125bf4
- (double)heightForRow:(unsigned long long)arg1;	// IMP=0x0000000100125b30
- (double)estimatedHeightForRow:(unsigned long long)arg1;	// IMP=0x0000000100125b20
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010012549c
- (id)willSelectRow:(id)arg1;	// IMP=0x00000001001253bc
- (id)_noSourcesCellWithTableView:(id)arg1;	// IMP=0x00000001001251c0
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;	// IMP=0x0000000100124e98
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;	// IMP=0x0000000100124d8c
- (id)titleForFooter;	// IMP=0x0000000100124d84
- (id)titleForHeader;	// IMP=0x0000000100124d10
- (unsigned long long)numberOfRows;	// IMP=0x0000000100124ce0
- (void)applicationWillEnterForeground;	// IMP=0x0000000100124c7c
- (void)setUpWithTableViewController:(id)arg1;	// IMP=0x0000000100124c08
- (_Bool)_isSourceSelectable:(id)arg1;	// IMP=0x0000000100124bc8
- (id)_sourceForRow:(long long)arg1;	// IMP=0x0000000100124bb0
- (void)setSources:(id)arg1 devices:(id)arg2;	// IMP=0x0000000100124680
- (void)reloadSources;	// IMP=0x0000000100123d78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

